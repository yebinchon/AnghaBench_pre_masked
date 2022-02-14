
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int * bands; } ;
struct TYPE_2__ {int iftype; } ;
struct qtnf_vif {int mac; TYPE_1__ wdev; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 struct wiphy* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qtnf_vif*,int,int,int *,int ) ;

int FUNC_3(struct qtnf_vif *VAR_2,
       enum nl80211_iftype VAR_3,
       int VAR_4,
       u8 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_1);


 if (VAR_6 == 0 && VAR_2->wdev.iftype != VAR_3) {
  enum nl80211_band VAR_7;
  struct wiphy *VAR_8 = FUNC_0(VAR_2->mac);

  for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
   if (!VAR_8->bands[VAR_7])
    continue;

   FUNC_1(VAR_2->mac, VAR_8->bands[VAR_7]);
  }
 }

 return VAR_6;
}
