
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli_ring {int ringno; } ;
struct TYPE_6__ {int abortIoTag; int abortContextTag; int abortType; } ;
struct TYPE_7__ {TYPE_2__ acxri; } ;
struct TYPE_8__ {int ulpLe; int ulpCommand; int ulpClass; int ulpIoTag; TYPE_3__ un; int ulpContext; } ;
struct lpfc_iocbq {int iocb_flag; int iocb_cmpl; TYPE_4__ iocb; int hba_wqidx; struct lpfc_vport* vport; int sli4_xritag; } ;
struct TYPE_5__ {int last_iotag; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_hba {int hba_flag; scalar_t__ sli_rev; TYPE_1__ sli; } ;
typedef int lpfc_ctx_cmd ;
typedef TYPE_4__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct lpfc_hba*) ;
 struct lpfc_sli_ring* FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_10 ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 scalar_t__ FUNC_5 (struct lpfc_iocbq*,struct lpfc_vport*,int ,int ,int ) ;

int
FUNC_6(struct lpfc_vport *VAR_11, struct lpfc_sli_ring *VAR_12,
      uint16_t VAR_13, uint64_t VAR_14, lpfc_ctx_cmd VAR_15)
{
 struct lpfc_hba *VAR_16 = VAR_11->phba;
 struct lpfc_iocbq *VAR_17;
 struct lpfc_iocbq *VAR_18;
 struct lpfc_sli_ring *VAR_19;
 IOCB_t *VAR_20 = ((void*)0);
 int VAR_21 = 0, VAR_22 = 0;
 int VAR_23;


 if (VAR_16->hba_flag & VAR_3)
  return VAR_21;

 for (VAR_23 = 1; VAR_23 <= VAR_16->sli.last_iotag; VAR_23++) {
  VAR_17 = VAR_16->sli.iocbq_lookup[VAR_23];

  if (FUNC_5(VAR_17, VAR_11, VAR_13, VAR_14,
            VAR_15) != 0)
   continue;





  if (VAR_17->iocb_flag & VAR_5)
   continue;


  VAR_18 = FUNC_2(VAR_16);
  if (VAR_18 == ((void*)0)) {
   VAR_21++;
   continue;
  }


  VAR_17->iocb_flag |= VAR_5;

  VAR_20 = &VAR_17->iocb;
  VAR_18->iocb.un.acxri.abortType = VAR_0;
  VAR_18->iocb.un.acxri.abortContextTag = VAR_20->ulpContext;
  if (VAR_16->sli_rev == VAR_8)
   VAR_18->iocb.un.acxri.abortIoTag = VAR_17->sli4_xritag;
  else
   VAR_18->iocb.un.acxri.abortIoTag = VAR_20->ulpIoTag;
  VAR_18->iocb.ulpLe = 1;
  VAR_18->iocb.ulpClass = VAR_20->ulpClass;
  VAR_18->vport = VAR_11;


  VAR_18->hba_wqidx = VAR_17->hba_wqidx;
  if (VAR_17->iocb_flag & VAR_6)
   VAR_18->iocb_flag |= VAR_9;
  if (VAR_17->iocb_flag & VAR_7)
   VAR_18->iocb_flag |= VAR_7;

  if (FUNC_0(VAR_16))
   VAR_18->iocb.ulpCommand = VAR_1;
  else
   VAR_18->iocb.ulpCommand = VAR_2;


  VAR_18->iocb_cmpl = VAR_10;
  if (VAR_16->sli_rev == VAR_8) {
   VAR_19 = FUNC_1(VAR_16, VAR_17);
   if (!VAR_19)
    continue;
   VAR_22 = FUNC_3(VAR_16, VAR_19->ringno,
            VAR_18, 0);
  } else
   VAR_22 = FUNC_3(VAR_16, VAR_12->ringno,
            VAR_18, 0);
  if (VAR_22 == VAR_4) {
   FUNC_4(VAR_16, VAR_18);
   VAR_21++;
   continue;
  }
 }

 return VAR_21;
}
