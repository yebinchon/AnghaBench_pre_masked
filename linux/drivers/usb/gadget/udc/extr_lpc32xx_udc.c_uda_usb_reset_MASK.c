
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int speed; } ;
struct lpc32xx_udc {struct lpc32xx_ep* ep; TYPE_1__ gadget; } ;
struct lpc32xx_ep {scalar_t__ req_pending; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpc32xx_udc*) ;

__attribute__((used)) static void FUNC_1(struct lpc32xx_udc *VAR_2)
{
 u32 VAR_3 = 0;

 FUNC_0(VAR_2);
 VAR_2->gadget.speed = VAR_1;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  struct lpc32xx_ep *VAR_4 = &VAR_2->ep[VAR_3];
  VAR_4->req_pending = 0;
 }
}
