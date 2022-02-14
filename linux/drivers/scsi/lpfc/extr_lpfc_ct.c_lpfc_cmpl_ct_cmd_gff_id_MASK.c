
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


typedef int uint8_t ;
struct lpfc_vport {int fc_flag; scalar_t__ num_disc_nodes; scalar_t__ port_state; int fc_rscn_id_cnt; } ;
struct TYPE_11__ {scalar_t__ CmdRsp; } ;
struct TYPE_12__ {TYPE_4__ bits; } ;
struct TYPE_9__ {int* fbits; } ;
struct TYPE_8__ {int PortId; } ;
struct TYPE_10__ {TYPE_2__ gff_acc; TYPE_1__ gff; } ;
struct lpfc_sli_ct_request {TYPE_5__ CommandResponse; TYPE_3__ un; } ;
struct lpfc_nodelist {int nlp_flag; } ;
struct TYPE_13__ {int* ulpWord; } ;
struct TYPE_14__ {TYPE_6__ un; int ulpStatus; } ;
struct lpfc_iocbq {scalar_t__ retry; scalar_t__ context2; scalar_t__ context1; TYPE_7__ iocb; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
typedef TYPE_7__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_4 (struct lpfc_vport*,int ,char*,int ,int,int) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*,int ,scalar_t__,int) ;
 int FUNC_8 (struct lpfc_vport*,int ,int ,char*,int,int,...) ;
 struct lpfc_nodelist* FUNC_9 (struct lpfc_vport*,int) ;
 struct Scsi_Host* FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct lpfc_hba *VAR_15, struct lpfc_iocbq *VAR_16,
   struct lpfc_iocbq *VAR_17)
{
 struct lpfc_vport *VAR_18 = VAR_16->vport;
 struct Scsi_Host *VAR_19 = FUNC_10(VAR_18);
 IOCB_t *VAR_20 = &VAR_17->iocb;
 struct lpfc_dmabuf *VAR_21 = (struct lpfc_dmabuf *) VAR_16->context1;
 struct lpfc_dmabuf *VAR_22 = (struct lpfc_dmabuf *) VAR_16->context2;
 struct lpfc_sli_ct_request *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 uint8_t VAR_27;
 struct lpfc_nodelist *VAR_28;

 VAR_24 = ((struct lpfc_sli_ct_request *) VAR_21->virt)->un.gff.PortId;
 VAR_24 = FUNC_2(VAR_24);

 FUNC_4(VAR_18, VAR_11,
  "GFF_ID cmpl:     status:x%x/x%x did:x%x",
  VAR_20->ulpStatus, VAR_20->un.ulpWord[4], VAR_24);

 if (VAR_20->ulpStatus == VAR_6) {

  VAR_23 = (struct lpfc_sli_ct_request *) VAR_22->virt;
  VAR_27 = VAR_23->un.gff_acc.fbits[VAR_2];

  FUNC_8(VAR_18, VAR_8, VAR_9,
     "6431 Process GFF_ID rsp for %08x "
     "fbits %02x %s %s\n",
     VAR_24, VAR_27,
     (VAR_27 & VAR_0) ? "Initiator" : " ",
     (VAR_27 & VAR_1) ? "Target" : " ");

  if (VAR_23->CommandResponse.bits.CmdRsp ==
      FUNC_1(VAR_14)) {
   if ((VAR_27 & VAR_0) &&
       !(VAR_27 & VAR_1)) {
    FUNC_8(VAR_18, VAR_8,
       VAR_9,
       "0270 Skip x%x GFF "
       "NameServer Rsp Data: (init) "
       "x%x x%x\n", VAR_24, VAR_27,
       VAR_18->fc_rscn_id_cnt);
    goto out;
   }
  }
 }
 else {

  if (VAR_16->retry < VAR_12) {
   VAR_26 = 1;
   if (VAR_20->ulpStatus == VAR_5) {
    switch ((VAR_20->un.ulpWord[4] &
     VAR_4)) {

    case 130:



     break;
    case 131:
    case 129:
    case 128:
     VAR_26 = 0;
     break;
    default:
     VAR_16->retry++;
    }
   }
   else
    VAR_16->retry++;

   if (VAR_26) {

    VAR_25 = FUNC_7(VAR_18, VAR_13,
      VAR_16->retry, VAR_24);
    if (VAR_25 == 0) {

     FUNC_3(VAR_15, VAR_16);
     return;
    }
   }
  }
  FUNC_8(VAR_18, VAR_7, VAR_9,
     "0267 NameServer GFF Rsp "
     "x%x Error (%d %d) Data: x%x x%x\n",
     VAR_24, VAR_20->ulpStatus, VAR_20->un.ulpWord[4],
     VAR_18->fc_flag, VAR_18->fc_rscn_id_cnt);
 }


 VAR_28 = FUNC_9(VAR_18, VAR_24);
 if (VAR_28 && FUNC_0(VAR_28)) {
  FUNC_8(VAR_18, VAR_8, VAR_9,
     "0242 Process x%x GFF "
     "NameServer Rsp Data: x%x x%x x%x\n",
     VAR_24, VAR_28->nlp_flag, VAR_18->fc_flag,
     VAR_18->fc_rscn_id_cnt);
 } else {
  FUNC_8(VAR_18, VAR_8, VAR_9,
     "0243 Skip x%x GFF "
     "NameServer Rsp Data: x%x x%x\n", VAR_24,
     VAR_18->fc_flag, VAR_18->fc_rscn_id_cnt);
 }
out:

 if (VAR_18->num_disc_nodes)
  VAR_18->num_disc_nodes--;
 if (VAR_18->num_disc_nodes == 0) {





  if (VAR_18->port_state >= VAR_10) {
   if (VAR_18->fc_flag & VAR_3) {
    FUNC_6(VAR_18);
    FUNC_11(VAR_19->host_lock);
    VAR_18->fc_flag |= VAR_3;
    FUNC_12(VAR_19->host_lock);
   }
   else
    FUNC_6(VAR_18);
  }
  FUNC_5(VAR_18);
 }
 FUNC_3(VAR_15, VAR_16);
 return;
}
