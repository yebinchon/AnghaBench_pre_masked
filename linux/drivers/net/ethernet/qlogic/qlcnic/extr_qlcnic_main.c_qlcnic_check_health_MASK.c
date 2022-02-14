
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_fw_dump {scalar_t__ enable; } ;
struct qlcnic_hardware_context {scalar_t__ reset_context; struct qlcnic_fw_dump fw_dump; } ;
struct qlcnic_adapter {int need_fw_reset; scalar_t__ heartbeat; scalar_t__ fw_fail_cnt; int flags; int state; scalar_t__ dev_state; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct qlcnic_adapter*,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,char*,...) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 int VAR_18 ;
 int FUNC_7 (struct qlcnic_adapter*,int ) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(struct qlcnic_adapter *VAR_19)
{
 struct qlcnic_hardware_context *VAR_20 = VAR_19->ahw;
 struct qlcnic_fw_dump *VAR_21 = &VAR_20->fw_dump;
 u32 VAR_22 = 0, VAR_23;
 u32 VAR_24;
 int VAR_25 = 0;

 if (FUNC_6(VAR_19))
  goto detach;

 if (VAR_19->need_fw_reset)
  FUNC_7(VAR_19, 0);

 VAR_22 = FUNC_3(VAR_19, VAR_2);
 if (VAR_22 == VAR_9) {
  FUNC_11(VAR_19);
  VAR_19->need_fw_reset = 1;
 } else if (VAR_22 == VAR_8)
  goto detach;

 VAR_23 = FUNC_3(VAR_19, VAR_12);
 if (VAR_23 != VAR_19->heartbeat) {
  VAR_19->heartbeat = VAR_23;
  VAR_19->fw_fail_cnt = 0;
  if (VAR_19->need_fw_reset)
   goto detach;

  if (VAR_20->reset_context && VAR_17)
   FUNC_9(VAR_19);

  return 0;
 }

 if (++VAR_19->fw_fail_cnt < VAR_1)
  return 0;

 VAR_19->flags |= VAR_10;

 FUNC_7(VAR_19, 0);

 if (VAR_17)
  FUNC_4(VAR_15, &VAR_19->state);

 FUNC_5(&VAR_19->pdev->dev, "firmware hang detected\n");
 VAR_24 = FUNC_3(VAR_19, VAR_13);
 FUNC_5(&VAR_19->pdev->dev, "Dumping hw/fw registers\n"
   "PEG_HALT_STATUS1: 0x%x, PEG_HALT_STATUS2: 0x%x,\n"
   "PEG_NET_0_PC: 0x%x, PEG_NET_1_PC: 0x%x,\n"
   "PEG_NET_2_PC: 0x%x, PEG_NET_3_PC: 0x%x,\n"
   "PEG_NET_4_PC: 0x%x\n",
   VAR_24,
   FUNC_3(VAR_19, VAR_14),
   FUNC_2(VAR_19, VAR_3 + 0x3c, &VAR_25),
   FUNC_2(VAR_19, VAR_4 + 0x3c, &VAR_25),
   FUNC_2(VAR_19, VAR_5 + 0x3c, &VAR_25),
   FUNC_2(VAR_19, VAR_6 + 0x3c, &VAR_25),
   FUNC_2(VAR_19, VAR_7 + 0x3c, &VAR_25));
 if (FUNC_1(VAR_24) == 0x67)
  FUNC_5(&VAR_19->pdev->dev,
   "Firmware aborted with error code 0x00006700. "
    "Device is being reset.\n");
detach:
 VAR_19->dev_state = (VAR_22 == VAR_8) ? VAR_22 :
  VAR_9;

 if (VAR_17 && !FUNC_12(VAR_16,
            &VAR_19->state)) {

  FUNC_10(VAR_19, VAR_18, 0);
  FUNC_0(VAR_19, VAR_0, "fw recovery scheduled.\n");
 } else if (!VAR_17 && VAR_21->enable &&
     VAR_19->flags & VAR_11) {
  FUNC_8(VAR_19);
 }

 return 1;
}
