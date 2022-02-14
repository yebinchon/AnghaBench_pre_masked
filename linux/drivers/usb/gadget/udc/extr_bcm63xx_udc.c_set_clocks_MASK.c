
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm63xx_udc {int usbh_clk; int usbd_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct bcm63xx_udc *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_0->usbh_clk);
  FUNC_1(VAR_0->usbd_clk);
  FUNC_2(10);
 } else {
  FUNC_0(VAR_0->usbd_clk);
  FUNC_0(VAR_0->usbh_clk);
 }
}
