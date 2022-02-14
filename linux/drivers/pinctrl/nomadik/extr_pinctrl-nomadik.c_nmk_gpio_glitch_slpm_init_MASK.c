
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmk_gpio_chip {scalar_t__ addr; int clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct nmk_gpio_chip** VAR_2 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned int *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct nmk_gpio_chip *VAR_5 = VAR_2[VAR_4];
  unsigned int VAR_6 = VAR_3[VAR_4];

  if (!VAR_5)
   break;

  FUNC_0(VAR_5->clk);

  VAR_3[VAR_4] = FUNC_1(VAR_5->addr + VAR_0);
  FUNC_2(VAR_6, VAR_5->addr + VAR_0);
 }
}
