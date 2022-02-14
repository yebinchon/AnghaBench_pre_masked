
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pfirmware; } ;
struct rtl_priv {scalar_t__ max_fw_size; TYPE_1__ rtlhal; int firmware_loading_complete; } ;
struct rt_firmware {scalar_t__ sz_fw_tmpbufferlen; int sz_fw_tmpbuffer; } ;
struct ieee80211_hw {int dummy; } ;
struct firmware {scalar_t__ size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct firmware const*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(const struct firmware *VAR_2, void *VAR_3)
{
 struct ieee80211_hw *VAR_4 = VAR_3;
 struct rtl_priv *VAR_5 = FUNC_5(VAR_4);
 struct rt_firmware *VAR_6 = ((void*)0);
 char *VAR_7 = "rtlwifi/rtl8192sefw.bin";

 FUNC_0(VAR_5, VAR_0, VAR_1,
    "Firmware callback routine entered!\n");
 FUNC_1(&VAR_5->firmware_loading_complete);
 if (!VAR_2) {
  FUNC_3("Firmware %s not available\n", VAR_7);
  VAR_5->max_fw_size = 0;
  return;
 }
 if (VAR_2->size > VAR_5->max_fw_size) {
  FUNC_3("Firmware is too big!\n");
  VAR_5->max_fw_size = 0;
  FUNC_4(VAR_2);
  return;
 }
 VAR_6 = (struct rt_firmware *)VAR_5->rtlhal.pfirmware;
 FUNC_2(VAR_6->sz_fw_tmpbuffer, VAR_2->data, VAR_2->size);
 VAR_6->sz_fw_tmpbufferlen = VAR_2->size;
 FUNC_4(VAR_2);
}
