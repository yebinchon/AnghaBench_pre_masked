
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_udc {scalar_t__ ep0state; struct lpc32xx_ep* ep; } ;
struct lpc32xx_ep {int totalints; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct lpc32xx_ep*,int ) ;
 int FUNC_1 (struct lpc32xx_udc*,int ) ;
 int FUNC_2 (struct lpc32xx_udc*,int ) ;
 int FUNC_3 (struct lpc32xx_udc*) ;

__attribute__((used)) static void FUNC_4(struct lpc32xx_udc *VAR_6)
{
 struct lpc32xx_ep *VAR_7 = &VAR_6->ep[0];
 u32 VAR_8;


 VAR_8 = FUNC_1(VAR_6, VAR_2);






 if (VAR_8 & VAR_4) {
  FUNC_2(VAR_6, VAR_2);
  FUNC_0(VAR_7, -VAR_1);
  VAR_6->ep0state = VAR_5;
  return;
 }


 if (!(VAR_8 & VAR_3)) {

  if (VAR_6->ep0state == VAR_0)
   FUNC_3(VAR_6);
  else {

   FUNC_0(VAR_7, -VAR_1);
   VAR_6->ep0state = VAR_5;
  }
 }
}
