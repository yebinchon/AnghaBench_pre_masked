
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fwsize; scalar_t__ wowlan_fwsize; int wowlan_firmware; int pfirmware; } ;
struct TYPE_4__ {int dev; } ;
struct rtl_priv {scalar_t__ max_fw_size; TYPE_3__ rtlhal; TYPE_2__* cfg; TYPE_1__ io; int firmware_loading_complete; } ;
struct ieee80211_hw {int dummy; } ;
struct firmware {scalar_t__ size; int data; } ;
struct TYPE_5__ {scalar_t__ alt_fw_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,scalar_t__,int ) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_8(const struct firmware *VAR_2, void *VAR_3,
      bool VAR_4)
{
 struct ieee80211_hw *VAR_5 = VAR_3;
 struct rtl_priv *VAR_6 = FUNC_7(VAR_5);
 int VAR_7;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "Firmware callback routine entered!\n");
 FUNC_1(&VAR_6->firmware_loading_complete);
 if (!VAR_2) {
  if (VAR_6->cfg->alt_fw_name) {
   VAR_7 = FUNC_6(&VAR_2,
            VAR_6->cfg->alt_fw_name,
            VAR_6->io.dev);
   FUNC_4("Loading alternative firmware %s\n",
    VAR_6->cfg->alt_fw_name);
   if (!VAR_7)
    goto found_alt;
  }
  FUNC_3("Selected firmware is not available\n");
  VAR_6->max_fw_size = 0;
  return;
 }
found_alt:
 if (VAR_2->size > VAR_6->max_fw_size) {
  FUNC_3("Firmware is too big!\n");
  FUNC_5(VAR_2);
  return;
 }
 if (!VAR_4) {
  FUNC_2(VAR_6->rtlhal.pfirmware, VAR_2->data,
         VAR_2->size);
  VAR_6->rtlhal.fwsize = VAR_2->size;
 } else {
  FUNC_2(VAR_6->rtlhal.wowlan_firmware, VAR_2->data,
         VAR_2->size);
  VAR_6->rtlhal.wowlan_fwsize = VAR_2->size;
 }
 FUNC_5(VAR_2);
}
