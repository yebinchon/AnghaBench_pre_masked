
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_usb_phy_data {scalar_t__ id_det_irq; scalar_t__ vbus_det_irq; int detect; int vbus_power_nb; scalar_t__ vbus_power_nb_registered; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int *) ;
 struct sun4i_usb_phy_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,scalar_t__,struct sun4i_usb_phy_data*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct sun4i_usb_phy_data *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->vbus_power_nb_registered)
  FUNC_3(&VAR_2->vbus_power_nb);
 if (VAR_2->id_det_irq > 0)
  FUNC_2(VAR_1, VAR_2->id_det_irq, VAR_2);
 if (VAR_2->vbus_det_irq > 0)
  FUNC_2(VAR_1, VAR_2->vbus_det_irq, VAR_2);

 FUNC_0(&VAR_2->detect);

 return 0;
}
