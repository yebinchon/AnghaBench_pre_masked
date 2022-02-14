
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct lpfc_vport {void* fdmi_port_mask; int port_type; void* fdmi_hba_mask; } ;
struct TYPE_5__ {scalar_t__ CmdRsp; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct lpfc_sli_ct_request {TYPE_2__ CommandResponse; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_7__ {int* ulpWord; } ;
struct TYPE_8__ {scalar_t__ ulpStatus; TYPE_3__ un; } ;
struct lpfc_iocbq {int retry; TYPE_4__ iocb; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {struct lpfc_sli_ct_request* virt; } ;
typedef TYPE_4__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_15 ;





 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_4 (struct lpfc_vport*,int ,char*,scalar_t__,int,int) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int const,int ) ;
 struct lpfc_nodelist* FUNC_7 (struct lpfc_vport*,int ) ;
 int FUNC_8 (struct lpfc_vport*,int ,int ,char*,int,...) ;
 int FUNC_9 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;

__attribute__((used)) static void
FUNC_10(struct lpfc_hba *VAR_16, struct lpfc_iocbq *VAR_17,
         struct lpfc_iocbq *VAR_18)
{
 struct lpfc_vport *VAR_19 = VAR_17->vport;
 struct lpfc_dmabuf *VAR_20 = VAR_17->context1;
 struct lpfc_dmabuf *VAR_21 = VAR_17->context2;
 struct lpfc_sli_ct_request *VAR_22 = VAR_20->virt;
 struct lpfc_sli_ct_request *VAR_23 = VAR_21->virt;
 uint16_t VAR_24 = VAR_22->CommandResponse.bits.CmdRsp;
 uint16_t VAR_25 = VAR_23->CommandResponse.bits.CmdRsp;
 IOCB_t *VAR_26 = &VAR_18->iocb;
 struct lpfc_nodelist *VAR_27;
 uint32_t VAR_28, VAR_29, VAR_30;

 VAR_28 = FUNC_5(VAR_19);
 FUNC_4(VAR_19, VAR_6,
  "FDMI cmpl:       status:x%x/x%x latt:%d",
  VAR_26->ulpStatus, VAR_26->un.ulpWord[4], VAR_28);

 if (VAR_28 || VAR_26->ulpStatus) {


  if (VAR_26->ulpStatus == VAR_3) {
   switch ((VAR_26->un.ulpWord[4] & VAR_2)) {
   case 133:
   case 138:
   case 134:
   case 136:
   case 135:
   case 137:
    VAR_17->retry++;
    if (VAR_17->retry >= VAR_13)
     break;


    VAR_30 = FUNC_9(VAR_16, VAR_7,
         VAR_17, 0);
    if (VAR_30 == VAR_1)
     break;
    return;
   default:
    break;
   }
  }

  FUNC_8(VAR_19, VAR_4, VAR_5,
     "0229 FDMI cmd %04x failed, latt = %d "
     "ulpStatus: x%x, rid x%x\n",
     FUNC_1(VAR_24), VAR_28, VAR_26->ulpStatus,
     VAR_26->un.ulpWord[4]);
 }
 FUNC_3(VAR_16, VAR_17);

 VAR_27 = FUNC_7(VAR_19, VAR_0);
 if (!VAR_27 || !FUNC_0(VAR_27))
  return;


 VAR_29 = FUNC_1(VAR_24);
 if (VAR_25 == FUNC_2(VAR_15)) {

  FUNC_8(VAR_19, VAR_4, VAR_5,
     "0220 FDMI cmd failed FS_RJT Data: x%x", VAR_29);


  switch (VAR_29) {
  case 130:
   if (VAR_19->fdmi_hba_mask == VAR_10) {

    VAR_19->fdmi_hba_mask = VAR_8;
    VAR_19->fdmi_port_mask = VAR_9;

    FUNC_6(VAR_19, VAR_27, 132, 0);
   }
   return;

  case 128:
   if (VAR_19->fdmi_port_mask == VAR_11) {

    VAR_19->fdmi_port_mask = VAR_9;

    FUNC_6(VAR_19, VAR_27, VAR_29, 0);
   }
   if (VAR_19->fdmi_port_mask == VAR_12) {
    VAR_19->fdmi_port_mask = VAR_11;

    FUNC_6(VAR_19, VAR_27, VAR_29, 0);
   }
   return;

  case 129:
   if (VAR_19->fdmi_port_mask == VAR_11) {

    VAR_19->fdmi_hba_mask = VAR_8;
    VAR_19->fdmi_port_mask = VAR_9;

    FUNC_6(VAR_19, VAR_27, 132, 0);
   }
   if (VAR_19->fdmi_port_mask == VAR_12) {
    VAR_19->fdmi_port_mask = VAR_11;

    FUNC_6(VAR_19, VAR_27, VAR_29, 0);
   }
   return;
  }
 }






 switch (VAR_29) {
 case 130:
  FUNC_6(VAR_19, VAR_27, 129, 0);
  break;

 case 132:
  FUNC_6(VAR_19, VAR_27, 131, 0);
  break;

 case 131:
  if (VAR_19->port_type == VAR_14)
   FUNC_6(VAR_19, VAR_27, 130, 0);
  else
   FUNC_6(VAR_19, VAR_27, 128, 0);
  break;
 }
 return;
}
