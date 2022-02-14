
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ actual; } ;
struct iudma_ch {int is_tx; } ;
struct bcm63xx_udc {int gadget; struct usb_request* ep0_request; struct iudma_ch* iudma; } ;
struct bcm63xx_req {scalar_t__ offset; } ;


 int FUNC_0 (struct usb_request*) ;
 int FUNC_1 (struct bcm63xx_udc*,struct iudma_ch*,struct bcm63xx_req*) ;
 struct bcm63xx_req* FUNC_2 (struct usb_request*) ;
 int FUNC_3 (int *,struct usb_request*,int ) ;

__attribute__((used)) static void FUNC_4(struct bcm63xx_udc *VAR_0, int VAR_1,
 struct usb_request *VAR_2)
{
 struct bcm63xx_req *VAR_3 = FUNC_2(VAR_2);
 struct iudma_ch *VAR_4 = &VAR_0->iudma[VAR_1];

 FUNC_0(VAR_0->ep0_request);
 VAR_0->ep0_request = VAR_2;

 VAR_2->actual = 0;
 VAR_3->offset = 0;
 FUNC_3(&VAR_0->gadget, VAR_2, VAR_4->is_tx);
 FUNC_1(VAR_0, VAR_4, VAR_3);
}
