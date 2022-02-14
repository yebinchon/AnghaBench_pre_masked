
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltq_pinmux_info {int * membase; } ;
struct gpio_chip {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (unsigned int) ;
 struct ltq_pinmux_info* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct ltq_pinmux_info *VAR_5 = FUNC_4(VAR_2->parent);

 if (FUNC_2(VAR_3) == VAR_1)
  FUNC_5(VAR_5->membase[0], VAR_0, FUNC_3(VAR_3));
 else
  FUNC_5(VAR_5->membase[0], FUNC_1(VAR_3), FUNC_3(VAR_3));
 FUNC_5(VAR_5->membase[0], FUNC_0(VAR_3), FUNC_3(VAR_3));
 FUNC_6(VAR_2, VAR_3, VAR_4);

 return 0;
}
