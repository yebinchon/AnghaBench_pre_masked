
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_rx_timeout {int upsd_timeout; int ps_poll_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct acx_rx_timeout*) ;
 struct acx_rx_timeout* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_rx_timeout*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_6)
{
 struct acx_rx_timeout *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_3(VAR_1, "acx service period timeout");

 VAR_7->ps_poll_timeout = VAR_4;
 VAR_7->upsd_timeout = VAR_5;

 VAR_8 = FUNC_2(VAR_6, VAR_0,
       VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("failed to set service period timeout: %d",
          VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
