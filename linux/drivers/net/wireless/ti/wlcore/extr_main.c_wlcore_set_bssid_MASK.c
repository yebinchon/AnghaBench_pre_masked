
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wl12xx_vif {int flags; int band; void* rate_set; void* basic_rate_set; int basic_rate; int beacon_int; } ;
struct wl1271 {TYPE_1__* ops; struct wl12xx_vif* sched_vif; } ;
struct ieee80211_bss_conf {scalar_t__ basic_rates; int beacon_int; int aid; int bssid; } ;
struct TYPE_2__ {int (* sched_scan_stop ) (struct wl1271*,struct wl12xx_vif*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_3 (struct wl1271*,int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ,scalar_t__,scalar_t__) ;
 void* FUNC_5 (struct wl1271*,scalar_t__,int ) ;
 int FUNC_6 (struct wl1271*,void*) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_8 (struct wl12xx_vif*) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static int FUNC_10(struct wl1271 *VAR_2, struct wl12xx_vif *VAR_3,
       struct ieee80211_bss_conf *VAR_4,
       u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 FUNC_4(VAR_0,
      "changed_bssid: %pM, aid: %d, bcn_int: %d, brates: 0x%x sta_rate_set: 0x%x",
      VAR_4->bssid, VAR_4->aid,
      VAR_4->beacon_int,
      VAR_4->basic_rates, VAR_5);

 VAR_3->beacon_int = VAR_4->beacon_int;
 VAR_6 = VAR_4->basic_rates;
 VAR_3->basic_rate_set =
  FUNC_5(VAR_2, VAR_6,
         VAR_3->band);
 VAR_3->basic_rate =
  FUNC_6(VAR_2,
           VAR_3->basic_rate_set);

 if (VAR_5)
  VAR_3->rate_set =
   FUNC_5(VAR_2,
      VAR_5,
      VAR_3->band);


 if (VAR_2->sched_vif == VAR_3)
  VAR_2->ops->sched_scan_stop(VAR_2, VAR_3);

 VAR_7 = FUNC_2(VAR_2, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_7(VAR_2, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_2, FUNC_8(VAR_3));
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_9(VAR_2, VAR_3);

 FUNC_0(VAR_1, &VAR_3->flags);

 return 0;
}
