
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int revision_id; } ;
struct netxen_adapter {int need_fw_reset; scalar_t__ heartbit; scalar_t__ fw_fail_cnt; int state; TYPE_2__* pdev; TYPE_1__ ahw; struct net_device* netdev; } ;
struct net_device {int dev; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct netxen_adapter*,scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_17 ;
 scalar_t__ FUNC_5 (struct netxen_adapter*) ;
 int FUNC_6 (struct netxen_adapter*,int ,int ) ;
 scalar_t__ FUNC_7 (struct netxen_adapter*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(struct netxen_adapter *VAR_18)
{
 u32 VAR_19, VAR_20;
 u32 VAR_21;
 struct net_device *VAR_22 = VAR_18->netdev;

 VAR_19 = FUNC_0(VAR_18, VAR_10);
 if (VAR_19 == VAR_12)
  return 0;

 if (FUNC_5(VAR_18))
  goto detach;

 if (VAR_18->need_fw_reset) {
  if (FUNC_7(VAR_18))
   return 0;
  goto detach;
 }






 if (VAR_19 == VAR_13 || VAR_19 == VAR_11) {
  VAR_18->need_fw_reset = 1;
  if (FUNC_2(VAR_18->ahw.revision_id))
   goto detach;
 }

 if (FUNC_2(VAR_18->ahw.revision_id))
  return 0;

 VAR_20 = FUNC_0(VAR_18, VAR_7);
 if (VAR_20 != VAR_18->heartbit) {
  VAR_18->heartbit = VAR_20;
  VAR_18->fw_fail_cnt = 0;
  if (VAR_18->need_fw_reset)
   goto detach;
  return 0;
 }

 if (++VAR_18->fw_fail_cnt < VAR_1)
  return 0;

 if (FUNC_7(VAR_18))
  return 0;

 FUNC_3(VAR_14, &VAR_18->state);

 FUNC_4(&VAR_22->dev, "firmware hang detected\n");
 VAR_21 = FUNC_0(VAR_18, VAR_8);
 FUNC_4(&VAR_18->pdev->dev, "Dumping hw/fw registers\n"
   "PEG_HALT_STATUS1: 0x%x, PEG_HALT_STATUS2: 0x%x,\n"
   "PEG_NET_0_PC: 0x%x, PEG_NET_1_PC: 0x%x,\n"
   "PEG_NET_2_PC: 0x%x, PEG_NET_3_PC: 0x%x,\n"
   "PEG_NET_4_PC: 0x%x\n",
   VAR_21,
   FUNC_0(VAR_18, VAR_9),
   FUNC_0(VAR_18, VAR_2 + 0x3c),
   FUNC_0(VAR_18, VAR_3 + 0x3c),
   FUNC_0(VAR_18, VAR_4 + 0x3c),
   FUNC_0(VAR_18, VAR_5 + 0x3c),
   FUNC_0(VAR_18, VAR_6 + 0x3c));
 if (FUNC_1(VAR_21) == 0x67)
  FUNC_4(&VAR_18->pdev->dev,
   "Firmware aborted with error code 0x00006700. "
    "Device is being reset.\n");
detach:
 if ((VAR_16 == VAR_0) &&
   !FUNC_8(VAR_15, &VAR_18->state))
  FUNC_6(VAR_18, VAR_17, 0);
 return 1;
}
