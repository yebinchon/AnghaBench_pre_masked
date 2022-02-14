
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int name; } ;
struct bcm2835_power_domain {int clk; TYPE_1__ base; struct bcm2835_power* power; } ;
struct bcm2835_power {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct bcm2835_power*,int) ;
 int FUNC_3 (struct bcm2835_power*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct bcm2835_power_domain *VAR_0,
    u32 VAR_1,
    u32 VAR_2,
    u32 VAR_3,
    u32 VAR_4)
{
 struct bcm2835_power *VAR_5 = VAR_0->power;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_0->clk);
 if (VAR_6) {
  FUNC_6(VAR_5->dev, "Failed to enable clock for %s\n",
   VAR_0->base.name);
  return VAR_6;
 }


 FUNC_7(1);

 FUNC_4(VAR_0->clk);


 FUNC_1(VAR_1, FUNC_0(VAR_1) | VAR_4);

 VAR_6 = FUNC_5(VAR_0->clk);
 if (VAR_6) {
  FUNC_6(VAR_5->dev, "Failed to enable clock for %s\n",
   VAR_0->base.name);
  goto err_enable_resets;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (VAR_6) {
  FUNC_6(VAR_5->dev, "Failed to enable ASB master for %s\n",
   VAR_0->base.name);
  goto err_disable_clk;
 }
 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (VAR_6) {
  FUNC_6(VAR_5->dev, "Failed to enable ASB slave for %s\n",
   VAR_0->base.name);
  goto err_disable_asb_master;
 }

 return 0;

err_disable_asb_master:
 FUNC_2(VAR_5, VAR_2);
err_disable_clk:
 FUNC_4(VAR_0->clk);
err_enable_resets:
 FUNC_1(VAR_1, FUNC_0(VAR_1) & ~VAR_4);
 return VAR_6;
}
