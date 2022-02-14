
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlcore_cmd_cac_start {int bandwidth; int band; int channel; int role_id; } ;
struct wl12xx_vif {scalar_t__ band; int channel_type; int channel; int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wlcore_cmd_cac_start*) ;
 struct wlcore_cmd_cac_start* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wlcore_cmd_cac_start*,int,int ) ;
 int FUNC_3 (int ,char*,int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct wl1271 *VAR_7, struct wl12xx_vif *VAR_8, bool VAR_9)
{
 struct wlcore_cmd_cac_start *VAR_10;
 int VAR_11 = 0;

 FUNC_3(VAR_2, "cmd cac (channel %d) %s",
       VAR_8->channel, VAR_9 ? "start" : "stop");

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->role_id = VAR_8->role_id;
 VAR_10->channel = VAR_8->channel;
 if (VAR_8->band == VAR_5)
  VAR_10->band = VAR_6;
 VAR_10->bandwidth = FUNC_5(VAR_8->channel_type);

 VAR_11 = FUNC_2(VAR_7,
         VAR_9 ? VAR_0 : VAR_1,
         VAR_10, sizeof(*VAR_10), 0);
 if (VAR_11 < 0) {
  FUNC_4("failed to send cac command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_10);
 return VAR_11;
}
