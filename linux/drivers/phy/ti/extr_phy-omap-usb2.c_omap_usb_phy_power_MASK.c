
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_usb {int mask; int power_reg; int syscon_phy_power; int power_off; int power_on; int control_dev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct omap_usb *VAR_0, int VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 if (!VAR_0->syscon_phy_power) {
  FUNC_0(VAR_0->control_dev, VAR_1);
  return 0;
 }

 if (VAR_1)
  VAR_2 = VAR_0->power_on;
 else
  VAR_2 = VAR_0->power_off;

 VAR_3 = FUNC_1(VAR_0->syscon_phy_power, VAR_0->power_reg,
     VAR_0->mask, VAR_2);
 return VAR_3;
}
