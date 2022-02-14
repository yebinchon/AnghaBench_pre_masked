
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct samsung_usb2_phy_instance {struct samsung_usb2_phy_driver* drv; } ;
struct samsung_usb2_phy_driver {int ref_reg_val; scalar_t__ reg_phy; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ has_refclk_sel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct samsung_usb2_phy_instance *VAR_5)
{
 struct samsung_usb2_phy_driver *VAR_6 = VAR_5->drv;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->reg_phy + VAR_1);
 VAR_7 &= ~VAR_3;

 if (VAR_6->cfg->has_refclk_sel)
  VAR_7 = VAR_0;

 VAR_7 |= VAR_6->ref_reg_val << VAR_4;
 VAR_7 |= VAR_2;
 FUNC_1(VAR_7, VAR_6->reg_phy + VAR_1);
}
