
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {scalar_t__ base; int parent; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 FUNC_0(VAR_0->parent, "gpio_free: offset%d\n", VAR_1);
 FUNC_1(VAR_1 + VAR_0->base);
}
