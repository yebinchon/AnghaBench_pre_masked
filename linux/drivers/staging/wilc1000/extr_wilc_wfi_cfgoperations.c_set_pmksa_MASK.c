
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct wiphy {int dummy; } ;
struct TYPE_4__ {size_t numpmkid; TYPE_1__* pmkidlist; } ;
struct wilc_priv {TYPE_2__ pmkid_list; } ;
struct wilc_vif {struct wilc_priv priv; } ;
struct net_device {int dummy; } ;
struct cfg80211_pmksa {int pmkid; int bssid; } ;
struct TYPE_3__ {int pmkid; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct wilc_vif*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_5, struct net_device *VAR_6,
       struct cfg80211_pmksa *VAR_7)
{
 struct wilc_vif *VAR_8 = FUNC_3(VAR_6);
 struct wilc_priv *VAR_9 = &VAR_8->priv;
 u32 VAR_10;
 int VAR_11 = 0;
 u8 VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_9->pmkid_list.numpmkid; VAR_10++) {
  if (!FUNC_0(VAR_7->bssid, VAR_9->pmkid_list.pmkidlist[VAR_10].bssid,
       VAR_1)) {
   VAR_12 = VAR_2;
   break;
  }
 }
 if (VAR_10 < VAR_3) {
  FUNC_1(VAR_9->pmkid_list.pmkidlist[VAR_10].bssid, VAR_7->bssid,
         VAR_1);
  FUNC_1(VAR_9->pmkid_list.pmkidlist[VAR_10].pmkid, VAR_7->pmkid,
         VAR_4);
  if (!(VAR_12 == VAR_2))
   VAR_9->pmkid_list.numpmkid++;
 } else {
  FUNC_2(VAR_6, "Invalid PMKID index\n");
  VAR_11 = -VAR_0;
 }

 if (!VAR_11)
  VAR_11 = FUNC_4(VAR_8, &VAR_9->pmkid_list);

 return VAR_11;
}
