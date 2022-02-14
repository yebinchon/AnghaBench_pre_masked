
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_gpio_bank {scalar_t__ base; } ;


 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct st_gpio_bank *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;
 for (VAR_4 = 0; VAR_4 <= 2; VAR_4++) {
  if (VAR_2 & FUNC_0(VAR_4))
   FUNC_4(FUNC_0(VAR_3), VAR_0->base + FUNC_2(VAR_4));
  else
   FUNC_4(FUNC_0(VAR_3), VAR_0->base + FUNC_1(VAR_4));
 }
}
