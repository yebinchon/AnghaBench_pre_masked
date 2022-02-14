
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtlwifi_firmware_header {int signature; int version; int subversion; } ;
struct rtl_priv {scalar_t__ max_fw_size; TYPE_2__* cfg; } ;
struct rtl_hal {int version; scalar_t__ fwsize; int * pfirmware; int fw_subversion; int fw_version; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8723e { ____Placeholder_version_8723e } version_8723e ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ (* is_fw_header ) (struct rtlwifi_firmware_header*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int,int) ;
 int FUNC_6 (struct ieee80211_hw*,int,int *,scalar_t__,int) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_9 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct rtl_priv*,int ) ;
 int FUNC_12 (struct rtl_priv*,int ,int) ;
 scalar_t__ FUNC_13 (struct rtlwifi_firmware_header*) ;

int FUNC_14(struct ieee80211_hw *VAR_3,
   bool VAR_4, int VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_10(VAR_3);
 struct rtl_hal *VAR_7 = FUNC_9(FUNC_10(VAR_3));
 struct rtlwifi_firmware_header *VAR_8;
 u8 *VAR_9;
 u32 VAR_10;
 int VAR_11;
 enum version_8723e VAR_12 = VAR_7->version;
 int VAR_13;

 if (VAR_6->max_fw_size == 0 || !VAR_7->pfirmware)
  return 1;

 VAR_8 = (struct rtlwifi_firmware_header *)VAR_7->pfirmware;
 VAR_7->fw_version = FUNC_2(VAR_8->version);
 VAR_7->fw_subversion = VAR_8->subversion;
 VAR_9 = VAR_7->pfirmware;
 VAR_10 = VAR_7->fwsize;

 if (!VAR_4)
  VAR_13 = 6;
 else
  VAR_13 = 8;
 if (VAR_6->cfg->ops->is_fw_header(VAR_8)) {
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "Firmware Version(%d), Signature(%#x), Size(%d)\n",
    VAR_8->version, VAR_8->signature,
    (int)sizeof(struct rtlwifi_firmware_header));

  VAR_9 = VAR_9 + sizeof(struct rtlwifi_firmware_header);
  VAR_10 = VAR_10 - sizeof(struct rtlwifi_firmware_header);
 }

 if (FUNC_11(VAR_6, VAR_2)&FUNC_0(7)) {
  if (VAR_4)
   FUNC_8(VAR_3);
  else
   FUNC_7(VAR_3);
  FUNC_12(VAR_6, VAR_2, 0x00);
 }
 FUNC_4(VAR_3, 1);
 FUNC_6(VAR_3, VAR_12, VAR_9, VAR_10, VAR_13);
 FUNC_4(VAR_3, 0);

 VAR_11 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (VAR_11)
  FUNC_3("Firmware is not ready to run!\n");
 return 0;
}
