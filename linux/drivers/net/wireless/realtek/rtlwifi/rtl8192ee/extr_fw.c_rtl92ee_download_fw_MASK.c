
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtlwifi_firmware_header {scalar_t__ signature; int version; int subversion; } ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; scalar_t__ mac_func_enable; scalar_t__ fwsize; scalar_t__ pfirmware; int fw_subversion; int fw_version; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8192e { ____Placeholder_version_8192e } version_8192e ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct rtlwifi_firmware_header*) ;
 int VAR_2 ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int *,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct rtl_priv*,int ) ;
 int FUNC_11 (struct rtl_priv*,int ,int ) ;

int FUNC_12(struct ieee80211_hw *VAR_3, bool VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_9(VAR_3);
 struct rtl_hal *VAR_6 = FUNC_8(FUNC_9(VAR_3));
 struct rtlwifi_firmware_header *VAR_7;
 u8 *VAR_8;
 u32 VAR_9;
 int VAR_10;
 enum version_8192e VAR_11 = VAR_6->version;

 if (!VAR_6->pfirmware)
  return 1;

 VAR_7 = (struct rtlwifi_firmware_header *)VAR_6->pfirmware;
 VAR_6->fw_version = FUNC_6(VAR_7->version);
 VAR_6->fw_subversion = VAR_7->subversion;
 VAR_8 = (u8 *)VAR_6->pfirmware;
 VAR_9 = VAR_6->fwsize;
 FUNC_2(VAR_5, VAR_0, VAR_1,
   "normal Firmware SIZE %d\n" , VAR_9);

 if (FUNC_1(VAR_7)) {
  FUNC_2(VAR_5, VAR_0, VAR_1,
    "Firmware Version(%d), Signature(%#x),Size(%d)\n",
     VAR_7->version, VAR_7->signature,
     (int)sizeof(struct rtlwifi_firmware_header));

  VAR_8 = VAR_8 + sizeof(struct rtlwifi_firmware_header);
  VAR_9 = VAR_9 - sizeof(struct rtlwifi_firmware_header);
 } else {
  FUNC_2(VAR_5, VAR_0, VAR_1,
    "Firmware no Header, Signature(%#x)\n",
     VAR_7->signature);
 }

 if (VAR_6->mac_func_enable) {
  if (FUNC_10(VAR_5, VAR_2) & FUNC_0(7)) {
   FUNC_11(VAR_5, VAR_2, 0);
   FUNC_7(VAR_3);
  }
 }
 FUNC_3(VAR_3, 1);
 FUNC_5(VAR_3, VAR_11, VAR_8, VAR_9);
 FUNC_3(VAR_3, 0);

 VAR_10 = FUNC_4(VAR_3);

 return 0;
}
