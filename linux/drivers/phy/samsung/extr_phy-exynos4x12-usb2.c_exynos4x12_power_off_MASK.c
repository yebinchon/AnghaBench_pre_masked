
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct samsung_usb2_phy_instance {TYPE_2__* cfg; int ext_cnt; struct samsung_usb2_phy_driver* drv; } ;
struct samsung_usb2_phy_driver {struct samsung_usb2_phy_instance* instances; int reg_sys; TYPE_1__* cfg; } ;
struct TYPE_4__ {size_t id; } ;
struct TYPE_3__ {scalar_t__ has_mode_switch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct samsung_usb2_phy_instance*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct samsung_usb2_phy_instance *VAR_7)
{
 struct samsung_usb2_phy_driver *VAR_8 = VAR_7->drv;

 if (VAR_7->ext_cnt-- > 1)
  return 0;

 if (VAR_7->cfg->id == VAR_0 && VAR_8->cfg->has_mode_switch)
  FUNC_1(VAR_8->reg_sys, VAR_6,
      VAR_5,
      VAR_4);

 if (VAR_7->cfg->id == VAR_1)
  FUNC_0(&VAR_8->instances[VAR_0]);

 if (VAR_7->cfg->id == VAR_2 ||
  VAR_7->cfg->id == VAR_3) {
  FUNC_0(&VAR_8->instances[VAR_0]);
  FUNC_0(&VAR_8->instances[VAR_1]);
 }

 FUNC_0(VAR_7);

 return 0;
}
