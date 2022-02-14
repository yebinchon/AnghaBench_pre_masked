
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_usb_phy_data {int detect; scalar_t__ vbus_det; } ;
struct sun4i_usb_phy {int regulator_on; scalar_t__ index; int vbus; } ;
struct phy {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 struct sun4i_usb_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sun4i_usb_phy_data*) ;
 scalar_t__ FUNC_5 (struct sun4i_usb_phy_data*) ;
 int VAR_1 ;
 struct sun4i_usb_phy_data* FUNC_6 (struct sun4i_usb_phy*) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_2)
{
 struct sun4i_usb_phy *VAR_3 = FUNC_2(VAR_2);
 struct sun4i_usb_phy_data *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 if (!VAR_3->vbus || VAR_3->regulator_on)
  return 0;


 if (VAR_3->index == 0 && FUNC_4(VAR_4) &&
    VAR_4->vbus_det) {
  FUNC_0(&VAR_2->dev, "External vbus detected, not enabling our own vbus\n");
  return 0;
 }

 VAR_5 = FUNC_3(VAR_3->vbus);
 if (VAR_5)
  return VAR_5;

 VAR_3->regulator_on = 1;


 if (VAR_3->index == 0 && FUNC_5(VAR_4))
  FUNC_1(VAR_1, &VAR_4->detect, VAR_0);

 return 0;
}
