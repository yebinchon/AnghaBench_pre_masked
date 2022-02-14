
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u300_gpio {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 struct u300_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct u300_gpio *VAR_3 = FUNC_2(VAR_1);

 return !!(FUNC_3(FUNC_1(VAR_2, VAR_0)) & FUNC_0(VAR_2));
}
