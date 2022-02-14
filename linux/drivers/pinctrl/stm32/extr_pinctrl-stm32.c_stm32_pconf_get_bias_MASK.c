
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct stm32_gpio_bank {int clk; int lock; scalar_t__ base; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_6(struct stm32_gpio_bank *VAR_1,
 unsigned int VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_2(VAR_1->clk);
 FUNC_4(&VAR_1->lock, VAR_3);

 VAR_4 = FUNC_3(VAR_1->base + VAR_0);
 VAR_4 &= FUNC_0(VAR_2 * 2 + 1, VAR_2 * 2);

 FUNC_5(&VAR_1->lock, VAR_3);
 FUNC_1(VAR_1->clk);

 return (VAR_4 >> (VAR_2 * 2));
}
