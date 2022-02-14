
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_fc_remote_port {struct lpfc_nvme_rport* private; } ;
struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nvme_rport {struct lpfc_nodelist* ndlp; } ;
struct lpfc_nodelist {int upcall_flags; int * nrport; struct lpfc_vport* vport; } ;
struct TYPE_2__ {int hbalock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,struct nvme_fc_remote_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nvme_fc_remote_port *VAR_3)
{
 struct lpfc_nvme_rport *VAR_4 = VAR_3->private;
 struct lpfc_vport *VAR_5;
 struct lpfc_nodelist *VAR_6;

 VAR_6 = VAR_4->ndlp;
 if (!VAR_6)
  goto rport_err;

 VAR_5 = VAR_6->vport;
 if (!VAR_5)
  goto rport_err;





 FUNC_1(VAR_5, VAR_0, VAR_1,
   "6146 remoteport delete of remoteport x%px\n",
   VAR_3);
 FUNC_2(&VAR_5->phba->hbalock);




 if (VAR_6->upcall_flags & VAR_2) {
  VAR_6->nrport = ((void*)0);
  VAR_6->upcall_flags &= ~VAR_2;
 }
 FUNC_3(&VAR_5->phba->hbalock);




 FUNC_0(VAR_6);

 rport_err:
 return;
}
