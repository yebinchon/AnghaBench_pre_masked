
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_hub {int disconnected; int kref; int buffer; int status; int descriptor; int ports; int urb; TYPE_1__* hdev; scalar_t__ error; } ;
struct usb_device {int maxchild; } ;
struct TYPE_2__ {scalar_t__ speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_hub*,int ) ;
 int VAR_4 ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 struct usb_hub* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (struct usb_hub*,int) ;
 int VAR_5 ;
 int FUNC_12 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_13(struct usb_interface *VAR_6)
{
 struct usb_hub *VAR_7 = FUNC_10(VAR_6);
 struct usb_device *VAR_8 = FUNC_1(VAR_6);
 int VAR_9;





 VAR_7->disconnected = 1;


 VAR_7->error = 0;
 FUNC_0(VAR_7, VAR_0);

 FUNC_4(&VAR_5);


 FUNC_7(&VAR_2);
 VAR_9 = VAR_8->maxchild;
 VAR_8->maxchild = 0;
 FUNC_12(VAR_6, ((void*)0));
 FUNC_8(&VAR_2);

 for (; VAR_9 > 0; --VAR_9)
  FUNC_11(VAR_7, VAR_9);

 FUNC_5(&VAR_5);

 if (VAR_7->hdev->speed == VAR_1)
  VAR_3--;

 FUNC_9(VAR_7->urb);
 FUNC_2(VAR_7->ports);
 FUNC_2(VAR_7->descriptor);
 FUNC_2(VAR_7->status);
 FUNC_2(VAR_7->buffer);

 FUNC_6(&VAR_6->dev, 0);
 FUNC_3(&VAR_7->kref, VAR_4);
}
