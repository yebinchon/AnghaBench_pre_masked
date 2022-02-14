
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_20__ {int vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_21__ {TYPE_6__ b; int lsRjtError; } ;
struct ls_rjt {TYPE_7__ un; } ;
struct TYPE_18__ {int bbRcvSizeMsb; } ;
struct TYPE_19__ {TYPE_4__ cmn; } ;
struct lpfc_vport {int cfg_devloss_tmo; int load_flag; int fc_flag; int fc_disctmo; TYPE_5__ fc_sparam; } ;
struct lpfc_nodelist {scalar_t__ nlp_DID; int nlp_retry; int nlp_state; int nlp_prev_state; scalar_t__ nlp_last_elscmd; int nlp_flag; int nlp_delayfunc; } ;
struct TYPE_15__ {scalar_t__ remoteID; } ;
struct TYPE_13__ {int* ulpWord; TYPE_1__ elsreq64; } ;
struct TYPE_14__ {int ulpStatus; TYPE_10__ un; } ;
struct lpfc_iocbq {int retry; int sli4_lxritag; scalar_t__ context2; scalar_t__ context1; TYPE_11__ iocb; struct lpfc_vport* vport; } ;
struct TYPE_23__ {int elsDelayRetry; int elsXmitRetry; int elsRetryExceeded; } ;
struct TYPE_22__ {int fcf_flag; } ;
struct lpfc_hba {scalar_t__ fc_topology; int sli3_options; scalar_t__ link_flag; TYPE_9__ fc_stat; TYPE_8__ fcf; int * alpa_map; TYPE_3__* pport; TYPE_2__* pcidev; int sli_rev; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_17__ {int fc_myDID; } ;
struct TYPE_16__ {int device; } ;
typedef TYPE_11__ IOCB_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;






 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_33 ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (TYPE_11__*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,scalar_t__) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_9 (struct lpfc_vport*,scalar_t__,int) ;
 int FUNC_10 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_11 (struct lpfc_vport*) ;
 int VAR_34 ;
 int FUNC_12 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_13 (struct lpfc_vport*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_14 (struct lpfc_vport*) ;
 int FUNC_15 (struct lpfc_hba*,struct lpfc_nodelist*,int ,int ,int ) ;
 struct Scsi_Host* FUNC_16 (struct lpfc_vport*) ;
 int FUNC_17 (struct lpfc_vport*,int ) ;
 int FUNC_18 (int *,scalar_t__) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int *) ;

__attribute__((used)) static int
FUNC_23(struct lpfc_hba *VAR_35, struct lpfc_iocbq *VAR_36,
        struct lpfc_iocbq *VAR_37)
{
 struct lpfc_vport *VAR_38 = VAR_36->vport;
 struct Scsi_Host *VAR_39 = FUNC_16(VAR_38);
 IOCB_t *VAR_40 = &VAR_37->iocb;
 struct lpfc_nodelist *VAR_41 = (struct lpfc_nodelist *) VAR_36->context1;
 struct lpfc_dmabuf *VAR_42 = (struct lpfc_dmabuf *) VAR_36->context2;
 uint32_t *VAR_43;
 struct ls_rjt VAR_44;
 int VAR_45 = 0, VAR_46 = VAR_34, VAR_47 = 0;
 int VAR_48 = 0;
 uint32_t VAR_49 = 0;
 uint32_t VAR_50;
 int VAR_51 = 0, VAR_52;






 if (VAR_42 && VAR_42->virt) {
  VAR_43 = (uint32_t *) (VAR_42->virt);
  VAR_49 = *VAR_43++;
 }

 if (VAR_41 && FUNC_0(VAR_41))
  VAR_50 = VAR_41->nlp_DID;
 else {

  VAR_50 = VAR_40->un.elsreq64.remoteID;
  VAR_41 = FUNC_4(VAR_38, VAR_50);
  if ((!VAR_41 || !FUNC_0(VAR_41))
      && (VAR_49 != 151))
   return 1;
 }

 FUNC_2(VAR_38, VAR_10,
  "Retry ELS:       wd7:x%x wd4:x%x did:x%x",
  *(((uint32_t *) VAR_40) + 7), VAR_40->un.ulpWord[4], VAR_41->nlp_DID);

 switch (VAR_40->ulpStatus) {
 case 140:
  break;
 case 134:
  if (VAR_35->sli_rev == VAR_12) {




   FUNC_15(VAR_35, VAR_41,
      VAR_36->sli4_lxritag, 0, 0);
  }
  break;
 case 138:
  switch ((VAR_40->un.ulpWord[4] & VAR_6)) {
  case 146:
   if (VAR_49 == 154) {
    if (VAR_31 ==
     VAR_35->pcidev->device) {
     VAR_35->fc_topology = VAR_13;
     VAR_35->pport->fc_myDID = 0;
     VAR_35->alpa_map[0] = 0;
     VAR_35->alpa_map[1] = 0;
    }
   }
   if (VAR_49 == 151 && VAR_36->retry == 0)
    VAR_47 = 1000;
   VAR_45 = 1;
   break;

  case 149:
   FUNC_13(VAR_38, VAR_7, VAR_9,
      "0124 Retry illegal cmd x%x "
      "retry:x%x delay:x%x\n",
      VAR_49, VAR_36->retry, VAR_47);
   VAR_45 = 1;

   VAR_46 = 8;
   if (VAR_36->retry > 2)
    VAR_47 = 1000;
   break;

  case 145:
   VAR_48 = 1;
   VAR_45 = 1;
   if (VAR_36->retry > 100)
    VAR_47 = 100;
   VAR_46 = 250;
   break;

  case 148:
   VAR_47 = 100;
   VAR_45 = 1;
   break;

  case 147:
   if (VAR_49 == 151 &&
       VAR_50 == VAR_30) {


    VAR_46 = 0;
    VAR_47 = 100;
   }
   VAR_45 = 1;
   break;

  case 144:
   if (VAR_49 == 151 &&
       VAR_50 == VAR_30 &&
       (VAR_36->retry + 1) == VAR_46) {

    VAR_51 = 1;
    break;
   }
   VAR_45 = 1;
   VAR_47 = 100;
   break;
  }
  break;

 case 135:
 case 141:
  if (VAR_40->un.ulpWord[4] & VAR_32) {
   VAR_45 = 1;
   break;
  }
  break;

 case 136:
 case 142:
  VAR_48 = 1;
  VAR_45 = 1;
  break;

 case 137:
  VAR_44.un.lsRjtError = FUNC_1(VAR_40->un.ulpWord[4]);



  switch (VAR_44.un.b.lsRjtRsnCode) {
  case 129:





   if (VAR_49 == 150 || VAR_49 == 152) {
    VAR_47 = 1000;
    VAR_46 = VAR_34 + 1;
    VAR_45 = 1;
    break;
   }


   if (VAR_44.un.b.lsRjtRsnCodeExp ==
       VAR_15) {
    if (VAR_49 == 151) {
     VAR_47 = 1000;
     VAR_46 = 48;
    }
    VAR_45 = 1;
    break;
   }
   if (VAR_44.un.b.lsRjtRsnCodeExp ==
       VAR_14) {
    if (VAR_49 == 151) {
     VAR_47 = 1000;
     VAR_46 = 48;
    }
    VAR_45 = 1;
    break;
   }
   if (VAR_49 == 151) {
    VAR_47 = 1000;
    VAR_46 = VAR_34 + 1;
    VAR_45 = 1;
    break;
   }
   if ((VAR_35->sli3_options & VAR_11) &&
     (VAR_49 == 155) &&
     (VAR_44.un.b.lsRjtRsnCodeExp == VAR_19)){
    FUNC_13(VAR_38, VAR_7, VAR_9,
       "0125 FDISC Failed (x%x). "
       "Fabric out of resources\n",
       VAR_44.un.lsRjtError);
    FUNC_17(VAR_38,
           VAR_4);
   }
   break;

  case 132:
   if ((VAR_49 == 151) ||
       (VAR_49 == 150) ||
       (VAR_49 == 152)) {
    VAR_47 = 1000;
    VAR_46 = 48;
   } else if (VAR_49 == 155) {

    VAR_46 = 48;
    if (VAR_36->retry >= 32)
     VAR_47 = 1000;
   }
   VAR_45 = 1;
   break;

  case 131:




   if (VAR_49 == 155 &&
       VAR_44.un.b.lsRjtRsnCodeExp == VAR_20) {
    VAR_46 = 3;
    VAR_47 = 1000;
    VAR_45 = 1;
   } else if (VAR_49 == 154 &&
       VAR_44.un.b.lsRjtRsnCodeExp ==
      VAR_18) {
    VAR_38->fc_sparam.cmn.bbRcvSizeMsb &= 0xf;
    VAR_45 = 1;
    FUNC_13(VAR_38, VAR_7, VAR_9,
       "0820 FLOGI Failed (x%x). "
       "BBCredit Not Supported\n",
       VAR_44.un.lsRjtError);
   }
   break;

  case 130:
   if ((VAR_35->sli3_options & VAR_11) &&
     (VAR_49 == 155) &&
     ((VAR_44.un.b.lsRjtRsnCodeExp == VAR_17) ||
     (VAR_44.un.b.lsRjtRsnCodeExp == VAR_16))
     ) {
    FUNC_13(VAR_38, VAR_7, VAR_9,
       "0122 FDISC Failed (x%x). "
       "Fabric Detected Bad WWN\n",
       VAR_44.un.lsRjtError);
    FUNC_17(VAR_38,
           VAR_3);
   }
   break;
  case 128:
   if ((VAR_44.un.b.vendorUnique == 0x45) &&
       (VAR_49 == 154)) {
    goto out_retry;
   }
   break;
  case 133:





   if (VAR_44.un.b.lsRjtRsnCodeExp ==
       VAR_21 && VAR_49 == 150) {
    FUNC_20(VAR_39->host_lock);
    VAR_41->nlp_flag |= VAR_24;
    FUNC_21(VAR_39->host_lock);
    VAR_45 = 0;
    goto out_retry;
   }
   break;
  }
  break;

 case 139:
 case 143:
  break;

 default:
  break;
 }

 if (VAR_51) {
  VAR_52 = FUNC_11(VAR_38);
  if (VAR_52) {



   VAR_45 = 1;
   VAR_47 = 100;
   goto out_retry;
  }
  return 1;
 }

 if (VAR_50 == VAR_5)
  VAR_45 = 1;

 if ((VAR_49 == 154) &&
     (VAR_35->fc_topology != VAR_13) &&
     !FUNC_3(VAR_40)) {

  VAR_45 = 1;

  if (VAR_35->link_flag != VAR_22)
   VAR_46 = 0;
  else
   VAR_46 = 2;

  if (VAR_36->retry >= 100)
   VAR_47 = 5000;
  else if (VAR_36->retry >= 32)
   VAR_47 = 1000;
 } else if ((VAR_49 == 155) && !FUNC_3(VAR_40)) {

  VAR_45 = 1;
  VAR_46 = VAR_38->cfg_devloss_tmo;
  VAR_47 = 1000;
 }

 VAR_36->retry++;
 if (VAR_46 && (VAR_36->retry >= VAR_46)) {
  VAR_35->fc_stat.elsRetryExceeded++;
  VAR_45 = 0;
 }

 if ((VAR_38->load_flag & VAR_2) != 0)
  VAR_45 = 0;

out_retry:
 if (VAR_45) {
  if ((VAR_49 == 151) || (VAR_49 == 155)) {

   if (VAR_35->fcf.fcf_flag & VAR_0) {
    FUNC_13(VAR_38, VAR_8, VAR_9,
       "2849 Stop retry ELS command "
       "x%x to remote NPORT x%x, "
       "Data: x%x x%x\n", VAR_49, VAR_50,
       VAR_36->retry, VAR_47);
    return 0;
   }
  }


  FUNC_13(VAR_38, VAR_8, VAR_9,
     "0107 Retry ELS command x%x to remote "
     "NPORT x%x Data: x%x x%x\n",
     VAR_49, VAR_50, VAR_36->retry, VAR_47);

  if (((VAR_49 == 151) || (VAR_49 == 156)) &&
   ((VAR_40->ulpStatus != 138) ||
   ((VAR_40->un.ulpWord[4] & VAR_6) !=
   145))) {



   if (FUNC_22(&VAR_38->fc_disctmo) ||
       (VAR_38->fc_flag & VAR_1))
    FUNC_14(VAR_38);
  }

  VAR_35->fc_stat.elsXmitRetry++;
  if (VAR_41 && FUNC_0(VAR_41) && VAR_47) {
   VAR_35->fc_stat.elsDelayRetry++;
   VAR_41->nlp_retry = VAR_36->retry;


   FUNC_18(&VAR_41->nlp_delayfunc,
    VAR_33 + FUNC_19(VAR_47));
   FUNC_20(VAR_39->host_lock);
   VAR_41->nlp_flag |= VAR_23;
   FUNC_21(VAR_39->host_lock);

   VAR_41->nlp_prev_state = VAR_41->nlp_state;
   if ((VAR_49 == 150) ||
       (VAR_49 == 152))
    FUNC_12(VAR_38, VAR_41,
     VAR_29);
   else
    FUNC_12(VAR_38, VAR_41,
     VAR_27);
   VAR_41->nlp_last_elscmd = VAR_49;

   return 1;
  }
  switch (VAR_49) {
  case 154:
   FUNC_7(VAR_38, VAR_41, VAR_36->retry);
   return 1;
  case 155:
   FUNC_6(VAR_38, VAR_41, VAR_36->retry);
   return 1;
  case 151:
   if (VAR_41 && FUNC_0(VAR_41)) {
    VAR_41->nlp_prev_state = VAR_41->nlp_state;
    FUNC_12(VAR_38, VAR_41,
         VAR_28);
   }
   FUNC_9(VAR_38, VAR_50, VAR_36->retry);
   return 1;
  case 156:
   VAR_41->nlp_prev_state = VAR_41->nlp_state;
   FUNC_12(VAR_38, VAR_41, VAR_25);
   FUNC_5(VAR_38, VAR_41, VAR_36->retry);
   return 1;
  case 150:
  case 152:
   VAR_41->nlp_prev_state = VAR_41->nlp_state;
   FUNC_12(VAR_38, VAR_41, VAR_29);
   FUNC_10(VAR_38, VAR_41, VAR_36->retry);
   return 1;
  case 153:
   VAR_41->nlp_prev_state = VAR_41->nlp_state;
   FUNC_12(VAR_38, VAR_41, VAR_26);
   FUNC_8(VAR_38, VAR_41, VAR_36->retry);
   return 1;
  }
 }

 if (VAR_48) {
  FUNC_13(VAR_38, VAR_7, VAR_9,
    "0137 No retry ELS command x%x to remote "
    "NPORT x%x: Out of Resources: Error:x%x/%x\n",
    VAR_49, VAR_50, VAR_40->ulpStatus,
    VAR_40->un.ulpWord[4]);
 }
 else {
  FUNC_13(VAR_38, VAR_8, VAR_9,
    "0108 No retry ELS command x%x to remote "
    "NPORT x%x Retried:%d Error:x%x/%x\n",
    VAR_49, VAR_50, VAR_36->retry, VAR_40->ulpStatus,
    VAR_40->un.ulpWord[4]);
 }
 return 0;
}
