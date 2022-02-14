
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lancer_cmd_req_pport_stats {int dummy; } ;
struct device {int dummy; } ;
struct be_mcc_mailbox {int dummy; } ;
struct be_dma_mem {int size; void* dma; void* va; } ;
struct be_cmd_req_rx_filter {int dummy; } ;
struct be_cmd_req_get_stats_v2 {int dummy; } ;
struct be_cmd_req_get_stats_v1 {int dummy; } ;
struct be_cmd_req_get_stats_v0 {int dummy; } ;
struct TYPE_3__ {int err_detection_work; scalar_t__ resched_delay; int recovery_state; } ;
struct be_adapter {int rx_fc; int tx_fc; int be_get_temp_freq; int vxlan_port_list; TYPE_1__ error_recovery; int work; TYPE_2__* pdev; int et_cmd_compl; int mcc_cq_lock; int rx_filter_lock; int mcc_lock; int mbox_lock; struct be_dma_mem stats_cmd; struct be_dma_mem rx_filter; struct be_dma_mem mbox_mem; struct be_dma_mem mbox_mem_alloced; } ;
struct TYPE_4__ {struct device dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_5 (struct device*,int,void**,int ) ;
 int FUNC_6 (struct device*,int,void*,void*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct be_adapter*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct be_adapter *VAR_5)
{
 struct be_dma_mem *VAR_6 = &VAR_5->mbox_mem_alloced;
 struct be_dma_mem *VAR_7 = &VAR_5->mbox_mem;
 struct be_dma_mem *VAR_8 = &VAR_5->rx_filter;
 struct be_dma_mem *VAR_9 = &VAR_5->stats_cmd;
 struct device *VAR_10 = &VAR_5->pdev->dev;
 int VAR_11 = 0;

 VAR_6->size = sizeof(struct be_mcc_mailbox) + 16;
 VAR_6->va = FUNC_5(VAR_10, VAR_6->size,
      &VAR_6->dma,
      VAR_2);
 if (!VAR_6->va)
  return -VAR_0;

 VAR_7->size = sizeof(struct be_mcc_mailbox);
 VAR_7->va = FUNC_4(VAR_6->va, 16);
 VAR_7->dma = FUNC_4(VAR_6->dma, 16);

 VAR_8->size = sizeof(struct be_cmd_req_rx_filter);
 VAR_8->va = FUNC_5(VAR_10, VAR_8->size,
        &VAR_8->dma, VAR_2);
 if (!VAR_8->va) {
  VAR_11 = -VAR_0;
  goto free_mbox;
 }

 if (FUNC_8(VAR_5))
  VAR_9->size = sizeof(struct lancer_cmd_req_pport_stats);
 else if (FUNC_0(VAR_5))
  VAR_9->size = sizeof(struct be_cmd_req_get_stats_v0);
 else if (FUNC_1(VAR_5))
  VAR_9->size = sizeof(struct be_cmd_req_get_stats_v1);
 else
  VAR_9->size = sizeof(struct be_cmd_req_get_stats_v2);
 VAR_9->va = FUNC_5(VAR_10, VAR_9->size,
        &VAR_9->dma, VAR_2);
 if (!VAR_9->va) {
  VAR_11 = -VAR_0;
  goto free_rx_filter;
 }

 FUNC_9(&VAR_5->mbox_lock);
 FUNC_9(&VAR_5->mcc_lock);
 FUNC_9(&VAR_5->rx_filter_lock);
 FUNC_11(&VAR_5->mcc_cq_lock);
 FUNC_7(&VAR_5->et_cmd_compl);

 FUNC_10(VAR_5->pdev);

 FUNC_2(&VAR_5->work, VAR_4);

 VAR_5->error_recovery.recovery_state = VAR_1;
 VAR_5->error_recovery.resched_delay = 0;
 FUNC_2(&VAR_5->error_recovery.err_detection_work,
     VAR_3);

 VAR_5->rx_fc = 1;
 VAR_5->tx_fc = 1;


 VAR_5->be_get_temp_freq = 64;

 FUNC_3(&VAR_5->vxlan_port_list);
 return 0;

free_rx_filter:
 FUNC_6(VAR_10, VAR_8->size, VAR_8->va, VAR_8->dma);
free_mbox:
 FUNC_6(VAR_10, VAR_6->size, VAR_6->va,
     VAR_6->dma);
 return VAR_11;
}
