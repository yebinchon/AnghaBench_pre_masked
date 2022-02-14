
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

int FUNC_4(struct nand_chip *VAR_2, struct gpio_desc *VAR_3,
        unsigned long VAR_4)
{

 VAR_4 = VAR_1 + FUNC_2(VAR_4);
 do {
  if (FUNC_1(VAR_3))
   return 0;

  FUNC_0();
 } while (FUNC_3(VAR_1, VAR_4));

 return FUNC_1(VAR_3) ? 0 : -VAR_0;
}
