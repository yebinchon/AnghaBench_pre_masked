
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int vpi; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_10__ {scalar_t__ sli_intr; } ;
struct TYPE_14__ {int sli_flag; TYPE_6__* mbox_active; int mbox_tmo; TYPE_1__ slistat; } ;
struct lpfc_hba {scalar_t__ intr_type; int link_flag; int hba_flag; int ha_copy; int work_ha_mask; int work_ha; int work_hs; int hbalock; TYPE_5__ sli; TYPE_4__* pport; struct lpfc_dmabuf* mbox_ext; int last_completion_time; struct lpfc_dmabuf* mbox; int HCregaddr; int work_waitq; int HAregaddr; } ;
struct TYPE_12__ {int * varWords; } ;
struct lpfc_dmabuf {scalar_t__ mbxOwner; TYPE_3__ un; scalar_t__ mbxStatus; int mbxCommand; } ;
typedef int irqreturn_t ;
struct TYPE_11__ {struct lpfc_dmabuf mb; } ;
struct TYPE_15__ {int out_ext_byte_len; int mbox_flag; struct lpfc_vport* vport; struct lpfc_nodelist* ctx_ndlp; struct lpfc_dmabuf* ctx_buf; scalar_t__ mbox_cmpl; TYPE_2__ u; } ;
struct TYPE_13__ {int work_port_lock; int work_port_events; } ;
typedef struct lpfc_dmabuf MAILBOX_t ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (int *) ;
 int VAR_38 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,char*,int,int,int) ;
 scalar_t__ FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_6__*) ;
 scalar_t__ VAR_39 ;
 int FUNC_5 (struct lpfc_hba*,int ,int,char*,...) ;
 scalar_t__ FUNC_6 (int ,int*) ;
 int FUNC_7 (struct lpfc_hba*,TYPE_6__*,int ) ;
 int FUNC_8 (struct lpfc_dmabuf*,struct lpfc_dmabuf*,int) ;
 scalar_t__ FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_hba*,int ,int ,TYPE_6__*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int,int ) ;

