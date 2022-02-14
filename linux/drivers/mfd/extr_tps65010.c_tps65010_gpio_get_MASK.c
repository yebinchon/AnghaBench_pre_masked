
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65010 {int client; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct tps65010* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 int VAR_3;
 struct tps65010 *VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 < 4) {
  VAR_3 = FUNC_1(VAR_4->client, VAR_0);
  if (VAR_3 < 0)
   return VAR_3;
  if (VAR_3 & (1 << (VAR_2 + 4)))
   return !(VAR_3 & (1 << VAR_2));
  else
   return !!(VAR_3 & (1 << VAR_2));
 }


 return 0;
}
