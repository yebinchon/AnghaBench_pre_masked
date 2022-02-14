
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bmAttributes; int bInterval; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct urb* FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct urb*,struct usb_device*,unsigned int,void*,int,int ,int *) ;
 int FUNC_2 (struct urb*,struct usb_device*,unsigned int,void*,int,int ,int *,int ) ;
 struct usb_host_endpoint* FUNC_3 (struct usb_device*,unsigned int) ;
 int FUNC_4 (struct urb*,int,int*) ;

int FUNC_5(struct usb_device *VAR_7, unsigned int VAR_8,
   void *VAR_9, int VAR_10, int *VAR_11, int VAR_12)
{
 struct urb *VAR_13;
 struct usb_host_endpoint *VAR_14;

 VAR_14 = FUNC_3(VAR_7, VAR_8);
 if (!VAR_14 || VAR_10 < 0)
  return -VAR_0;

 VAR_13 = FUNC_0(0, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 if ((VAR_14->desc.bmAttributes & VAR_4) ==
   VAR_5) {
  VAR_8 = (VAR_8 & ~(3 << 30)) | (VAR_3 << 30);
  FUNC_2(VAR_13, VAR_7, VAR_8, VAR_9, VAR_10,
    VAR_6, ((void*)0),
    VAR_14->desc.bInterval);
 } else
  FUNC_1(VAR_13, VAR_7, VAR_8, VAR_9, VAR_10,
    VAR_6, ((void*)0));

 return FUNC_4(VAR_13, VAR_12, VAR_11);
}
