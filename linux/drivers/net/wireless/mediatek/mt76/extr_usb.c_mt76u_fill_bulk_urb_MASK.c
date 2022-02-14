
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_complete_t ;
struct usb_device {int dummy; } ;
struct urb {unsigned int pipe; void* context; int complete; struct usb_device* dev; } ;
struct TYPE_2__ {int * out_ep; int * in_ep; } ;
struct mt76_dev {TYPE_1__ usb; int dev; } ;


 int VAR_0 ;
 struct usb_device* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct usb_device*,int ) ;
 unsigned int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static void
FUNC_3(struct mt76_dev *VAR_1, int VAR_2, int VAR_3,
      struct urb *VAR_4, usb_complete_t VAR_5,
      void *VAR_6)
{
 struct usb_device *VAR_7 = FUNC_0(VAR_1->dev);
 unsigned int VAR_8;

 if (VAR_2 == VAR_0)
  VAR_8 = FUNC_1(VAR_7, VAR_1->usb.in_ep[VAR_3]);
 else
  VAR_8 = FUNC_2(VAR_7, VAR_1->usb.out_ep[VAR_3]);

 VAR_4->dev = VAR_7;
 VAR_4->pipe = VAR_8;
 VAR_4->complete = VAR_5;
 VAR_4->context = VAR_6;
}
