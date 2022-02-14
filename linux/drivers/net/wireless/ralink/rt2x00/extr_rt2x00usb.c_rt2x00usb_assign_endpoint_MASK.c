
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device {int dummy; } ;
struct data_queue {scalar_t__ qid; int usb_maxpacket; int usb_endpoint; TYPE_1__* rt2x00dev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_endpoint_descriptor*) ;
 void* FUNC_2 (struct usb_device*,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct data_queue *VAR_1,
          struct usb_endpoint_descriptor *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_0(VAR_1->rt2x00dev->dev);
 int VAR_4;

 VAR_1->usb_endpoint = FUNC_1(VAR_2);

 if (VAR_1->qid == VAR_0) {
  VAR_4 = FUNC_3(VAR_3, VAR_1->usb_endpoint);
  VAR_1->usb_maxpacket = FUNC_2(VAR_3, VAR_4, 0);
 } else {
  VAR_4 = FUNC_4(VAR_3, VAR_1->usb_endpoint);
  VAR_1->usb_maxpacket = FUNC_2(VAR_3, VAR_4, 1);
 }

 if (!VAR_1->usb_maxpacket)
  VAR_1->usb_maxpacket = 1;
}
