
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_gpio_bank {int clk; int lock; scalar_t__ base; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct stm32_gpio_bank *VAR_2, int VAR_3, u32 *VAR_4,
   u32 *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = (VAR_3 % 8) * 4;
 int VAR_8 = VAR_0 + (VAR_3 / 8) * 4;
 unsigned long VAR_9;

 FUNC_2(VAR_2->clk);
 FUNC_4(&VAR_2->lock, VAR_9);

 VAR_6 = FUNC_3(VAR_2->base + VAR_8);
 VAR_6 &= FUNC_0(VAR_7 + 3, VAR_7);
 *VAR_5 = VAR_6 >> VAR_7;

 VAR_6 = FUNC_3(VAR_2->base + VAR_1);
 VAR_6 &= FUNC_0(VAR_3 * 2 + 1, VAR_3 * 2);
 *VAR_4 = VAR_6 >> (VAR_3 * 2);

 FUNC_5(&VAR_2->lock, VAR_9);
 FUNC_1(VAR_2->clk);
}
