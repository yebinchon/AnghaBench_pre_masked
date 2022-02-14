
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_fc_local_port {struct lpfc_nvme_lport* private; } ;
struct lpfc_nvme_lport {int lport_unreg_cmp; TYPE_1__* vport; } ;
struct TYPE_2__ {scalar_t__ localport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*,struct lpfc_nvme_lport*) ;

__attribute__((used)) static void
FUNC_2(struct nvme_fc_local_port *VAR_2)
{
 struct lpfc_nvme_lport *VAR_3 = VAR_2->private;

 FUNC_1(VAR_3->vport, VAR_0, VAR_1,
    "6173 localport x%px delete complete\n",
    VAR_3);


 if (VAR_3->vport->localport)
  FUNC_0(VAR_3->lport_unreg_cmp);
}
