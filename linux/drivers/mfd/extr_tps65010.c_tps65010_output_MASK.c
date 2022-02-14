
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65010 {int outmask; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tps65010* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct gpio_chip *VAR_3, unsigned VAR_4, int VAR_5)
{

 if (VAR_4 < 4) {
  struct tps65010 *VAR_6;

  VAR_6 = FUNC_0(VAR_3);
  if (!(VAR_6->outmask & (1 << VAR_4)))
   return -VAR_0;
  FUNC_1(VAR_4 + 1, VAR_5);
 } else if (VAR_4 < 6)
  FUNC_2(VAR_4 - 3, VAR_5 ? VAR_2 : VAR_1);
 else
  FUNC_3(VAR_5);

 return 0;
}
