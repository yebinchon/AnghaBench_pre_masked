
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {scalar_t__ base; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1,
           int VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 return FUNC_1(VAR_0->base + VAR_1);
}
