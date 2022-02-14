
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_rx_filter {int dummy; } ;
struct wl1271 {int dummy; } ;
struct cfg80211_wowlan {int n_patterns; struct cfg80211_pkt_pattern* patterns; scalar_t__ any; } ;
struct cfg80211_pkt_pattern {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct wl1271*,int,int ) ;
 int FUNC_2 (struct cfg80211_pkt_pattern*,struct wl12xx_rx_filter**) ;
 int FUNC_3 (struct wl1271*) ;
 int FUNC_4 (struct wl1271*,int,int,struct wl12xx_rx_filter*) ;
 int FUNC_5 (struct wl12xx_rx_filter*) ;
 int FUNC_6 (struct cfg80211_pkt_pattern*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(struct wl1271 *VAR_4,
       struct cfg80211_wowlan *VAR_5)
{
 int VAR_6, VAR_7;

 if (!VAR_5 || VAR_5->any || !VAR_5->n_patterns) {
  VAR_7 = FUNC_1(VAR_4, 0,
         VAR_2);
  if (VAR_7)
   goto out;

  VAR_7 = FUNC_3(VAR_4);
  if (VAR_7)
   goto out;

  return 0;
 }

 if (FUNC_0(VAR_5->n_patterns > VAR_3))
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_5->n_patterns; VAR_6++) {
  VAR_7 = FUNC_6(&VAR_5->patterns[VAR_6]);
  if (VAR_7) {
   FUNC_7("Bad wowlan pattern %d", VAR_6);
   return VAR_7;
  }
 }

 VAR_7 = FUNC_1(VAR_4, 0, VAR_2);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  goto out;


 for (VAR_6 = 0; VAR_6 < VAR_5->n_patterns; VAR_6++) {
  struct cfg80211_pkt_pattern *VAR_8;
  struct wl12xx_rx_filter *VAR_9 = ((void*)0);

  VAR_8 = &VAR_5->patterns[VAR_6];

  VAR_7 = FUNC_2(VAR_8, &VAR_9);
  if (VAR_7) {
   FUNC_7("Failed to create an RX filter from "
           "wowlan pattern %d", VAR_6);
   goto out;
  }

  VAR_7 = FUNC_4(VAR_4, VAR_6, 1, VAR_9);

  FUNC_5(VAR_9);
  if (VAR_7)
   goto out;
 }

 VAR_7 = FUNC_1(VAR_4, 1, VAR_1);

out:
 return VAR_7;
}
