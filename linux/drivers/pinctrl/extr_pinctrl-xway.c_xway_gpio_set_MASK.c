
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltq_pinmux_info {int * membase; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct ltq_pinmux_info* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_0, unsigned int VAR_1, int VAR_2)
{
 struct ltq_pinmux_info *VAR_3 = FUNC_2(VAR_0->parent);

 if (VAR_2)
  FUNC_4(VAR_3->membase[0], FUNC_0(VAR_1), FUNC_1(VAR_1));
 else
  FUNC_3(VAR_3->membase[0], FUNC_0(VAR_1), FUNC_1(VAR_1));
}
