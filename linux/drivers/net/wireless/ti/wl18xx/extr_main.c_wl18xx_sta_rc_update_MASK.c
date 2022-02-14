
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ role_chan_type; int hlid; } ;
struct wl12xx_vif {scalar_t__ rc_update_bw; scalar_t__ bss_type; TYPE_1__ sta; int flags; } ;
struct wl1271 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct wl12xx_vif*) ;
 int FUNC_5 (struct wl1271*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct wl1271 *VAR_6,
     struct wl12xx_vif *VAR_7)
{
 bool VAR_8 = VAR_7->rc_update_bw >= VAR_2;

 FUNC_3(VAR_1, "mac80211 sta_rc_update wide %d", VAR_8);


 if (FUNC_0(VAR_7->bss_type != VAR_0))
  return;


 if (!FUNC_2(VAR_5, &VAR_7->flags))
  return;





 if (VAR_7->sta.role_chan_type == VAR_3 ||
     VAR_7->sta.role_chan_type == VAR_4)
  FUNC_5(VAR_6, VAR_7->sta.hlid, VAR_8);
 else
  FUNC_1(FUNC_4(VAR_7));
}
