
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_usb_phy_data {int detect; } ;
struct sun4i_usb_phy {int regulator_on; scalar_t__ index; int vbus; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 struct sun4i_usb_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sun4i_usb_phy_data*) ;
 int VAR_1 ;
 struct sun4i_usb_phy_data* FUNC_4 (struct sun4i_usb_phy*) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_2)
{
 struct sun4i_usb_phy *VAR_3 = FUNC_1(VAR_2);
 struct sun4i_usb_phy_data *VAR_4 = FUNC_4(VAR_3);

 if (!VAR_3->vbus || !VAR_3->regulator_on)
  return 0;

 FUNC_2(VAR_3->vbus);
 VAR_3->regulator_on = 0;





 if (VAR_3->index == 0 && !FUNC_3(VAR_4))
  FUNC_0(VAR_1, &VAR_4->detect, VAR_0);

 return 0;
}
