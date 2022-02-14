
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int ssid; } ;
struct TYPE_7__ {TYPE_2__ bss_descriptor; } ;
struct TYPE_5__ {int authentication_mode; scalar_t__ wep_enabled; scalar_t__ is_authtype_auto; } ;
struct mwifiex_private {int scan_block; scalar_t__ bss_mode; int adhoc_is_link_sensed; int * attempted_bss_desc; struct mwifiex_adapter* adapter; int netdev; TYPE_3__ curr_bss_params; TYPE_1__ sec_info; scalar_t__ assoc_rsp_size; } ;
struct TYPE_8__ {scalar_t__ ssid_len; } ;
struct mwifiex_bssdescriptor {struct mwifiex_bssdescriptor* beacon_buf; TYPE_4__ ssid; scalar_t__ channel; int bss_band; } ;
struct mwifiex_adapter {int region_code; int fw_bands; int config_bands; int wiphy; } ;
struct cfg80211_ssid {scalar_t__ ssid; } ;
struct cfg80211_bss {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,struct cfg80211_bss*) ;
 int FUNC_1 (struct mwifiex_bssdescriptor*) ;
 struct mwifiex_bssdescriptor* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 int FUNC_5 (struct mwifiex_private*,struct cfg80211_ssid*) ;
 int FUNC_6 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 int FUNC_9 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_10 (struct mwifiex_private*,struct cfg80211_bss*,struct mwifiex_bssdescriptor*) ;
 int FUNC_11 (struct mwifiex_private*,struct cfg80211_bss*) ;
 int FUNC_12 (int *,TYPE_4__*) ;
 int FUNC_13 (int ,struct mwifiex_adapter*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;

int FUNC_16(struct mwifiex_private *VAR_15, struct cfg80211_bss *VAR_16,
        struct cfg80211_ssid *VAR_17)
{
 int VAR_18;
 struct mwifiex_adapter *VAR_19 = VAR_15->adapter;
 struct mwifiex_bssdescriptor *VAR_20 = ((void*)0);

 VAR_15->scan_block = 0;

 if (VAR_16) {
  if (VAR_19->region_code == 0x00)
   FUNC_11(VAR_15, VAR_16);


  VAR_20 = FUNC_2(sizeof(struct mwifiex_bssdescriptor),
       VAR_8);
  if (!VAR_20)
   return -VAR_6;

  VAR_18 = FUNC_10(VAR_15, VAR_16, VAR_20);
  if (VAR_18)
   goto done;
 }

 if (VAR_15->bss_mode == VAR_13 ||
     VAR_15->bss_mode == VAR_12) {
  u8 VAR_21;

  if (!VAR_20)
   return -1;

  if (FUNC_7(VAR_20->bss_band) ==
      VAR_9) {
   VAR_21 = VAR_3 | VAR_4 | VAR_5;
  } else {
   VAR_21 = VAR_0 | VAR_2;
   if (VAR_19->fw_bands & VAR_1)
    VAR_21 |= VAR_1;
  }

  if (!((VAR_21 | VAR_19->fw_bands) & ~VAR_19->fw_bands))
   VAR_19->config_bands = VAR_21;

  VAR_18 = FUNC_8(VAR_15, VAR_20);
  if (VAR_18)
   goto done;

  if (FUNC_3(VAR_15) ==
       (u8)VAR_20->channel) {
   FUNC_9(VAR_19, VAR_7,
        "Attempt to reconnect on csa closed chan(%d)\n",
        VAR_20->channel);
   VAR_18 = -1;
   goto done;
  }

  FUNC_9(VAR_19, VAR_10,
       "info: SSID found in scan list ...\t"
       "associating...\n");

  FUNC_13(VAR_15->netdev, VAR_19);
  if (FUNC_15(VAR_15->netdev))
   FUNC_14(VAR_15->netdev);



  VAR_15->assoc_rsp_size = 0;
  VAR_18 = FUNC_6(VAR_15, VAR_20);



  if (VAR_18 == VAR_14 &&
      VAR_15->sec_info.is_authtype_auto &&
      VAR_15->sec_info.wep_enabled) {
   VAR_15->sec_info.authentication_mode =
      VAR_11;
   VAR_18 = FUNC_6(VAR_15, VAR_20);
  }

  if (VAR_16)
   FUNC_0(VAR_15->adapter->wiphy, VAR_16);
 } else {


  if (VAR_20 && VAR_20->ssid.ssid_len &&
      (!FUNC_12(&VAR_15->curr_bss_params.bss_descriptor.
           ssid, &VAR_20->ssid))) {
   VAR_18 = 0;
   goto done;
  }

  VAR_15->adhoc_is_link_sensed = 0;

  VAR_18 = FUNC_8(VAR_15, VAR_20);

  FUNC_13(VAR_15->netdev, VAR_19);
  if (FUNC_15(VAR_15->netdev))
   FUNC_14(VAR_15->netdev);

  if (!VAR_18) {
   FUNC_9(VAR_19, VAR_10,
        "info: network found in scan\t"
        " list. Joining...\n");
   VAR_18 = FUNC_4(VAR_15, VAR_20);
   if (VAR_16)
    FUNC_0(VAR_15->adapter->wiphy, VAR_16);
  } else {
   FUNC_9(VAR_19, VAR_10,
        "info: Network not found in\t"
        "the list, creating adhoc with ssid = %s\n",
        VAR_17->ssid);
   VAR_18 = FUNC_5(VAR_15, VAR_17);
  }
 }

done:



 if (VAR_20)
  FUNC_1(VAR_20->beacon_buf);
 FUNC_1(VAR_20);

 if (VAR_18 < 0)
  VAR_15->attempted_bss_desc = ((void*)0);

 return VAR_18;
}
