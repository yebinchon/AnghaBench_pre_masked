
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {int chipco; } ;
struct gpio_chip {int dummy; } ;


 struct ssb_bus* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct ssb_bus *VAR_2 = FUNC_0(VAR_0);

 return !!FUNC_1(&VAR_2->chipco, 1 << VAR_1);
}
