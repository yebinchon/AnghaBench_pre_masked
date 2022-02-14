
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {scalar_t__ bss_mode; int adapter; int cfg_bssid; int netdev; } ;
struct TYPE_2__ {int chan; } ;
struct cfg80211_ibss_params {TYPE_1__ chandef; int privacy; int bssid; scalar_t__ ssid; int ssid_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mwifiex_private*,int ,scalar_t__,int ,scalar_t__,int ,int *,int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 struct mwifiex_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mwifiex_private*,struct cfg80211_ibss_params*) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_4, struct net_device *VAR_5,
      struct cfg80211_ibss_params *VAR_6)
{
 struct mwifiex_private *VAR_7 = FUNC_3(VAR_5);
 int VAR_8 = 0;

 if (VAR_7->bss_mode != VAR_3) {
  FUNC_2(VAR_7->adapter, VAR_0,
       "request to join ibss received\t"
       "when station is not in ibss mode\n");
  goto done;
 }

 FUNC_2(VAR_7->adapter, VAR_2,
      "info: trying to join to %.*s and bssid %pM\n",
      VAR_6->ssid_len, (char *)VAR_6->ssid, VAR_6->bssid);

 FUNC_4(VAR_7, VAR_6);

 VAR_8 = FUNC_1(VAR_7, VAR_6->ssid_len, VAR_6->ssid,
         VAR_6->bssid, VAR_7->bss_mode,
         VAR_6->chandef.chan, ((void*)0),
         VAR_6->privacy);
done:
 if (!VAR_8) {
  FUNC_0(VAR_7->netdev, VAR_7->cfg_bssid,
         VAR_6->chandef.chan, VAR_1);
  FUNC_2(VAR_7->adapter, VAR_2,
       "info: joined/created adhoc network with bssid\t"
       "%pM successfully\n", VAR_7->cfg_bssid);
 } else {
  FUNC_2(VAR_7->adapter, VAR_0,
       "info: failed creating/joining adhoc network\n");
 }

 return VAR_8;
}
