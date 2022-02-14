
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {int chipco; } ;
struct gpio_chip {int dummy; } ;


 struct ssb_bus* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0,
         unsigned int VAR_1, int VAR_2)
{
 struct ssb_bus *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(&VAR_3->chipco, 1 << VAR_1, 1 << VAR_1);
 FUNC_1(&VAR_3->chipco, 1 << VAR_1, VAR_2 ? 1 << VAR_1 : 0);
 return 0;
}
