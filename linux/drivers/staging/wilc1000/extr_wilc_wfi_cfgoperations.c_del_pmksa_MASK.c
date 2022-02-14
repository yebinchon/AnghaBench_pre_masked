
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct wiphy {int dummy; } ;
struct TYPE_3__ {size_t numpmkid; TYPE_2__* pmkidlist; } ;
struct wilc_priv {TYPE_1__ pmkid_list; } ;
struct wilc_vif {struct wilc_priv priv; } ;
struct wilc_pmkid {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_pmksa {int bssid; } ;
struct TYPE_4__ {int pmkid; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 struct wilc_vif* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_3, struct net_device *VAR_4,
       struct cfg80211_pmksa *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;
 struct wilc_vif *VAR_8 = FUNC_3(VAR_4);
 struct wilc_priv *VAR_9 = &VAR_8->priv;

 for (VAR_6 = 0; VAR_6 < VAR_9->pmkid_list.numpmkid; VAR_6++) {
  if (!FUNC_0(VAR_5->bssid, VAR_9->pmkid_list.pmkidlist[VAR_6].bssid,
       VAR_1)) {
   FUNC_2(&VAR_9->pmkid_list.pmkidlist[VAR_6], 0,
          sizeof(struct wilc_pmkid));
   break;
  }
 }

 if (VAR_6 < VAR_9->pmkid_list.numpmkid && VAR_9->pmkid_list.numpmkid > 0) {
  for (; VAR_6 < (VAR_9->pmkid_list.numpmkid - 1); VAR_6++) {
   FUNC_1(VAR_9->pmkid_list.pmkidlist[VAR_6].bssid,
          VAR_9->pmkid_list.pmkidlist[VAR_6 + 1].bssid,
          VAR_1);
   FUNC_1(VAR_9->pmkid_list.pmkidlist[VAR_6].pmkid,
          VAR_9->pmkid_list.pmkidlist[VAR_6 + 1].pmkid,
          VAR_2);
  }
  VAR_9->pmkid_list.numpmkid--;
 } else {
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
