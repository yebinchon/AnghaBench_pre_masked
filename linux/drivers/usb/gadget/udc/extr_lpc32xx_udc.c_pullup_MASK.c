
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_udc {int pullup; int vbus; int enabled; int clocked; } ;


 int FUNC_0 (struct lpc32xx_udc*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct lpc32xx_udc *VAR_0, int VAR_1)
{
 if (!VAR_0->clocked)
  return;

 if (!VAR_0->enabled || !VAR_0->vbus)
  VAR_1 = 0;

 if (VAR_1 != VAR_0->pullup)
  FUNC_0(VAR_0, VAR_1, 0);
}
