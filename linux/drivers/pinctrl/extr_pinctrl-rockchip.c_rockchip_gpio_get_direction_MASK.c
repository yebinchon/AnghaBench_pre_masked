
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_pin_bank {int clk; scalar_t__ reg_base; int name; TYPE_1__* drvdata; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 struct rockchip_pin_bank* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct rockchip_pin_bank *VAR_3 = FUNC_4(VAR_1);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->clk);
 if (VAR_5 < 0) {
  FUNC_3(VAR_3->drvdata->dev,
   "failed to enable clock for bank %s\n", VAR_3->name);
  return VAR_5;
 }
 VAR_4 = FUNC_5(VAR_3->reg_base + VAR_0);
 FUNC_1(VAR_3->clk);

 return !(VAR_4 & FUNC_0(VAR_2));
}
