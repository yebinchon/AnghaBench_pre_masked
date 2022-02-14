
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * pfirmware; int version; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int dm_initialgain_enable; int disable_framebursting; scalar_t__ thermalvalue; scalar_t__ dm_flag; } ;
struct rtl_priv {int max_fw_size; TYPE_4__ rtlhal; TYPE_3__ io; TYPE_2__* cfg; TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {char* alt_fw_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int,char*,int ,int ,struct ieee80211_hw*,int ) ;
 int VAR_2 ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;
 char *VAR_6;

 VAR_4->dm.dm_initialgain_enable = 1;
 VAR_4->dm.dm_flag = 0;
 VAR_4->dm.disable_framebursting = 0;
 VAR_4->dm.thermalvalue = 0;


 VAR_4->rtlhal.pfirmware = FUNC_8(0x4000);
 if (!VAR_4->rtlhal.pfirmware) {
  FUNC_3("Can't alloc buffer for fw\n");
  return 1;
 }
 if (FUNC_2(VAR_4->rtlhal.version) &&
     !FUNC_1(VAR_4->rtlhal.version)) {
  VAR_6 = "rtlwifi/rtl8192cufw_A.bin";
 } else if (FUNC_0(VAR_4->rtlhal.version)) {
  VAR_6 = "rtlwifi/rtl8192cufw_B.bin";
 } else {
  VAR_6 = "rtlwifi/rtl8192cufw_TMSC.bin";
 }

 VAR_4->cfg->alt_fw_name = "rtlwifi/rtl8192cufw.bin";
 FUNC_4("Loading firmware %s\n", VAR_6);
 VAR_4->max_fw_size = 0x4000;
 VAR_5 = FUNC_5(VAR_1, 1,
          VAR_6, VAR_4->io.dev,
          VAR_0, VAR_3, VAR_2);
 if (VAR_5) {
  FUNC_7(VAR_4->rtlhal.pfirmware);
  VAR_4->rtlhal.pfirmware = ((void*)0);
 }
 return VAR_5;
}
