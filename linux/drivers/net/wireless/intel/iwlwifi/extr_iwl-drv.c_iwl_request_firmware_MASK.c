
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_drv {scalar_t__ fw_index; TYPE_2__* trans; int firmware_name; } ;
struct iwl_cfg {scalar_t__ ucode_api_max; scalar_t__ ucode_api_min; char* fw_name_pre; } ;
struct TYPE_4__ {int dev; int hw_rev; TYPE_1__* trans_cfg; struct iwl_cfg* cfg; } ;
struct TYPE_3__ {scalar_t__ device_family; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_drv*,char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct iwl_drv*,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int,int ,int ,int ,struct iwl_drv*,int ) ;
 int FUNC_4 (int ,int,char*,char*,char*) ;
 int FUNC_5 (char*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct iwl_drv *VAR_8, bool VAR_9)
{
 const struct iwl_cfg *VAR_10 = VAR_8->trans->cfg;
 char VAR_11[8];

 if (VAR_8->trans->trans_cfg->device_family == VAR_3 &&
     (FUNC_0(VAR_8->trans->hw_rev) != VAR_4 &&
      FUNC_0(VAR_8->trans->hw_rev) != VAR_5)) {
  FUNC_2(VAR_8,
   "Only HW steps B and C are currently supported (0x%0x)\n",
   VAR_8->trans->hw_rev);
  return -VAR_0;
 }

 if (VAR_9) {
  VAR_8->fw_index = VAR_10->ucode_api_max;
  FUNC_5(VAR_11, "%d", VAR_8->fw_index);
 } else {
  VAR_8->fw_index--;
  FUNC_5(VAR_11, "%d", VAR_8->fw_index);
 }

 if (VAR_8->fw_index < VAR_10->ucode_api_min) {
  FUNC_2(VAR_8, "no suitable firmware found!\n");

  if (VAR_10->ucode_api_min == VAR_10->ucode_api_max) {
   FUNC_2(VAR_8, "%s%d is required\n", VAR_10->fw_name_pre,
    VAR_10->ucode_api_max);
  } else {
   FUNC_2(VAR_8, "minimum version required: %s%d\n",
    VAR_10->fw_name_pre, VAR_10->ucode_api_min);
   FUNC_2(VAR_8, "maximum version supported: %s%d\n",
    VAR_10->fw_name_pre, VAR_10->ucode_api_max);
  }

  FUNC_2(VAR_8,
   "check git://git.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git\n");
  return -VAR_1;
 }

 FUNC_4(VAR_8->firmware_name, sizeof(VAR_8->firmware_name), "%s%s.ucode",
   VAR_10->fw_name_pre, VAR_11);

 FUNC_1(VAR_8, "attempting to load firmware '%s'\n",
     VAR_8->firmware_name);

 return FUNC_3(VAR_6, 1, VAR_8->firmware_name,
           VAR_8->trans->dev,
           VAR_2, VAR_8, VAR_7);
}
