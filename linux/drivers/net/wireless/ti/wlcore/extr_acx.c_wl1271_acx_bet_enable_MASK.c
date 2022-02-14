
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_bet_enable {int max_consecutive; scalar_t__ enable; int role_id; } ;
struct TYPE_3__ {scalar_t__ bet_enable; int bet_max_consecutive; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wl1271_acx_bet_enable*) ;
 struct wl1271_acx_bet_enable* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl1271_acx_bet_enable*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_6, struct wl12xx_vif *VAR_7,
     bool VAR_8)
{
 struct wl1271_acx_bet_enable *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 FUNC_3(VAR_3, "acx bet enable");

 if (VAR_8 && VAR_6->conf.conn.bet_enable == VAR_1)
  goto out;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_5);
 if (!VAR_9) {
  VAR_10 = -VAR_4;
  goto out;
 }

 VAR_9->role_id = VAR_7->role_id;
 VAR_9->enable = VAR_8 ? VAR_2 : VAR_1;
 VAR_9->max_consecutive = VAR_6->conf.conn.bet_max_consecutive;

 VAR_10 = FUNC_2(VAR_6, VAR_0, VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0) {
  FUNC_4("acx bet enable failed: %d", VAR_10);
  goto out;
 }

out:
 FUNC_0(VAR_9);
 return VAR_10;
}
