
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct redrat3_dev {int dma_in; int bulk_in_buf; TYPE_1__* ep_narrow; int learn_urb; int flash_urb; int wide_urb; int narrow_urb; } ;
struct TYPE_2__ {int wMaxPacketSize; } ;


 int FUNC_0 (struct redrat3_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_device*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct redrat3_dev *VAR_0,
      struct usb_device *VAR_1)
{
 FUNC_4(VAR_0->narrow_urb);
 FUNC_4(VAR_0->wide_urb);
 FUNC_4(VAR_0->flash_urb);
 FUNC_4(VAR_0->learn_urb);
 FUNC_3(VAR_0->narrow_urb);
 FUNC_3(VAR_0->wide_urb);
 FUNC_3(VAR_0->flash_urb);
 FUNC_3(VAR_0->learn_urb);
 FUNC_2(VAR_1, FUNC_1(VAR_0->ep_narrow->wMaxPacketSize),
     VAR_0->bulk_in_buf, VAR_0->dma_in);

 FUNC_0(VAR_0);
}
