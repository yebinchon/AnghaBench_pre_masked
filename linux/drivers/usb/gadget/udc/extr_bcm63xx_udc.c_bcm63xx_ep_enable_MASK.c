
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {scalar_t__ name; int maxpacket; struct usb_endpoint_descriptor const* desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct iudma_ch {int enabled; } ;
struct bcm63xx_udc {int lock; int wedgemap; int driver; } ;
struct bcm63xx_ep {int ep_num; scalar_t__ halted; int queue; struct iudma_ch* iudma; struct bcm63xx_udc* udc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bcm63xx_udc*,struct bcm63xx_ep*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct bcm63xx_udc*,struct iudma_ch*) ;
 int FUNC_4 (int *) ;
 struct bcm63xx_ep* FUNC_5 (struct usb_ep*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_9(struct usb_ep *VAR_3,
 const struct usb_endpoint_descriptor *VAR_4)
{
 struct bcm63xx_ep *VAR_5 = FUNC_5(VAR_3);
 struct bcm63xx_udc *VAR_6 = VAR_5->udc;
 struct iudma_ch *VAR_7 = VAR_5->iudma;
 unsigned long VAR_8;

 if (!VAR_3 || !VAR_4 || VAR_3->name == VAR_2)
  return -VAR_0;

 if (!VAR_6->driver)
  return -VAR_1;

 FUNC_6(&VAR_6->lock, VAR_8);
 if (VAR_7->enabled) {
  FUNC_7(&VAR_6->lock, VAR_8);
  return -VAR_0;
 }

 VAR_7->enabled = 1;
 FUNC_0(!FUNC_4(&VAR_5->queue));

 FUNC_3(VAR_6, VAR_7);

 VAR_5->halted = 0;
 FUNC_1(VAR_6, VAR_5, 0);
 FUNC_2(VAR_5->ep_num, &VAR_6->wedgemap);

 VAR_3->desc = VAR_4;
 VAR_3->maxpacket = FUNC_8(VAR_4);

 FUNC_7(&VAR_6->lock, VAR_8);
 return 0;
}
