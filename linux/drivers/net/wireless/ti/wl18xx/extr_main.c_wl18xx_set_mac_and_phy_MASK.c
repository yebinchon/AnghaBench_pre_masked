
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy; } ;
struct wl18xx_priv {TYPE_1__ conf; } ;
struct wl18xx_mac_and_phy_params {int dummy; } ;
struct wl1271 {int * ptable; struct wl18xx_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl18xx_mac_and_phy_params*) ;
 struct wl18xx_mac_and_phy_params* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct wl1271*,int *) ;
 int FUNC_3 (struct wl1271*,int ,struct wl18xx_mac_and_phy_params*,int,int) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_4)
{
 struct wl18xx_priv *VAR_5 = VAR_4->priv;
 struct wl18xx_mac_and_phy_params *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(&VAR_5->conf.phy, sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_2(VAR_4, &VAR_4->ptable[VAR_2]);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_6,
      sizeof(*VAR_6), 0);

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
