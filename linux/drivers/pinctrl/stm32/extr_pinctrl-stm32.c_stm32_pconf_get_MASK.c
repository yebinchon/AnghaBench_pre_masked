
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_gpio_bank {int clk; int lock; scalar_t__ base; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_6(struct stm32_gpio_bank *VAR_2,
 unsigned int VAR_3, bool VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(VAR_2->clk);
 FUNC_4(&VAR_2->lock, VAR_5);

 if (VAR_4)
  VAR_6 = !!(FUNC_3(VAR_2->base + VAR_0) &
    FUNC_0(VAR_3));
 else
  VAR_6 = !!(FUNC_3(VAR_2->base + VAR_1) &
    FUNC_0(VAR_3));

 FUNC_5(&VAR_2->lock, VAR_5);
 FUNC_1(VAR_2->clk);

 return VAR_6;
}
