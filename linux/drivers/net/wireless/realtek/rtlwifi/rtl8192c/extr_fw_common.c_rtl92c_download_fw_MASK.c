
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtlwifi_firmware_header {int subversion; int version; int signature; } ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; int fw_subversion; int fw_version; scalar_t__ fwsize; scalar_t__ pfirmware; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8192c { ____Placeholder_version_8192c } version_8192c ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtlwifi_firmware_header*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ,int ,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int *,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 struct rtl_hal* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;

int FUNC_9(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_8(VAR_2);
 struct rtl_hal *VAR_4 = FUNC_7(FUNC_8(VAR_2));
 struct rtlwifi_firmware_header *VAR_5;
 u8 *VAR_6;
 u32 VAR_7;
 int VAR_8;
 enum version_8192c VAR_9 = VAR_4->version;

 if (!VAR_4->pfirmware)
  return 1;

 VAR_5 = (struct rtlwifi_firmware_header *)VAR_4->pfirmware;
 VAR_6 = (u8 *)VAR_4->pfirmware;
 VAR_7 = VAR_4->fwsize;
 if (FUNC_0(VAR_5)) {
  FUNC_1(VAR_3, VAR_0, VAR_1,
    "Firmware Version(%d), Signature(%#x),Size(%d)\n",
     VAR_5->version, VAR_5->signature,
     (int)sizeof(struct rtlwifi_firmware_header));

  VAR_4->fw_version = FUNC_5(VAR_5->version);
  VAR_4->fw_subversion = VAR_5->subversion;
  VAR_6 = VAR_6 + sizeof(struct rtlwifi_firmware_header);
  VAR_7 = VAR_7 - sizeof(struct rtlwifi_firmware_header);
 }

 FUNC_2(VAR_2, 1);
 FUNC_4(VAR_2, VAR_9, VAR_6, VAR_7);
 FUNC_2(VAR_2, 0);

 VAR_8 = FUNC_3(VAR_2);
 if (VAR_8)
  FUNC_6("Firmware is not ready to run!\n");

 return 0;
}
