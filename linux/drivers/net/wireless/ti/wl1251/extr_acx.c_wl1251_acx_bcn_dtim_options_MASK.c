
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_beacon_broadcast {int ps_poll_threshold; int rx_broadcast_in_ps; int broadcast_timeout; int beacon_rx_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct acx_beacon_broadcast*) ;
 struct acx_beacon_broadcast* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_beacon_broadcast*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_8)
{
 struct acx_beacon_broadcast *VAR_9;
 int VAR_10;

 FUNC_3(VAR_4, "acx bcn dtim options");

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_6);
 if (!VAR_9)
  return -VAR_5;

 VAR_9->beacon_rx_timeout = VAR_1;
 VAR_9->broadcast_timeout = VAR_2;
 VAR_9->rx_broadcast_in_ps = VAR_7;
 VAR_9->ps_poll_threshold = VAR_3;

 VAR_10 = FUNC_2(VAR_8, VAR_0, VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0) {
  FUNC_4("failed to set rx config: %d", VAR_10);
  goto out;
 }

out:
 FUNC_0(VAR_9);
 return VAR_10;
}
