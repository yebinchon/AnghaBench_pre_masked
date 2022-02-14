
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int wpa_enabled; int wpa2_enabled; } ;
struct mwifiex_private {scalar_t__* wpa_ie; int wpa_ie_len; TYPE_1__ sec_info; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*,int *,int) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_5,
         u8 *VAR_6, u16 VAR_7)
{
 if (VAR_7) {
  if (VAR_7 > sizeof(VAR_5->wpa_ie)) {
   FUNC_2(VAR_5->adapter, VAR_1,
        "failed to copy WPA IE, too big\n");
   return -1;
  }
  FUNC_0(VAR_5->wpa_ie, VAR_6, VAR_7);
  VAR_5->wpa_ie_len = VAR_7;
  FUNC_2(VAR_5->adapter, VAR_0,
       "cmd: Set Wpa_ie_len=%d IE=%#x\n",
       VAR_5->wpa_ie_len, VAR_5->wpa_ie[0]);

  if (VAR_5->wpa_ie[0] == VAR_4) {
   VAR_5->sec_info.wpa_enabled = 1;
  } else if (VAR_5->wpa_ie[0] == VAR_3) {
   VAR_5->sec_info.wpa2_enabled = 1;
  } else {
   VAR_5->sec_info.wpa_enabled = 0;
   VAR_5->sec_info.wpa2_enabled = 0;
  }
 } else {
  FUNC_1(VAR_5->wpa_ie, 0, sizeof(VAR_5->wpa_ie));
  VAR_5->wpa_ie_len = 0;
  FUNC_2(VAR_5->adapter, VAR_2,
       "info: reset wpa_ie_len=%d IE=%#x\n",
       VAR_5->wpa_ie_len, VAR_5->wpa_ie[0]);
  VAR_5->sec_info.wpa_enabled = 0;
  VAR_5->sec_info.wpa2_enabled = 0;
 }

 return 0;
}
