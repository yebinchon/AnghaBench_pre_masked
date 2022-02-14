
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct usb_device* root_hub; struct device* controller; } ;
struct usb_hcd {int rh_registered; TYPE_1__ self; } ;
struct TYPE_12__ {int bcdUSB; } ;
struct TYPE_10__ {int wMaxPacketSize; } ;
struct TYPE_11__ {TYPE_4__ desc; } ;
struct usb_device {int devnum; scalar_t__ speed; int dev; int lpm_capable; TYPE_6__ descriptor; TYPE_5__ ep0; TYPE_3__* bus; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int devicemap; } ;
struct TYPE_9__ {int devnum_next; TYPE_2__ devmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_hcd*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int const,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (struct usb_device*,int ) ;
 int FUNC_14 (struct usb_hcd*) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_17(struct usb_hcd *VAR_6)
{
 struct device *VAR_7 = VAR_6->self.controller;
 struct usb_device *VAR_8 = VAR_6->self.root_hub;
 const int VAR_9 = 1;
 int VAR_10;

 VAR_8->devnum = VAR_9;
 VAR_8->bus->devnum_next = VAR_9 + 1;
 FUNC_8 (VAR_9, VAR_8->bus->devmap.devicemap);
 FUNC_16(VAR_8, VAR_3);

 FUNC_6(&VAR_5);

 VAR_8->ep0.desc.wMaxPacketSize = FUNC_1(64);
 VAR_10 = FUNC_13(VAR_8, VAR_1);
 if (VAR_10 != sizeof VAR_8->descriptor) {
  FUNC_7(&VAR_5);
  FUNC_2 (VAR_7, "can't read %s device descriptor %d\n",
    FUNC_4(&VAR_8->dev), VAR_10);
  return (VAR_10 < 0) ? VAR_10 : -VAR_0;
 }

 if (FUNC_5(VAR_8->descriptor.bcdUSB) >= 0x0201) {
  VAR_10 = FUNC_12(VAR_8);
  if (!VAR_10) {
   VAR_8->lpm_capable = FUNC_11(VAR_8);
  } else if (VAR_8->speed >= VAR_2) {
   FUNC_7(&VAR_5);
   FUNC_2(VAR_7, "can't read %s bos descriptor %d\n",
     FUNC_4(&VAR_8->dev), VAR_10);
   return VAR_10;
  }
 }

 VAR_10 = FUNC_15 (VAR_8);
 if (VAR_10) {
  FUNC_3 (VAR_7, "can't register root hub for %s, %d\n",
    FUNC_4(&VAR_8->dev), VAR_10);
 } else {
  FUNC_9 (&VAR_4);
  VAR_6->rh_registered = 1;
  FUNC_10 (&VAR_4);


  if (FUNC_0(VAR_6))
   FUNC_14 (VAR_6);
 }
 FUNC_7(&VAR_5);

 return VAR_10;
}
