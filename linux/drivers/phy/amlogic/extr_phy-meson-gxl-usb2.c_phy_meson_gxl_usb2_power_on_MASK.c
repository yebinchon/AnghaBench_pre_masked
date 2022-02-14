
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_gxl_usb2_priv {int is_enabled; int mode; int regmap; } ;
struct phy {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 struct phy_meson_gxl_usb2_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy*) ;
 int FUNC_3 (struct phy*,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_2)
{
 struct phy_meson_gxl_usb2_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_3->is_enabled = 1;


 FUNC_4(VAR_3->regmap, VAR_0, VAR_1, 0);

 VAR_4 = FUNC_3(VAR_2, VAR_3->mode, 0);
 if (VAR_4) {
  FUNC_2(VAR_2);

  FUNC_0(&VAR_2->dev, "Failed to initialize PHY with mode %d\n",
   VAR_3->mode);
  return VAR_4;
 }

 return 0;
}
