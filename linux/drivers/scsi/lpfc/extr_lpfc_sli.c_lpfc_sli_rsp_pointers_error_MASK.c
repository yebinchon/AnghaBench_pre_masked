
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numRiocb; } ;
struct TYPE_3__ {TYPE_2__ sli3; } ;
struct lpfc_sli_ring {size_t ringno; TYPE_1__ sli; } ;
struct lpfc_pgp {int rspPutInx; } ;
struct lpfc_hba {int work_hs; int work_ha; int link_state; struct lpfc_pgp* port_gp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,size_t,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_5, struct lpfc_sli_ring *VAR_6)
{
 struct lpfc_pgp *VAR_7 = &VAR_5->port_gp[VAR_6->ringno];




 FUNC_1(VAR_5, VAR_2, VAR_3,
   "0312 Ring %d handler: portRspPut %d "
   "is bigger than rsp ring %d\n",
   VAR_6->ringno, FUNC_0(VAR_7->rspPutInx),
   VAR_6->sli.sli3.numRiocb);

 VAR_5->link_state = VAR_4;





 VAR_5->work_ha |= VAR_0;
 VAR_5->work_hs = VAR_1;

 FUNC_2(VAR_5);

 return;
}
