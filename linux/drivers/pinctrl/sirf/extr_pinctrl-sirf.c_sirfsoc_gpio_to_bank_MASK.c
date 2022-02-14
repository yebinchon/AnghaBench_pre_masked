
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_gpio_chip {struct sirfsoc_gpio_bank* sgpio_bank; } ;
struct sirfsoc_gpio_bank {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline struct sirfsoc_gpio_bank *
FUNC_0(struct sirfsoc_gpio_chip *VAR_1, unsigned int VAR_2)
{
 return &VAR_1->sgpio_bank[VAR_2 / VAR_0];
}
