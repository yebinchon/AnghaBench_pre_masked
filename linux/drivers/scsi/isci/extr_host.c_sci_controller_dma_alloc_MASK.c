
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union scu_remote_node_context {int dummy; } scu_remote_node_context ;
typedef int u32 ;
struct scu_task_context {int dummy; } ;
struct isci_request {struct isci_host* isci_host; int request_daddr; struct isci_host* owning_controller; int * tc; } ;
struct isci_host {int remote_node_entries; int task_context_entries; struct isci_request** reqs; int * task_context_table; void* ufi_buf; int ufi_dma; int tc_dma; void* remote_node_context_table; int rnc_dma; void* completion_queue; int cq_dma; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct device*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct isci_host *VAR_5)
{
 struct device *VAR_6 = &VAR_5->pdev->dev;
 size_t VAR_7;
 int VAR_8;


 if (VAR_5->completion_queue)
  return 0;

 VAR_7 = VAR_4 * sizeof(u32);
 VAR_5->completion_queue = FUNC_0(VAR_6, VAR_7, &VAR_5->cq_dma,
            VAR_1);
 if (!VAR_5->completion_queue)
  return -VAR_0;

 VAR_7 = VAR_5->remote_node_entries * sizeof(union scu_remote_node_context);
 VAR_5->remote_node_context_table = FUNC_0(VAR_6, VAR_7, &VAR_5->rnc_dma,
              VAR_1);

 if (!VAR_5->remote_node_context_table)
  return -VAR_0;

 VAR_7 = VAR_5->task_context_entries * sizeof(struct scu_task_context),
 VAR_5->task_context_table = FUNC_0(VAR_6, VAR_7, &VAR_5->tc_dma,
       VAR_1);
 if (!VAR_5->task_context_table)
  return -VAR_0;

 VAR_7 = VAR_3;
 VAR_5->ufi_buf = FUNC_0(VAR_6, VAR_7, &VAR_5->ufi_dma, VAR_1);
 if (!VAR_5->ufi_buf)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct isci_request *VAR_9;
  dma_addr_t VAR_10;

  VAR_9 = FUNC_0(VAR_6, sizeof(*VAR_9), &VAR_10, VAR_1);
  if (!VAR_9)
   return -VAR_0;

  VAR_9->tc = &VAR_5->task_context_table[VAR_8];
  VAR_9->owning_controller = VAR_5;
  VAR_9->request_daddr = VAR_10;
  VAR_9->isci_host = VAR_5;
  VAR_5->reqs[VAR_8] = VAR_9;
 }

 return 0;
}
