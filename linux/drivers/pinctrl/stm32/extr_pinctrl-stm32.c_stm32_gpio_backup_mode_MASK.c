
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stm32_gpio_bank {int* pin_backup; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_0(struct stm32_gpio_bank *VAR_4, u32 VAR_5,
       u32 VAR_6, u32 VAR_7)
{
 VAR_4->pin_backup[VAR_5] &= ~(VAR_2 |
          VAR_0);
 VAR_4->pin_backup[VAR_5] |= VAR_6 << VAR_3;
 VAR_4->pin_backup[VAR_5] |= VAR_7 << VAR_1;
}
