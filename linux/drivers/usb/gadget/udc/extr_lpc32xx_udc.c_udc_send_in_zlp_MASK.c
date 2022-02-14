
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_udc {int dummy; } ;
struct lpc32xx_ep {int hwep_num; } ;


 int FUNC_0 (struct lpc32xx_udc*,int ) ;
 int FUNC_1 (struct lpc32xx_udc*,int ,int *,int ) ;

void FUNC_2(struct lpc32xx_udc *VAR_0, struct lpc32xx_ep *VAR_1)
{

 FUNC_0(VAR_0, VAR_1->hwep_num);


 FUNC_1(VAR_0, VAR_1->hwep_num, ((void*)0), 0);
}
