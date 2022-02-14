
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int wapi_enabled; } ;
struct mwifiex_private {scalar_t__* wapi_ie; int wapi_ie_len; TYPE_1__ sec_info; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*,int *,int) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_4,
          u8 *VAR_5, u16 VAR_6)
{
 if (VAR_6) {
  if (VAR_6 > sizeof(VAR_4->wapi_ie)) {
   FUNC_2(VAR_4->adapter, VAR_1,
        "info: failed to copy WAPI IE, too big\n");
   return -1;
  }
  FUNC_0(VAR_4->wapi_ie, VAR_5, VAR_6);
  VAR_4->wapi_ie_len = VAR_6;
  FUNC_2(VAR_4->adapter, VAR_0,
       "cmd: Set wapi_ie_len=%d IE=%#x\n",
       VAR_4->wapi_ie_len, VAR_4->wapi_ie[0]);

  if (VAR_4->wapi_ie[0] == VAR_3)
   VAR_4->sec_info.wapi_enabled = 1;
 } else {
  FUNC_1(VAR_4->wapi_ie, 0, sizeof(VAR_4->wapi_ie));
  VAR_4->wapi_ie_len = VAR_6;
  FUNC_2(VAR_4->adapter, VAR_2,
       "info: Reset wapi_ie_len=%d IE=%#x\n",
       VAR_4->wapi_ie_len, VAR_4->wapi_ie[0]);
  VAR_4->sec_info.wapi_enabled = 0;
 }
 return 0;
}
