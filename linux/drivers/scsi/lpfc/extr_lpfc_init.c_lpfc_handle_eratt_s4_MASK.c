
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int temp_event_data ;
struct temp_event {int data; int event_code; int event_type; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_register {int word0; int member_0; } ;
struct TYPE_6__ {int ERR2regaddr; int ERR1regaddr; int STATUSregaddr; } ;
struct TYPE_5__ {int UEMASKLOregaddr; int UERRLOregaddr; } ;
struct TYPE_7__ {TYPE_2__ if_type2; TYPE_1__ if_type0; } ;
struct TYPE_8__ {int ue_to_sr; TYPE_3__ u; int PSMPHRregaddr; struct lpfc_register sli_intf; } ;
struct lpfc_hba {int hba_flag; void* link_state; int cfg_enable_hba_reset; int hbalock; int over_temp_state; struct lpfc_vport* pport; int sfp_alarm; TYPE_4__ sli4_hba; int pcidev; } ;
struct Scsi_Host {int dummy; } ;
typedef int portsmphr_reg ;
typedef int event_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
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
 int FUNC_0 (int ,struct lpfc_register*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct Scsi_Host*,int ,int,char*,int) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int VAR_21 ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_5 (int ,int*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_9 (struct lpfc_register*,int ,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(struct lpfc_hba *VAR_24)
{
 struct lpfc_vport *VAR_25 = VAR_24->pport;
 uint32_t VAR_26;
 struct Scsi_Host *VAR_27;
 uint32_t VAR_28;
 struct lpfc_register VAR_29 = {0};
 uint32_t VAR_30, VAR_31;
 uint32_t VAR_32, VAR_33;
 uint32_t VAR_34 = 0, VAR_35, VAR_36;
 bool VAR_37 = 1;
 struct temp_event VAR_38;
 struct lpfc_register VAR_39;
 int VAR_40, VAR_41;




 if (FUNC_11(VAR_24->pcidev)) {
  FUNC_4(VAR_24, VAR_5, VAR_7,
    "3166 pci channel is offline\n");
  FUNC_7(VAR_24);
  return;
 }

 FUNC_9(&VAR_39, 0, sizeof(VAR_39));
 VAR_28 = FUNC_0(VAR_22, &VAR_24->sli4_hba.sli_intf);
 switch (VAR_28) {
 case 131:
  VAR_35 = FUNC_5(
    VAR_24->sli4_hba.u.if_type0.UERRLOregaddr,
    &VAR_32);
  VAR_36 = FUNC_5(
    VAR_24->sli4_hba.u.if_type0.UEMASKLOregaddr,
    &VAR_33);

  if (VAR_35 == -VAR_0 && VAR_36 == -VAR_0)
   return;
  if (!(VAR_24->hba_flag & VAR_4)) {
   FUNC_7(VAR_24);
   return;
  }
  FUNC_4(VAR_24, VAR_5, VAR_7,
    "7623 Checking UE recoverable");

  for (VAR_41 = 0; VAR_41 < VAR_24->sli4_hba.ue_to_sr / 1000; VAR_41++) {
   if (FUNC_5(VAR_24->sli4_hba.PSMPHRregaddr,
           &VAR_39.word0))
    continue;

   VAR_34 = FUNC_0(VAR_21,
         &VAR_39);
   if ((VAR_34 & VAR_11) ==
       VAR_12)
    break;

   FUNC_10(1000);
  }

  FUNC_4(VAR_24, VAR_5, VAR_7,
    "4827 smphr_port_status x%x : Waited %dSec",
    VAR_34, VAR_41);


  if ((VAR_34 & VAR_11) ==
      VAR_12) {
   for (VAR_41 = 0; VAR_41 < 20; VAR_41++) {
    FUNC_10(1000);
    if (!FUNC_5(VAR_24->sli4_hba.PSMPHRregaddr,
        &VAR_39.word0) &&
        (VAR_13 ==
         FUNC_0(VAR_21,
         &VAR_39))) {
     VAR_40 = FUNC_8(VAR_24,
      VAR_10, VAR_37);
     if (VAR_40 == 0)
      return;
     FUNC_4(VAR_24,
      VAR_5, VAR_7,
      "4215 Failed to recover UE");
     break;
    }
   }
  }
  FUNC_4(VAR_24, VAR_5, VAR_7,
    "7624 Firmware not ready: Failing UE recovery,"
    " waited %dSec", VAR_41);
  VAR_24->link_state = VAR_9;
  break;

 case 129:
 case 128:
  VAR_35 = FUNC_5(
    VAR_24->sli4_hba.u.if_type2.STATUSregaddr,
    &VAR_29.word0);

  if (VAR_35 == -VAR_0) {
   FUNC_4(VAR_24, VAR_5, VAR_7,
    "3151 PCI bus read access failure: x%x\n",
    FUNC_12(VAR_24->sli4_hba.u.if_type2.STATUSregaddr));
   FUNC_7(VAR_24);
   return;
  }
  VAR_30 = FUNC_12(VAR_24->sli4_hba.u.if_type2.ERR1regaddr);
  VAR_31 = FUNC_12(VAR_24->sli4_hba.u.if_type2.ERR2regaddr);
  if (FUNC_0(VAR_23, &VAR_29)) {
   FUNC_4(VAR_24, VAR_5, VAR_7,
    "2889 Port Overtemperature event, "
    "taking port offline Data: x%x x%x\n",
    VAR_30, VAR_31);

   VAR_24->sfp_alarm |= VAR_14;
   VAR_38.event_type = VAR_2;
   VAR_38.event_code = VAR_8;
   VAR_38.data = 0xFFFFFFFF;

   VAR_27 = FUNC_6(VAR_24->pport);
   FUNC_2(VAR_27, FUNC_1(),
        sizeof(VAR_38),
        (char *)&VAR_38,
        VAR_16
        | VAR_15);

   FUNC_13(&VAR_24->hbalock);
   VAR_24->over_temp_state = VAR_3;
   FUNC_14(&VAR_24->hbalock);
   FUNC_7(VAR_24);
   return;
  }
  if (VAR_30 == VAR_17 &&
      VAR_31 == VAR_20) {
   FUNC_4(VAR_24, VAR_5, VAR_7,
     "3143 Port Down: Firmware Update "
     "Detected\n");
   VAR_37 = 0;
  } else if (VAR_30 == VAR_17 &&
    VAR_31 == VAR_18)
   FUNC_4(VAR_24, VAR_5, VAR_7,
     "3144 Port Down: Debug Dump\n");
  else if (VAR_30 == VAR_17 &&
    VAR_31 == VAR_19)
   FUNC_4(VAR_24, VAR_5, VAR_7,
     "3145 Port Down: Provisioning\n");


  if (!VAR_24->cfg_enable_hba_reset)
   return;


  VAR_40 = FUNC_8(VAR_24, VAR_10,
    VAR_37);
  if (VAR_40 == 0) {

   if (VAR_30 == VAR_17 &&
       VAR_31 == VAR_18)
    return;
   else
    break;
  }

  FUNC_4(VAR_24, VAR_5, VAR_7,
    "3152 Unrecoverable error\n");
  VAR_24->link_state = VAR_9;
  break;
 case 130:
 default:
  break;
 }
 FUNC_4(VAR_24, VAR_6, VAR_7,
   "3123 Report dump event to upper layer\n");

 FUNC_3(VAR_24);

 VAR_26 = VAR_1;
 VAR_27 = FUNC_6(VAR_25);
 FUNC_2(VAR_27, FUNC_1(),
      sizeof(VAR_26), (char *) &VAR_26,
      VAR_16 | VAR_15);
}
