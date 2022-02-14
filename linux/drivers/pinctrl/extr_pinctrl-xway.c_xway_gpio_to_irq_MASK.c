
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltq_pinmux_info {int num_exin; unsigned int* exin; } ;
struct gpio_chip {int parent; } ;


 struct ltq_pinmux_info* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct ltq_pinmux_info *VAR_2 = FUNC_0(VAR_0->parent);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_exin; VAR_3++)
  if (VAR_2->exin[VAR_3] == VAR_1)
   return FUNC_1(VAR_3);

 return -1;
}
