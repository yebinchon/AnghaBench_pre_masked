
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {void* flags; void* vid; } ;
struct TYPE_9__ {TYPE_3__ vv; int vendorVersion; } ;
struct TYPE_7__ {int altBbCredit; scalar_t__ fcphLow; scalar_t__ fcphHigh; int valid_vendor_ver_level; int bbRcvSizeMsb; } ;
struct serv_parm {TYPE_4__ un; TYPE_2__ cmn; } ;
struct lpfc_vport {int fc_flag; int fc_sparam; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; scalar_t__ nlp_defer_did; int nlp_rpi; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; } ;
struct TYPE_10__ {int elsXmitPLOGI; } ;
struct TYPE_6__ {int sli_flag; } ;
struct lpfc_hba {TYPE_5__ fc_stat; TYPE_1__ sli; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_1 (int ) ;
 int VAR_18 ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,scalar_t__) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,scalar_t__,int,int ,struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_7 (struct lpfc_vport*) ;
 int FUNC_8 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

int
FUNC_13(struct lpfc_vport *VAR_19, uint32_t VAR_20, uint8_t VAR_21)
{
 struct lpfc_hba *VAR_22 = VAR_19->phba;
 struct Scsi_Host *VAR_23;
 struct serv_parm *VAR_24;
 struct lpfc_nodelist *VAR_25;
 struct lpfc_iocbq *VAR_26;
 uint8_t *VAR_27;
 uint16_t VAR_28;
 int VAR_29;

 VAR_25 = FUNC_4(VAR_19, VAR_20);

 if (VAR_25) {




  if ((VAR_25->nlp_flag & VAR_17) &&
      ((VAR_25->nlp_DID & VAR_6) != VAR_6) &&
      !(VAR_19->fc_flag & VAR_2)) {
   FUNC_6(VAR_19, VAR_8, VAR_9,
      "4110 Issue PLOGI x%x deferred "
      "on NPort x%x rpi x%x Data: x%px\n",
      VAR_25->nlp_defer_did, VAR_25->nlp_DID,
      VAR_25->nlp_rpi, VAR_25);


   if (VAR_25->nlp_defer_did == VAR_15)
    VAR_25->nlp_defer_did = VAR_20;
   return 0;
  }
  if (!FUNC_0(VAR_25))
   VAR_25 = ((void*)0);
 }


 VAR_28 = (sizeof(uint32_t) + sizeof(struct serv_parm));
 VAR_26 = FUNC_5(VAR_19, 1, VAR_28, VAR_21, VAR_25, VAR_20,
         VAR_0);
 if (!VAR_26)
  return 1;

 VAR_23 = FUNC_7(VAR_19);
 FUNC_11(VAR_23->host_lock);
 VAR_25->nlp_flag &= ~VAR_16;
 FUNC_12(VAR_23->host_lock);

 VAR_27 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_26->context2)->virt);


 *((uint32_t *) (VAR_27)) = VAR_0;
 VAR_27 += sizeof(uint32_t);
 FUNC_9(VAR_27, &VAR_19->fc_sparam, sizeof(struct serv_parm));
 VAR_24 = (struct serv_parm *) VAR_27;





 if ((VAR_19->fc_flag & VAR_1) && !(VAR_19->fc_flag & VAR_5))
  VAR_24->cmn.altBbCredit = 1;

 if (VAR_24->cmn.fcphLow < VAR_4)
  VAR_24->cmn.fcphLow = VAR_4;

 if (VAR_24->cmn.fcphHigh < VAR_3)
  VAR_24->cmn.fcphHigh = VAR_3;

 VAR_24->cmn.valid_vendor_ver_level = 0;
 FUNC_10(VAR_24->un.vendorVersion, 0, sizeof(VAR_24->un.vendorVersion));
 VAR_24->cmn.bbRcvSizeMsb &= 0xF;

 FUNC_2(VAR_19, VAR_10,
  "Issue PLOGI:     did:x%x",
  VAR_20, 0, 0);




 if (VAR_22->sli.sli_flag & VAR_12) {
  VAR_24->cmn.valid_vendor_ver_level = 1;
  VAR_24->un.vv.vid = FUNC_1(VAR_13);
  VAR_24->un.vv.flags = FUNC_1(VAR_14);
 }

 VAR_22->fc_stat.elsXmitPLOGI++;
 VAR_26->iocb_cmpl = VAR_18;
 VAR_29 = FUNC_8(VAR_22, VAR_11, VAR_26, 0);

 if (VAR_29 == VAR_7) {
  FUNC_3(VAR_22, VAR_26);
  return 1;
 }
 return 0;
}
