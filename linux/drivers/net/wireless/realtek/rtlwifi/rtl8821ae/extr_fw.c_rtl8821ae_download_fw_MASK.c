
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtlwifi_firmware_header {int signature; int version; int subversion; } ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_hal {int version; scalar_t__ mac_func_enable; scalar_t__ fwsize; scalar_t__ pfirmware; int fw_subversion; void* fw_version; scalar_t__ wowlan_fwsize; scalar_t__ wowlan_firmware; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8821ae { ____Placeholder_version_8821ae } version_8821ae ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct rtlwifi_firmware_header*) ;
 scalar_t__ FUNC_2 (struct rtlwifi_firmware_header*) ;
 int VAR_5 ;
 int FUNC_3 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct ieee80211_hw*,int,int *,scalar_t__) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_10 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct rtl_priv*,int ) ;
 int FUNC_13 (struct rtl_priv*,int ,int) ;
 int FUNC_14 (struct ieee80211_hw*,int ,int *) ;

int FUNC_15(struct ieee80211_hw *VAR_6, bool VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_11(VAR_6);
 struct rtl_hal *VAR_9 = FUNC_10(FUNC_11(VAR_6));
 struct rtlwifi_firmware_header *VAR_10;
 u8 *VAR_11;
 u32 VAR_12;
 int VAR_13;
 bool VAR_14;
 enum version_8821ae VAR_15 = VAR_9->version;

 VAR_8->cfg->ops->get_hw_reg(VAR_6, VAR_4,
          (u8 *)(&VAR_14));

 if (VAR_14)
  FUNC_6(VAR_8);

 if (VAR_7) {
  if (!VAR_9->wowlan_firmware)
   return 1;

  VAR_10 =
    (struct rtlwifi_firmware_header *)VAR_9->wowlan_firmware;
  VAR_9->fw_version = FUNC_8(VAR_10->version);
  VAR_9->fw_subversion = VAR_10->subversion;
  VAR_11 = (u8 *)VAR_9->wowlan_firmware;
  VAR_12 = VAR_9->wowlan_fwsize;
 } else {
  if (!VAR_9->pfirmware)
   return 1;

  VAR_10 =
    (struct rtlwifi_firmware_header *)VAR_9->pfirmware;
  VAR_9->fw_version = FUNC_8(VAR_10->version);
  VAR_9->fw_subversion = VAR_10->subversion;
  VAR_11 = (u8 *)VAR_9->pfirmware;
  VAR_12 = VAR_9->fwsize;
 }

 FUNC_3(VAR_8, VAR_1, VAR_2,
   "%s Firmware SIZE %d\n",
   VAR_7 ? "Wowlan" : "Normal", VAR_12);

 if (FUNC_1(VAR_10) ||
     FUNC_2(VAR_10)) {
  FUNC_3(VAR_8, VAR_1, VAR_2,
    "Firmware Version(%d), Signature(%#x)\n",
    VAR_10->version, VAR_10->signature);

  VAR_11 = VAR_11 + sizeof(struct rtlwifi_firmware_header);
  VAR_12 = VAR_12 - sizeof(struct rtlwifi_firmware_header);
 }

 if (VAR_9->mac_func_enable) {
  if (FUNC_12(VAR_8, VAR_5) & FUNC_0(7)) {
   FUNC_13(VAR_8, VAR_5, 0x00);
   FUNC_9(VAR_6);
  }
 }
 FUNC_4(VAR_6, 1);
 FUNC_7(VAR_6, VAR_15, VAR_11, VAR_12);
 FUNC_4(VAR_6, 0);

 VAR_13 = FUNC_5(VAR_6);
 if (VAR_13) {
  FUNC_3(VAR_8, VAR_0, VAR_2,
    "Firmware is not ready to run!\n");
 } else {
  FUNC_3(VAR_8, VAR_1, VAR_3,
    "Firmware is ready to run!\n");
 }

 return 0;
}
