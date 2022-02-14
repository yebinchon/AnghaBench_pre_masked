
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_fc_target_port {struct lpfc_nvmet_tgtport* private; } ;
struct lpfc_nvmet_tgtport {int tport_unreg_cmp; TYPE_1__* phba; } ;
struct TYPE_2__ {scalar_t__ targetport; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nvmet_fc_target_port *VAR_0)
{
 struct lpfc_nvmet_tgtport *VAR_1 = VAR_0->private;


 if (VAR_1->phba->targetport)
  FUNC_0(VAR_1->tport_unreg_cmp);
}
