
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int channel; scalar_t__ bss_type; int radar_enabled; int channel_type; int band; int flags; int role_id; } ;
struct wl1271 {int dummy; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {scalar_t__ radar_enabled; TYPE_2__ def; } ;
struct TYPE_3__ {int band; int center_freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,int) ;

__attribute__((used)) static int FUNC_7(struct wl1271 *VAR_3,
        struct wl12xx_vif *VAR_4,
        struct ieee80211_chanctx_conf *VAR_5)
{
 int VAR_6 = FUNC_3(
  VAR_5->def.chan->center_freq);

 FUNC_5(VAR_1,
       "switch vif (role %d) %d -> %d chan_type: %d",
       VAR_4->role_id, VAR_4->channel, VAR_6,
       FUNC_2(&VAR_5->def));

 if (FUNC_1(VAR_4->bss_type != VAR_0))
  return 0;

 FUNC_0(!FUNC_4(VAR_2, &VAR_4->flags));

 if (VAR_4->radar_enabled) {
  FUNC_5(VAR_1, "Stop radar detection");
  FUNC_6(VAR_3, VAR_4, 0);
  VAR_4->radar_enabled = 0;
 }

 VAR_4->band = VAR_5->def.chan->band;
 VAR_4->channel = VAR_6;
 VAR_4->channel_type = FUNC_2(&VAR_5->def);


 if (VAR_5->radar_enabled) {
  FUNC_5(VAR_1, "Start radar detection");
  FUNC_6(VAR_3, VAR_4, 1);
  VAR_4->radar_enabled = 1;
 }

 return 0;
}
