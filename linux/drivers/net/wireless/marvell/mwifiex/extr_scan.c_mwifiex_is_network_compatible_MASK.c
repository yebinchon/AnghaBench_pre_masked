
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ session_enable; } ;
struct mwifiex_private {scalar_t__ bss_mode; struct mwifiex_adapter* adapter; TYPE_1__ wps; scalar_t__ media_connected; } ;
struct mwifiex_bssdescriptor {int disable_11n; scalar_t__ bss_mode; scalar_t__ bcn_ht_cap; scalar_t__ chan_sw_ie_present; } ;
struct mwifiex_adapter {int config_bands; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_3 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_4 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_6 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_7 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_8 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_9 (struct mwifiex_bssdescriptor*,int ) ;
 scalar_t__ FUNC_10 (struct mwifiex_bssdescriptor*,int ) ;

__attribute__((used)) static s32
FUNC_11(struct mwifiex_private *VAR_8,
         struct mwifiex_bssdescriptor *VAR_9, u32 VAR_10)
{
 struct mwifiex_adapter *VAR_11 = VAR_8->adapter;

 VAR_9->disable_11n = 0;


 if (VAR_8->media_connected &&
     (VAR_8->bss_mode == VAR_7) &&
     (VAR_9->bss_mode == VAR_7))
  return 0;

 if (VAR_8->wps.session_enable) {
  FUNC_1(VAR_11, VAR_6,
       "info: return success directly in WPS period\n");
  return 0;
 }

 if (VAR_9->chan_sw_ie_present) {
  FUNC_1(VAR_11, VAR_5,
       "Don't connect to AP with WLAN_EID_CHANNEL_SWITCH\n");
  return -1;
 }

 if (FUNC_6(VAR_8, VAR_9)) {
  FUNC_1(VAR_11, VAR_5,
       "info: return success for WAPI AP\n");
  return 0;
 }

 if (VAR_9->bss_mode == VAR_10) {
  if (FUNC_4(VAR_8, VAR_9)) {

   return 0;
  } else if (FUNC_5(VAR_8, VAR_9)) {

   FUNC_1(VAR_11, VAR_5,
        "info: Disable 11n in WEP mode.\n");
   VAR_9->disable_11n = 1;
   return 0;
  } else if (FUNC_7(VAR_8, VAR_9)) {

   if (((VAR_8->adapter->config_bands & VAR_1 ||
         VAR_8->adapter->config_bands & VAR_0) &&
        VAR_9->bcn_ht_cap) &&
       !FUNC_10(VAR_9,
        VAR_2)) {

    if (FUNC_10
      (VAR_9, VAR_3)) {
     FUNC_1(VAR_11, VAR_5,
          "info: Disable 11n if AES\t"
          "is not supported by AP\n");
     VAR_9->disable_11n = 1;
    } else {
     return -1;
    }
   }
   return 0;
  } else if (FUNC_8(VAR_8, VAR_9)) {

   if (((VAR_8->adapter->config_bands & VAR_1 ||
         VAR_8->adapter->config_bands & VAR_0) &&
        VAR_9->bcn_ht_cap) &&
       !FUNC_9(VAR_9,
       VAR_2)) {

    if (FUNC_9
      (VAR_9, VAR_3)) {
     FUNC_1(VAR_11, VAR_5,
          "info: Disable 11n if AES\t"
          "is not supported by AP\n");
     VAR_9->disable_11n = 1;
    } else {
     return -1;
    }
   }
   return 0;
  } else if (FUNC_2(VAR_8, VAR_9)) {

   return 0;
  } else if (FUNC_3(VAR_8, VAR_9)) {

   return 0;
  }


  FUNC_0(VAR_4, "failed", VAR_8, VAR_9);
  return -1;
 }


 return -1;
}
