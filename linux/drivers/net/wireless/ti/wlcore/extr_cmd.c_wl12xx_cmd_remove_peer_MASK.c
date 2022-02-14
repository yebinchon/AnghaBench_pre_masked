
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl12xx_vif {int role_id; } ;
struct wl12xx_cmd_remove_peer {int role_id; scalar_t__ send_deauth_flag; scalar_t__ reason_opcode; scalar_t__ hlid; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* wait_for_event ) (struct wl1271*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wl12xx_cmd_remove_peer*) ;
 struct wl12xx_cmd_remove_peer* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,int*) ;
 int FUNC_3 (struct wl1271*,int ,struct wl12xx_cmd_remove_peer*,int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct wl1271*) ;

int FUNC_7(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6,
      u8 VAR_7)
{
 struct wl12xx_cmd_remove_peer *VAR_8;
 int VAR_9;
 bool VAR_10 = 0;

 FUNC_4(VAR_1, "cmd remove peer %d", (int)VAR_7);

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_8->hlid = VAR_7;

 VAR_8->reason_opcode = 0;
 VAR_8->send_deauth_flag = 0;
 VAR_8->role_id = VAR_6->role_id;

 VAR_9 = FUNC_3(VAR_5, VAR_0, VAR_8, sizeof(*VAR_8), 0);
 if (VAR_9 < 0) {
  FUNC_5("failed to initiate cmd remove peer");
  goto out_free;
 }

 VAR_9 = VAR_5->ops->wait_for_event(VAR_5,
          VAR_4,
          &VAR_10);






 if (VAR_9)
  FUNC_6(VAR_5);

out_free:
 FUNC_0(VAR_8);

out:
 return VAR_9;
}
