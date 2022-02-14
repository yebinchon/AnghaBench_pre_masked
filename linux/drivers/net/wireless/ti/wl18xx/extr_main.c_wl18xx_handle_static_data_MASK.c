
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl18xx_static_data_priv {int phy_version; } ;
struct wl1271_static_data {scalar_t__ priv; } ;
struct TYPE_2__ {char* phy_fw_ver_str; } ;
struct wl1271 {TYPE_1__ chip; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_0,
         struct wl1271_static_data *VAR_1)
{
 struct wl18xx_static_data_priv *VAR_2 =
  (struct wl18xx_static_data_priv *) VAR_1->priv;

 FUNC_0(VAR_0->chip.phy_fw_ver_str, VAR_2->phy_version,
  sizeof(VAR_0->chip.phy_fw_ver_str));


 VAR_0->chip.phy_fw_ver_str[sizeof(VAR_0->chip.phy_fw_ver_str) - 1] = '\0';

 FUNC_1("PHY firmware version: %s", VAR_2->phy_version);

 return 0;
}
