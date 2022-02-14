
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc6393xb {scalar_t__ scr; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct tc6393xb* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0,
  unsigned VAR_1)
{
 struct tc6393xb *VAR_2 = FUNC_2(VAR_0);


 return !!(FUNC_3(VAR_2->scr + FUNC_0(VAR_1 / 8))
    & FUNC_1(VAR_1));
}
