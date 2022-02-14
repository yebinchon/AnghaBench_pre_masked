
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {size_t dev_hlid; int dev_role_id; } ;
struct TYPE_2__ {size_t hlid; int session; } ;
struct wl12xx_cmd_role_start {int channel; TYPE_1__ device; int role_id; int band; } ;
struct wl1271 {int * session_ids; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wl12xx_cmd_role_start*) ;
 struct wl12xx_cmd_role_start* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl12xx_cmd_role_start*,int,int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*,size_t*) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,size_t*) ;

__attribute__((used)) static int FUNC_7(struct wl1271 *VAR_7,
         struct wl12xx_vif *VAR_8,
         enum nl80211_band VAR_9,
         int VAR_10)
{
 struct wl12xx_cmd_role_start *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_12 = -VAR_2;
  goto out;
 }

 FUNC_3(VAR_1, "cmd role start dev %d", VAR_8->dev_role_id);

 VAR_11->role_id = VAR_8->dev_role_id;
 if (VAR_9 == VAR_4)
  VAR_11->band = VAR_6;
 VAR_11->channel = VAR_10;

 if (VAR_8->dev_hlid == VAR_5) {
  VAR_12 = FUNC_5(VAR_7, VAR_8, &VAR_8->dev_hlid);
  if (VAR_12)
   goto out_free;
 }
 VAR_11->device.hlid = VAR_8->dev_hlid;
 VAR_11->device.session = VAR_7->session_ids[VAR_8->dev_hlid];

 FUNC_3(VAR_1, "role start: roleid=%d, hlid=%d, session=%d",
       VAR_11->role_id, VAR_11->device.hlid, VAR_11->device.session);

 VAR_12 = FUNC_2(VAR_7, VAR_0, VAR_11, sizeof(*VAR_11), 0);
 if (VAR_12 < 0) {
  FUNC_4("failed to initiate cmd role enable");
  goto err_hlid;
 }

 goto out_free;

err_hlid:

 FUNC_6(VAR_7, VAR_8, &VAR_8->dev_hlid);

out_free:
 FUNC_0(VAR_11);

out:
 return VAR_12;
}
