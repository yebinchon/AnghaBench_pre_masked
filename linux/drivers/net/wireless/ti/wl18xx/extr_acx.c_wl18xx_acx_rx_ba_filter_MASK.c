
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wl18xx_acx_rx_ba_filter {scalar_t__ enable; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl18xx_acx_rx_ba_filter*) ;
 struct wl18xx_acx_rx_ba_filter* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl18xx_acx_rx_ba_filter*,int) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(struct wl1271 *VAR_3, bool VAR_4)
{
 struct wl18xx_acx_rx_ba_filter *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_5->enable = (u32)VAR_4;
 VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_3("acx rx ba activity filter setting failed: %d",
          VAR_6);
  goto out;
 }

out:
 FUNC_0(VAR_5);
 return VAR_6;
}
