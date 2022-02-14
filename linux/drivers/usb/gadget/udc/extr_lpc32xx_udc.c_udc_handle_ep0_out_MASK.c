
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_udc {int ep0state; struct lpc32xx_ep* ep; } ;
struct lpc32xx_ep {int totalints; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (struct lpc32xx_ep*,int ) ;
 int FUNC_1 (struct lpc32xx_udc*,int ) ;
 int FUNC_2 (struct lpc32xx_udc*,int ) ;
 int FUNC_3 (struct lpc32xx_udc*) ;
 int FUNC_4 (struct lpc32xx_udc*) ;

__attribute__((used)) static void FUNC_5(struct lpc32xx_udc *VAR_6)
{
 struct lpc32xx_ep *VAR_7 = &VAR_6->ep[0];
 u32 VAR_8;


 VAR_8 = FUNC_1(VAR_6, VAR_1);







 if (VAR_8 & VAR_4) {
  FUNC_2(VAR_6, VAR_1);
  FUNC_0(VAR_7, -VAR_0);
  VAR_6->ep0state = 128;
  return;
 }


 if (VAR_8 & VAR_2)
  return;

 if (VAR_8 & VAR_5) {
  FUNC_0(VAR_7, 0);
  VAR_6->ep0state = 128;
 }


 if (VAR_8 & VAR_3)

  switch (VAR_6->ep0state) {
  case 128:
   FUNC_4(VAR_6);
   break;

  case 129:
   FUNC_3(VAR_6);
   break;

  default:

   FUNC_0(VAR_7, -VAR_0);
   VAR_6->ep0state = 128;
  }
}
