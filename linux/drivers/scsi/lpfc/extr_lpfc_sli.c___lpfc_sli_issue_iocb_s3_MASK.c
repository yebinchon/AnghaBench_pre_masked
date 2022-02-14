
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_14__ {int iocb_cmd_delay; } ;
struct lpfc_sli_ring {int flag; scalar_t__ ringno; TYPE_7__ stats; } ;
struct TYPE_8__ {int Type; int Rctl; } ;
struct TYPE_9__ {TYPE_1__ hcsw; } ;
struct TYPE_10__ {TYPE_2__ w5; } ;
struct TYPE_11__ {TYPE_3__ genreq64; } ;
struct TYPE_12__ {int ulpCommand; TYPE_4__ un; } ;
struct lpfc_iocbq {int * iocb_cmpl; TYPE_5__ iocb; int vport; } ;
struct TYPE_13__ {int sli_flag; struct lpfc_sli_ring* sli3_ring; } ;
struct lpfc_hba {int hba_flag; scalar_t__ link_state; TYPE_6__ sli; int pcidev; int hbalock; } ;
typedef int IOCB_t ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_hba*,int ,int,char*,int) ;
 struct lpfc_iocbq* FUNC_4 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq**) ;
 int * FUNC_5 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_sli_ring*,int *,struct lpfc_iocbq*) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct lpfc_hba *VAR_16, uint32_t VAR_17,
      struct lpfc_iocbq *VAR_18, uint32_t VAR_19)
{
 struct lpfc_iocbq *VAR_20;
 IOCB_t *VAR_21;
 struct lpfc_sli_ring *VAR_22 = &VAR_16->sli.sli3_ring[VAR_17];

 FUNC_2(&VAR_16->hbalock);

 if (VAR_18->iocb_cmpl && (!VAR_18->vport) &&
    (VAR_18->iocb.ulpCommand != VAR_0) &&
    (VAR_18->iocb.ulpCommand != 134)) {
  FUNC_3(VAR_16, VAR_6,
    VAR_7 | VAR_8,
    "1807 IOCB x%x failed. No vport\n",
    VAR_18->iocb.ulpCommand);
  FUNC_1();
  return VAR_4;
 }



 if (FUNC_10(FUNC_9(VAR_16->pcidev)))
  return VAR_4;


 if (FUNC_10(VAR_16->hba_flag & VAR_1))
  return VAR_4;




 if (FUNC_10(VAR_16->link_state < VAR_10))
  return VAR_4;





 if (FUNC_10(VAR_22->flag & VAR_13))
  goto iocb_busy;

 if (FUNC_10(VAR_16->link_state == VAR_10)) {




  switch (VAR_18->iocb.ulpCommand) {
  case 131:
  case 130:
   if (!(VAR_16->sli.sli_flag & VAR_11) ||
    (VAR_18->iocb.un.genreq64.w5.hcsw.Rctl !=
     VAR_2) ||
    (VAR_18->iocb.un.genreq64.w5.hcsw.Type !=
     VAR_14))

    goto iocb_busy;
   break;
  case 128:
  case 129:




   if (VAR_18->iocb_cmpl)
    VAR_18->iocb_cmpl = ((void*)0);

  case 132:
  case 134:
  case 133:
   break;
  default:
   goto iocb_busy;
  }





 } else if (FUNC_10(VAR_22->ringno == VAR_9 &&
       !(VAR_16->sli.sli_flag & VAR_12))) {
  goto iocb_busy;
 }

 while ((VAR_21 = FUNC_5(VAR_16, VAR_22)) &&
        (VAR_20 = FUNC_4(VAR_16, VAR_22, &VAR_18)))
  FUNC_6(VAR_16, VAR_22, VAR_21, VAR_20);

 if (VAR_21)
  FUNC_8(VAR_16, VAR_22);
 else
  FUNC_7(VAR_16, VAR_22);

 if (!VAR_18)
  return VAR_5;

 goto out_busy;

 iocb_busy:
 VAR_22->stats.iocb_cmd_delay++;

 out_busy:

 if (!(VAR_19 & VAR_15)) {
  FUNC_0(VAR_16, VAR_22, VAR_18);
  return VAR_5;
 }

 return VAR_3;
}
