
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stm32_gpio_bank {size_t* pin_backup; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct stm32_gpio_bank *VAR_2, u32 VAR_3,
       u32 VAR_4)
{
 VAR_2->pin_backup[VAR_3] &= ~VAR_0;
 VAR_2->pin_backup[VAR_3] |= VAR_4 << VAR_1;
}
