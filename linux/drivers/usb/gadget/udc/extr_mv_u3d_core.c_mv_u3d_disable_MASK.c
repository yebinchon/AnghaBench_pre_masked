
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_usb_platform_data {int (* phy_deinit ) (int ) ;} ;
struct mv_u3d {scalar_t__ active; int clk; int phy_regs; int dev; scalar_t__ clock_gating; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct mv_usb_platform_data* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mv_u3d *VAR_0)
{
 struct mv_usb_platform_data *VAR_1 = FUNC_2(VAR_0->dev);
 if (VAR_0->clock_gating && VAR_0->active) {
  FUNC_1(VAR_0->dev, "disable u3d\n");
  if (VAR_1->phy_deinit)
   VAR_1->phy_deinit(VAR_0->phy_regs);
  FUNC_0(VAR_0->clk);
  VAR_0->active = 0;
 }
}
