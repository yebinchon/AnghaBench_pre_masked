
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {struct net_device* mesh_dev; } ;
struct TYPE_3__ {TYPE_2__* chan; } ;
struct cfg80211_ibss_params {int ssid_len; int ssid; int bssid; TYPE_1__ chandef; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_4__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cfg80211_bss* FUNC_0 (struct wiphy*,TYPE_2__*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct wiphy*,struct cfg80211_bss*) ;
 int FUNC_2 (struct lbs_private*,struct cfg80211_ibss_params*,struct cfg80211_bss*) ;
 int FUNC_3 (struct lbs_private*,struct cfg80211_ibss_params*) ;
 int FUNC_4 (struct lbs_private*,int ) ;
 struct lbs_private* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_4, struct net_device *VAR_5,
  struct cfg80211_ibss_params *VAR_6)
{
 struct lbs_private *VAR_7 = FUNC_5(VAR_4);
 int VAR_8 = 0;
 struct cfg80211_bss *VAR_9;

 if (VAR_5 == VAR_7->mesh_dev)
  return -VAR_1;

 if (!VAR_6->chandef.chan) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_4(VAR_7, VAR_6->chandef.chan->hw_value);
 if (VAR_8)
  goto out;



 VAR_9 = FUNC_0(VAR_4, VAR_6->chandef.chan, VAR_6->bssid,
  VAR_6->ssid, VAR_6->ssid_len,
  VAR_2, VAR_3);

 if (VAR_9) {
  VAR_8 = FUNC_2(VAR_7, VAR_6, VAR_9);
  FUNC_1(VAR_4, VAR_9);
 } else
  VAR_8 = FUNC_3(VAR_7, VAR_6);


 out:
 return VAR_8;
}
