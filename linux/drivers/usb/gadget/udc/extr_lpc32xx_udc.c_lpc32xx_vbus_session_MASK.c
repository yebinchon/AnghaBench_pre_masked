
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct lpc32xx_udc {int lock; int enabled_ep_cnt; int ep_disable_wait_queue; scalar_t__ driver; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct lpc32xx_udc*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct lpc32xx_udc*) ;
 struct lpc32xx_udc* FUNC_5 (struct usb_gadget*) ;
 int FUNC_6 (struct lpc32xx_udc*,int) ;
 int FUNC_7 (struct lpc32xx_udc*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct usb_gadget *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 struct lpc32xx_udc *VAR_3 = FUNC_5(VAR_0);

 FUNC_2(&VAR_3->lock, VAR_2);


 if (VAR_3->driver) {
  FUNC_6(VAR_3, 1);
  FUNC_7(VAR_3);
  FUNC_1(VAR_3, VAR_1);
 } else {
  FUNC_4(VAR_3);
  FUNC_1(VAR_3, 0);

  FUNC_3(&VAR_3->lock, VAR_2);





  if (FUNC_0(&VAR_3->enabled_ep_cnt))
   FUNC_8(VAR_3->ep_disable_wait_queue,
     (FUNC_0(&VAR_3->enabled_ep_cnt) == 0));

  FUNC_2(&VAR_3->lock, VAR_2);

  FUNC_6(VAR_3, 0);
 }

 FUNC_3(&VAR_3->lock, VAR_2);

 return 0;
}
