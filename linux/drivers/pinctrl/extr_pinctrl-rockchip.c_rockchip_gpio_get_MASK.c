
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct rockchip_pin_bank {int clk; scalar_t__ reg_base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rockchip_pin_bank* FUNC_2 (struct gpio_chip*) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct rockchip_pin_bank *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 FUNC_1(VAR_3->clk);
 VAR_4 = FUNC_3(VAR_3->reg_base + VAR_0);
 FUNC_0(VAR_3->clk);
 VAR_4 >>= VAR_2;
 VAR_4 &= 1;
 return VAR_4;
}
