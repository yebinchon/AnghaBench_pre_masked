
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rsp_que {int dummy; } ;
struct qla_msix_entry {struct rsp_que* handle; int vector; scalar_t__ have_irq; } ;
struct TYPE_5__ {scalar_t__ msix_enabled; } ;
struct qla_hw_data {int msix_count; int pdev; TYPE_1__ flags; struct qla_msix_entry* msix_entries; struct rsp_que** rsp_q_map; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int ,struct rsp_que*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct qla_msix_entry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_2__*,int,char*) ;
 int VAR_0 ;

void
FUNC_6(scsi_qla_host_t *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;
 struct rsp_que *VAR_3;
 struct qla_msix_entry *VAR_4;
 int VAR_5;





 if (!VAR_2->rsp_q_map || !VAR_2->rsp_q_map[0])
  goto free_irqs;
 VAR_3 = VAR_2->rsp_q_map[0];

 if (VAR_2->flags.msix_enabled) {
  for (VAR_5 = 0; VAR_5 < VAR_2->msix_count; VAR_5++) {
   VAR_4 = &VAR_2->msix_entries[VAR_5];
   if (VAR_4->have_irq) {
    FUNC_1(VAR_4->vector, ((void*)0));
    FUNC_0(FUNC_4(VAR_2->pdev, VAR_5), VAR_4->handle);
   }
  }
  FUNC_2(VAR_2->msix_entries);
  VAR_2->msix_entries = ((void*)0);
  VAR_2->flags.msix_enabled = 0;
  FUNC_5(VAR_0, VAR_1, 0x0042,
   "Disabled MSI-X.\n");
 } else {
  FUNC_0(FUNC_4(VAR_2->pdev, 0), VAR_3);
 }

free_irqs:
 FUNC_3(VAR_2->pdev);
}
