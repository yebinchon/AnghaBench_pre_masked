
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct lpc32xx_udc {int * driver; scalar_t__ enabled; int lock; int enabled_ep_cnt; int ep_disable_wait_queue; scalar_t__ clocked; int isp1301_i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lpc32xx_udc*) ;
 struct lpc32xx_udc* FUNC_5 (struct usb_gadget*) ;
 int FUNC_6 (struct lpc32xx_udc*,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct usb_gadget *VAR_3)
{
 struct lpc32xx_udc *VAR_4 = FUNC_5(VAR_3);

 FUNC_1(VAR_4->isp1301_i2c_client,
  VAR_0 | VAR_2, ~0);
 FUNC_1(VAR_4->isp1301_i2c_client,
  VAR_1 | VAR_2, ~0);

 if (VAR_4->clocked) {
  FUNC_2(&VAR_4->lock);
  FUNC_4(VAR_4);
  FUNC_3(&VAR_4->lock);






  if (FUNC_0(&VAR_4->enabled_ep_cnt))
   FUNC_7(VAR_4->ep_disable_wait_queue,
    (FUNC_0(&VAR_4->enabled_ep_cnt) == 0));

  FUNC_2(&VAR_4->lock);
  FUNC_6(VAR_4, 0);
  FUNC_3(&VAR_4->lock);
 }

 VAR_4->enabled = 0;
 VAR_4->driver = ((void*)0);

 return 0;
}
