
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {int * sta_hlid_map; } ;
struct wl12xx_vif {scalar_t__ bss_type; TYPE_1__ ap; } ;
struct wl1271 {int ap_ps_map; TYPE_2__* links; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {int addr; int allocated_pkts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (size_t,int *) ;
 struct ieee80211_sta* FUNC_2 (struct ieee80211_vif*,int ) ;
 int FUNC_3 (struct ieee80211_sta*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (size_t,int *) ;
 int FUNC_7 (int ,char*,size_t,int ,int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct wl1271*,size_t) ;
 struct ieee80211_vif* FUNC_10 (struct wl12xx_vif*) ;

void FUNC_11(struct wl1271 *VAR_2, struct wl12xx_vif *VAR_3,
     u8 VAR_4, bool VAR_5)
{
 struct ieee80211_sta *VAR_6;
 struct ieee80211_vif *VAR_7 = FUNC_10(VAR_3);

 if (FUNC_0(VAR_3->bss_type != VAR_0))
  return;

 if (!FUNC_6(VAR_4, VAR_3->ap.sta_hlid_map) ||
     FUNC_6(VAR_4, &VAR_2->ap_ps_map))
  return;

 FUNC_7(VAR_1, "start mac80211 PSM on hlid %d pkts %d "
       "clean_queues %d", VAR_4, VAR_2->links[VAR_4].allocated_pkts,
       VAR_5);

 FUNC_4();
 VAR_6 = FUNC_2(VAR_7, VAR_2->links[VAR_4].addr);
 if (!VAR_6) {
  FUNC_8("could not find sta %pM for starting ps",
        VAR_2->links[VAR_4].addr);
  FUNC_5();
  return;
 }

 FUNC_3(VAR_6, 1);
 FUNC_5();


 if (VAR_5)
  FUNC_9(VAR_2, VAR_4);

 FUNC_1(VAR_4, &VAR_2->ap_ps_map);
}