irqreturn_t
FUNC_17(int VAR_40, void *VAR_41)
{
 struct lpfc_hba *VAR_42;
 uint32_t VAR_43, VAR_44;
 uint32_t VAR_45;
 unsigned long VAR_46;
 unsigned long VAR_47;
 uint32_t VAR_48;

 MAILBOX_t *VAR_49, *VAR_50;
 struct lpfc_vport *VAR_51;
 struct lpfc_nodelist *VAR_52;
 struct lpfc_dmabuf *VAR_53;
 LPFC_MBOXQ_t *VAR_54;
 int VAR_55;





 VAR_42 = (struct lpfc_hba *)VAR_41;

 if (FUNC_15(!VAR_42))
  return VAR_21;





 if (VAR_42->intr_type == VAR_35) {

  if (FUNC_3(VAR_42))
   return VAR_21;

  FUNC_13(&VAR_42->hbalock, VAR_47);
  if (FUNC_6(VAR_42->HAregaddr, &VAR_43))
   goto unplug_error;



  if (VAR_42->link_flag & VAR_29)
   VAR_43 &= ~VAR_1;

  if (VAR_43 & VAR_1) {
   if (VAR_42->hba_flag & VAR_6)

    VAR_43 &= ~VAR_1;
   else

    VAR_42->hba_flag |= VAR_6;
  }





  if (FUNC_15(VAR_42->hba_flag & VAR_0)) {
   FUNC_14(&VAR_42->hbalock, VAR_47);
   return VAR_21;
  }


  if (FUNC_6(VAR_42->HCregaddr, &VAR_44))
   goto unplug_error;

  FUNC_16(VAR_44 & ~(VAR_9 | VAR_11 |
   VAR_8 | VAR_7),
   VAR_42->HCregaddr);
  FUNC_16((VAR_43 & (VAR_3 | VAR_4)),
   VAR_42->HAregaddr);
  FUNC_16(VAR_44, VAR_42->HCregaddr);
  FUNC_12(VAR_42->HAregaddr);
  FUNC_14(&VAR_42->hbalock, VAR_47);
 } else
  VAR_43 = VAR_42->ha_copy;

 VAR_45 = VAR_43 & VAR_42->work_ha_mask;

 if (VAR_45) {
  if (VAR_45 & VAR_2) {
   if (VAR_42->sli.sli_flag & VAR_28) {




    FUNC_13(&VAR_42->hbalock, VAR_47);
    VAR_42->sli.sli_flag &= ~VAR_28;
    if (FUNC_6(VAR_42->HCregaddr, &VAR_48))
     goto unplug_error;
    VAR_48 &= ~VAR_8;
    FUNC_16(VAR_48, VAR_42->HCregaddr);
    FUNC_12(VAR_42->HCregaddr);
    FUNC_14(&VAR_42->hbalock, VAR_47);
   }
   else
    VAR_45 &= ~VAR_2;
  }

  if (VAR_45 & ~(VAR_1 | VAR_3 | VAR_2)) {




   VAR_46 = (VAR_45 &
    (VAR_5 << (4*VAR_26)));
   VAR_46 >>= (4*VAR_26);
   if (VAR_46 & VAR_5) {
    FUNC_13(&VAR_42->hbalock, VAR_47);
    if (FUNC_6(VAR_42->HCregaddr, &VAR_48))
     goto unplug_error;

    FUNC_2(VAR_42,
    "ISR slow ring:   ctl:x%x stat:x%x isrcnt:x%x",
    VAR_48, VAR_46,
    (uint32_t)VAR_42->sli.slistat.sli_intr);

    if (VAR_48 & (VAR_10 << VAR_26)) {
     FUNC_2(VAR_42,
      "ISR Disable ring:"
      "pwork:x%x hawork:x%x wait:x%x",
      VAR_42->work_ha, VAR_45,
      (uint32_t)((unsigned long)
      &VAR_42->work_waitq));

     VAR_48 &=
         ~(VAR_10 << VAR_26);
     FUNC_16(VAR_48, VAR_42->HCregaddr);
     FUNC_12(VAR_42->HCregaddr);
    }
    else {
     FUNC_2(VAR_42,
      "ISR slow ring:   pwork:"
      "x%x hawork:x%x wait:x%x",
      VAR_42->work_ha, VAR_45,
      (uint32_t)((unsigned long)
      &VAR_42->work_waitq));
    }
    FUNC_14(&VAR_42->hbalock, VAR_47);
   }
  }
  FUNC_13(&VAR_42->hbalock, VAR_47);
  if (VAR_45 & VAR_1) {
   if (FUNC_9(VAR_42))
    goto unplug_error;




   if ((VAR_12 & VAR_42->work_hs) &&
    ((VAR_13 | VAR_14 | VAR_15 | VAR_16 |
      VAR_17 | VAR_18 | VAR_19) &
      VAR_42->work_hs)) {
    VAR_42->hba_flag |= VAR_0;

    FUNC_16(0, VAR_42->HCregaddr);
    FUNC_12(VAR_42->HCregaddr);
   }
  }

  if ((VAR_45 & VAR_3) && (VAR_42->sli.mbox_active)) {
   VAR_54 = VAR_42->sli.mbox_active;
   VAR_50 = &VAR_54->u.mb;
   VAR_49 = VAR_42->mbox;
   VAR_51 = VAR_54->vport;


   FUNC_8(VAR_49, VAR_50, sizeof(uint32_t));
   if (VAR_50->mbxOwner != VAR_36) {
    FUNC_14(&VAR_42->hbalock, VAR_47);




    FUNC_5(VAR_42, VAR_22, VAR_23 |
      VAR_24,
      "(%d):0304 Stray Mailbox "
      "Interrupt mbxCommand x%x "
      "mbxStatus x%x\n",
      (VAR_51 ? VAR_51->vpi : 0),
      VAR_50->mbxCommand,
      VAR_50->mbxStatus);

    VAR_45 &= ~VAR_3;
   } else {
    VAR_42->sli.mbox_active = ((void*)0);
    FUNC_14(&VAR_42->hbalock, VAR_47);
    VAR_42->last_completion_time = VAR_38;
    FUNC_0(&VAR_42->sli.mbox_tmo);
    if (VAR_54->mbox_cmpl) {
     FUNC_8(VAR_49, VAR_50,
       VAR_30);
     if (VAR_54->out_ext_byte_len &&
      VAR_54->ctx_buf)
      FUNC_8(
      VAR_42->mbox_ext,
      VAR_54->ctx_buf,
      VAR_54->out_ext_byte_len);
    }
    if (VAR_54->mbox_flag & VAR_27) {
     VAR_54->mbox_flag &= ~VAR_27;

     FUNC_1(VAR_51,
      VAR_25,
      "MBOX dflt rpi: : "
      "status:x%x rpi:x%x",
      (uint32_t)VAR_50->mbxStatus,
      VAR_50->un.varWords[0], 0);

     if (!VAR_50->mbxStatus) {
      VAR_53 = (struct lpfc_dmabuf *)
       (VAR_54->ctx_buf);
      VAR_52 = (struct lpfc_nodelist *)
       VAR_54->ctx_ndlp;






      FUNC_10(VAR_42,
       VAR_51->vpi,
       VAR_50->un.varWords[0],
       VAR_54);
      VAR_54->mbox_cmpl =
       VAR_39;
      VAR_54->ctx_buf = VAR_53;
      VAR_54->ctx_ndlp = VAR_52;
      VAR_54->vport = VAR_51;
      VAR_55 = FUNC_7(VAR_42,
        VAR_54,
        VAR_33);
      if (VAR_55 != VAR_31)
       FUNC_5(VAR_42,
       VAR_22,
       VAR_23 | VAR_24,
       "0350 rc should have"
       "been MBX_BUSY\n");
      if (VAR_55 != VAR_32)
       goto send_current_mbox;
     }
    }
    FUNC_13(
      &VAR_42->pport->work_port_lock,
      VAR_47);
    VAR_42->pport->work_port_events &=
     ~VAR_37;
    FUNC_14(
      &VAR_42->pport->work_port_lock,
      VAR_47);
    FUNC_4(VAR_42, VAR_54);
   }
  } else
   FUNC_14(&VAR_42->hbalock, VAR_47);

  if ((VAR_45 & VAR_3) &&
      (VAR_42->sli.mbox_active == ((void*)0))) {
send_current_mbox:

   do {
    VAR_55 = FUNC_7(VAR_42, ((void*)0),
        VAR_33);
   } while (VAR_55 == VAR_32);
   if (VAR_55 != VAR_34)
    FUNC_5(VAR_42, VAR_22, VAR_23 |
      VAR_24, "0349 rc should be "
      "MBX_SUCCESS\n");
  }

  FUNC_13(&VAR_42->hbalock, VAR_47);
  VAR_42->work_ha |= VAR_45;
  FUNC_14(&VAR_42->hbalock, VAR_47);
  FUNC_11(VAR_42);
 }
 return VAR_20;
unplug_error:
 FUNC_14(&VAR_42->hbalock, VAR_47);
 return VAR_20;

}
