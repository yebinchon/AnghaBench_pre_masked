
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {int udev; struct net_device* net; int data; } ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct net_device {int flags; } ;
struct cdc_state {struct usb_interface* control; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ,int,int,int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_10)
{
 struct cdc_state *VAR_11 = (void *) &VAR_10->data;
 struct usb_interface *VAR_12 = VAR_11->control;
 struct net_device *VAR_13 = VAR_10->net;

 u16 VAR_14 = VAR_4
   | VAR_3;





 if (VAR_13->flags & VAR_1)
  VAR_14 |= VAR_5;
 if (!FUNC_0(VAR_13) || (VAR_13->flags & VAR_0))
  VAR_14 |= VAR_2;

 FUNC_1(VAR_10->udev,
   FUNC_2(VAR_10->udev, 0),
   VAR_6,
   VAR_9 | VAR_8,
   VAR_14,
   VAR_12->cur_altsetting->desc.bInterfaceNumber,
   ((void*)0),
   0,
   VAR_7
  );
}
