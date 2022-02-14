
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_gpio_bank {int clk; scalar_t__ base; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct stm32_gpio_bank*,unsigned int,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct stm32_gpio_bank *VAR_2,
 unsigned VAR_3, int VAR_4)
{
 FUNC_3(VAR_2, VAR_3, VAR_4);

 if (!VAR_4)
  VAR_3 += VAR_1;

 FUNC_2(VAR_2->clk);

 FUNC_4(FUNC_0(VAR_3), VAR_2->base + VAR_0);

 FUNC_1(VAR_2->clk);
}
