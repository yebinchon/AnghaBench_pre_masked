
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl18xx_acx_checksum_state {int checksum_state; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wl18xx_acx_checksum_state*) ;
 struct wl18xx_acx_checksum_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl18xx_acx_checksum_state*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_5)
{
 struct wl18xx_acx_checksum_state *VAR_6;
 int VAR_7;

 FUNC_3(VAR_2, "acx checksum state");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_4);
 if (!VAR_6) {
  VAR_7 = -VAR_3;
  goto out;
 }

 VAR_6->checksum_state = VAR_1;

 VAR_7 = FUNC_2(VAR_5, VAR_0, VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("failed to set Tx checksum state: %d", VAR_7);
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
