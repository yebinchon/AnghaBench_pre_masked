
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_udc {int clocked; int fclk; int iclk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct at91_udc *VAR_0)
{
 if (VAR_0->clocked)
  return;
 VAR_0->clocked = 1;

 FUNC_0(VAR_0->iclk);
 FUNC_0(VAR_0->fclk);
}
