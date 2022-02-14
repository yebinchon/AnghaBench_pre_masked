
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_gpio {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct iproc_gpio* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct iproc_gpio *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4 = FUNC_1(VAR_2,
           VAR_0);
 unsigned int VAR_5 = FUNC_2(VAR_2);

 return !!(FUNC_4(VAR_3->base + VAR_4) & FUNC_0(VAR_5));
}
