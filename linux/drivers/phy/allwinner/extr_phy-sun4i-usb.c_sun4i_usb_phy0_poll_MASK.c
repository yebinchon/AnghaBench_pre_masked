
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun4i_usb_phy_data {scalar_t__ id_det_irq; scalar_t__ vbus_det_irq; TYPE_1__* phys; scalar_t__ vbus_power_supply; TYPE_2__* cfg; scalar_t__ vbus_det_gpio; scalar_t__ id_det_gpio; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ regulator_on; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct sun4i_usb_phy_data *VAR_2)
{
 if ((VAR_2->id_det_gpio && VAR_2->id_det_irq <= 0) ||
     (VAR_2->vbus_det_gpio && VAR_2->vbus_det_irq <= 0))
  return 1;







 if ((VAR_2->cfg->type == VAR_0 ||
      VAR_2->cfg->type == VAR_1) &&
     VAR_2->vbus_power_supply && VAR_2->phys[0].regulator_on)
  return 1;

 return 0;
}
