
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_5__ {size_t abortContextTag; size_t abortIoTag; } ;
struct TYPE_7__ {scalar_t__* ulpWord; TYPE_1__ acxri; } ;
struct TYPE_8__ {scalar_t__ ulpStatus; scalar_t__ ulpCommand; TYPE_3__ un; } ;
struct lpfc_iocbq {TYPE_4__ iocb; } ;
struct TYPE_6__ {size_t last_iotag; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hbalock; TYPE_2__ sli; } ;
typedef TYPE_4__ IOCB_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,struct lpfc_iocbq*,size_t,size_t,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_8, struct lpfc_iocbq *VAR_9,
   struct lpfc_iocbq *VAR_10)
{
 IOCB_t *VAR_11 = &VAR_10->iocb;
 uint16_t VAR_12, VAR_13;
 struct lpfc_iocbq *VAR_14 = ((void*)0);

 if (VAR_11->ulpStatus) {





  VAR_13 = VAR_9->iocb.un.acxri.abortContextTag;
  VAR_12 = VAR_9->iocb.un.acxri.abortIoTag;

  FUNC_2(&VAR_8->hbalock);
  if (VAR_8->sli_rev < VAR_7) {
   if (VAR_11->ulpCommand == VAR_0 &&
       VAR_11->ulpStatus == VAR_3 &&
       VAR_11->un.ulpWord[4] == VAR_1) {
    FUNC_3(&VAR_8->hbalock);
    goto release_iocb;
   }
   if (VAR_12 != 0 &&
    VAR_12 <= VAR_8->sli.last_iotag)
    VAR_14 =
     VAR_8->sli.iocbq_lookup[VAR_12];
  } else





   VAR_14 = VAR_8->sli.iocbq_lookup[VAR_13];

  FUNC_0(VAR_8, VAR_4, VAR_5 | VAR_6,
    "0327 Cannot abort els iocb x%px "
    "with tag %x context %x, abort status %x, "
    "abort code %x\n",
    VAR_14, VAR_12, VAR_13,
    VAR_11->ulpStatus, VAR_11->un.ulpWord[4]);

  FUNC_3(&VAR_8->hbalock);
  if (VAR_11->ulpStatus == VAR_3 &&
      VAR_11->un.ulpWord[4] == VAR_2)
   FUNC_1(VAR_8, VAR_14);
 }
release_iocb:
 FUNC_1(VAR_8, VAR_9);
 return;
}
