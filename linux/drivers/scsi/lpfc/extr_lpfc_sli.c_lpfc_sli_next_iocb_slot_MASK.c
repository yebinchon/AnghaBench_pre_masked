
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ numCiocb; scalar_t__ next_cmdidx; scalar_t__ cmdidx; scalar_t__ local_getidx; } ;
struct TYPE_4__ {TYPE_1__ sli3; } ;
struct lpfc_sli_ring {size_t ringno; TYPE_2__ sli; } ;
struct lpfc_pgp {int cmdGetInx; } ;
struct lpfc_hba {int work_hs; int work_ha; int link_state; int hbalock; struct lpfc_pgp* port_gp; } ;
typedef int IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,size_t,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct lpfc_hba*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static IOCB_t *
FUNC_6 (struct lpfc_hba *VAR_5, struct lpfc_sli_ring *VAR_6)
{
 struct lpfc_pgp *VAR_7 = &VAR_5->port_gp[VAR_6->ringno];
 uint32_t VAR_8 = VAR_6->sli.sli3.numCiocb;

 FUNC_1(&VAR_5->hbalock);

 if ((VAR_6->sli.sli3.next_cmdidx == VAR_6->sli.sli3.cmdidx) &&
    (++VAR_6->sli.sli3.next_cmdidx >= VAR_8))
  VAR_6->sli.sli3.next_cmdidx = 0;

 if (FUNC_5(VAR_6->sli.sli3.local_getidx ==
  VAR_6->sli.sli3.next_cmdidx)) {

  VAR_6->sli.sli3.local_getidx = FUNC_0(VAR_7->cmdGetInx);

  if (FUNC_5(VAR_6->sli.sli3.local_getidx >= VAR_8)) {
   FUNC_3(VAR_5, VAR_2, VAR_3,
     "0315 Ring %d issue: portCmdGet %d "
     "is bigger than cmd ring %d\n",
     VAR_6->ringno,
     VAR_6->sli.sli3.local_getidx,
     VAR_8);

   VAR_5->link_state = VAR_4;




   VAR_5->work_ha |= VAR_0;
   VAR_5->work_hs = VAR_1;

   FUNC_4(VAR_5);

   return ((void*)0);
  }

  if (VAR_6->sli.sli3.local_getidx == VAR_6->sli.sli3.next_cmdidx)
   return ((void*)0);
 }

 return FUNC_2(VAR_5, VAR_6);
}
