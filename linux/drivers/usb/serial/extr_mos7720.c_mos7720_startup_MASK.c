
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_serial {TYPE_2__** port; struct usb_device* dev; } ;
struct TYPE_3__ {int idProduct; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
struct urb {int complete; } ;
typedef int __u8 ;
struct TYPE_4__ {struct urb* interrupt_in_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,char) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct usb_serial*) ;
 int FUNC_4 (struct usb_serial*,int ,int ,char*) ;
 int FUNC_5 (struct usb_device*,int ,int ,int,int,int,int *,int,int) ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_serial *VAR_4)
{
 struct usb_device *VAR_5;
 char VAR_6;
 u16 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_4->dev->descriptor.idProduct);
 VAR_5 = VAR_4->dev;


 FUNC_5(VAR_4->dev, FUNC_6(VAR_4->dev, 0),
   (__u8)0x03, 0x00, 0x01, 0x00, ((void*)0), 0x00, 5000);

 if (VAR_7 == VAR_2) {
  struct urb *VAR_9 = VAR_4->port[0]->interrupt_in_urb;

  VAR_9->complete = VAR_3;






 }

 VAR_8 = FUNC_7(VAR_4->port[0]->interrupt_in_urb, VAR_0);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "failed to submit interrupt urb: %d\n",
   VAR_8);
 }


 FUNC_4(VAR_4, 0, VAR_1, &VAR_6);
 FUNC_0(&VAR_5->dev, "LSR:%x\n", VAR_6);

 return 0;
}
