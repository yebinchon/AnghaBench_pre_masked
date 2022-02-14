
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int wiphy; scalar_t__ current_bss; } ;
struct mwifiex_private {int scan_block; scalar_t__ bss_type; int cfg_bssid; int netdev; struct mwifiex_adapter* adapter; int bss_mode; TYPE_1__ wdev; } ;
struct mwifiex_adapter {scalar_t__ auto_tdls; int fw_cap_info; int work_flags; } ;
struct cfg80211_connect_params {int channel; int bssid; scalar_t__ ssid; scalar_t__ ssid_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int *,int ,int *,int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mwifiex_private*,scalar_t__,scalar_t__,int ,int ,int ,struct cfg80211_connect_params*,int ) ;
 int FUNC_6 (struct mwifiex_adapter*,int ,char*,int,...) ;
 struct mwifiex_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct mwifiex_private*) ;
 int FUNC_9 (struct mwifiex_private*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int
FUNC_11(struct wiphy *VAR_13, struct net_device *VAR_14,
    struct cfg80211_connect_params *VAR_15)
{
 struct mwifiex_private *VAR_16 = FUNC_7(VAR_14);
 struct mwifiex_adapter *VAR_17 = VAR_16->adapter;
 int VAR_18;

 if (FUNC_0(VAR_16) != VAR_7) {
  FUNC_6(VAR_17, VAR_3,
       "%s: reject infra assoc request in non-STA role\n",
       VAR_14->name);
  return -VAR_2;
 }

 if (VAR_16->wdev.current_bss) {
  FUNC_6(VAR_17, VAR_3,
       "%s: already connected\n", VAR_14->name);
  return -VAR_0;
 }

 if (VAR_16->scan_block)
  VAR_16->scan_block = 0;

 if (FUNC_10(VAR_10, &VAR_17->work_flags) ||
     FUNC_10(VAR_9, &VAR_17->work_flags)) {
  FUNC_6(VAR_17, VAR_3,
       "%s: Ignore connection.\t"
       "Card removed or FW in bad state\n",
       VAR_14->name);
  return -VAR_1;
 }

 FUNC_6(VAR_17, VAR_5,
      "info: Trying to associate to %.*s and bssid %pM\n",
      (int)VAR_15->ssid_len, (char *)VAR_15->ssid, VAR_15->bssid);

 if (!FUNC_9(VAR_16))
  FUNC_3(VAR_16->wdev.wiphy, 0);

 VAR_18 = FUNC_5(VAR_16, VAR_15->ssid_len, VAR_15->ssid, VAR_15->bssid,
         VAR_16->bss_mode, VAR_15->channel, VAR_15, 0);
 if (!VAR_18) {
  FUNC_2(VAR_16->netdev, VAR_16->cfg_bssid, ((void*)0), 0,
     ((void*)0), 0, VAR_11,
     VAR_4);
  FUNC_6(VAR_16->adapter, VAR_6,
       "info: associated to bssid %pM successfully\n",
       VAR_16->cfg_bssid);
  if (FUNC_1(VAR_16->adapter->fw_cap_info) &&
      VAR_16->adapter->auto_tdls &&
      VAR_16->bss_type == VAR_8)
   FUNC_8(VAR_16);
 } else {
  FUNC_6(VAR_16->adapter, VAR_3,
       "info: association to bssid %pM failed\n",
       VAR_16->cfg_bssid);
  FUNC_4(VAR_16->cfg_bssid);

  if (VAR_18 > 0)
   FUNC_2(VAR_16->netdev, VAR_16->cfg_bssid,
      ((void*)0), 0, ((void*)0), 0, VAR_18,
      VAR_4);
  else
   FUNC_2(VAR_16->netdev, VAR_16->cfg_bssid,
      ((void*)0), 0, ((void*)0), 0,
      VAR_12,
      VAR_4);
 }

 return 0;
}
