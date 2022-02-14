
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int isp82xx_fw_hung; int nic_core_reset_hdlr_active; } ;
struct qla_hw_data {TYPE_2__ flags; } ;
struct TYPE_10__ {int online; } ;
struct TYPE_12__ {int dpc_flags; TYPE_1__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,TYPE_3__*,int,char*) ;
 int VAR_18 ;
 int FUNC_1 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*,scalar_t__) ;
 int FUNC_6 (struct qla_hw_data*,scalar_t__,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(scsi_qla_host_t *VAR_21)
{
 uint32_t VAR_22, VAR_23;
 struct qla_hw_data *VAR_24 = VAR_21->hw;


 if (!VAR_24->flags.nic_core_reset_hdlr_active) {
  VAR_22 = FUNC_5(VAR_24, VAR_6);
  if (FUNC_3(VAR_21)) {
   FUNC_7(VAR_5, &VAR_21->dpc_flags);
   VAR_24->flags.isp82xx_fw_hung = 1;
   FUNC_4(VAR_21);
  } else if (VAR_22 == VAR_17 &&
      !FUNC_8(VAR_3, &VAR_21->dpc_flags)) {
   FUNC_1(VAR_20, VAR_21, 0x6001,
       "Adapter reset needed.\n");
   FUNC_7(VAR_3, &VAR_21->dpc_flags);
  } else if (VAR_22 == VAR_16 &&
   !FUNC_8(VAR_4, &VAR_21->dpc_flags)) {
   FUNC_1(VAR_20, VAR_21, 0x6002,
       "Quiescent needed.\n");
   FUNC_7(VAR_4, &VAR_21->dpc_flags);
  } else if (VAR_22 == VAR_15 &&
   !FUNC_8(VAR_5, &VAR_21->dpc_flags) &&
   VAR_21->flags.online == 1) {
   FUNC_1(VAR_20, VAR_21, 0xb055,
       "Adapter state is failed. Offlining.\n");
   FUNC_7(VAR_5, &VAR_21->dpc_flags);
   VAR_24->flags.isp82xx_fw_hung = 1;
   FUNC_4(VAR_21);
  } else {
   if (FUNC_2(VAR_21)) {
    FUNC_0(VAR_18, VAR_21, 0x6011,
        "disabling pause transmit on port 0 & 1.\n");
    FUNC_6(VAR_24, VAR_7 + 0x98,
        VAR_0|VAR_1);
    VAR_23 = FUNC_5(VAR_24,
        VAR_13);
    FUNC_1(VAR_19, VAR_21, 0x6005,
        "dumping hw/fw registers:.\n "
        " PEG_HALT_STATUS1: 0x%x, PEG_HALT_STATUS2: 0x%x,.\n "
        " PEG_NET_0_PC: 0x%x, PEG_NET_1_PC: 0x%x,.\n "
        " PEG_NET_2_PC: 0x%x, PEG_NET_3_PC: 0x%x,.\n "
        " PEG_NET_4_PC: 0x%x.\n", VAR_23,
        FUNC_5(VAR_24, VAR_14),
        FUNC_5(VAR_24,
         VAR_8 + 0x3c),
        FUNC_5(VAR_24,
         VAR_9 + 0x3c),
        FUNC_5(VAR_24,
         VAR_10 + 0x3c),
        FUNC_5(VAR_24,
         VAR_11 + 0x3c),
        FUNC_5(VAR_24,
         VAR_12 + 0x3c));
    if (((VAR_23 & 0x1fffff00) >> 8) == 0x67)
     FUNC_1(VAR_20, VAR_21, 0xb052,
         "Firmware aborted with "
         "error code 0x00006700. Device is "
         "being reset.\n");
    if (VAR_23 & VAR_2) {
     FUNC_7(VAR_5,
         &VAR_21->dpc_flags);
    } else {
     FUNC_1(VAR_19, VAR_21, 0x6006,
         "Detect abort  needed.\n");
     FUNC_7(VAR_3,
         &VAR_21->dpc_flags);
    }
    VAR_24->flags.isp82xx_fw_hung = 1;
    FUNC_1(VAR_20, VAR_21, 0x6007, "Firmware hung.\n");
    FUNC_4(VAR_21);
   }
  }
 }
}
