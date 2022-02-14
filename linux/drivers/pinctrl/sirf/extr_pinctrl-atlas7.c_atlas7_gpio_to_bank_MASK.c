
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atlas7_gpio_chip {struct atlas7_gpio_bank* banks; } ;
struct atlas7_gpio_bank {int dummy; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline struct
atlas7_gpio_bank *FUNC_1(struct atlas7_gpio_chip *VAR_0, u32 VAR_1)
{
 return &VAR_0->banks[FUNC_0(VAR_1)];
}
