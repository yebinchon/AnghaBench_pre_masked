
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_udc {int pullup; int pullup_job; } ;


 int FUNC_0 (struct lpc32xx_udc*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lpc32xx_udc *VAR_0, int VAR_1,
      int VAR_2)
{
 if (VAR_1 == VAR_0->pullup)
  return;

 VAR_0->pullup = VAR_1;
 if (VAR_2)
  FUNC_0(VAR_0);
 else

  FUNC_1(&VAR_0->pullup_job);
}
