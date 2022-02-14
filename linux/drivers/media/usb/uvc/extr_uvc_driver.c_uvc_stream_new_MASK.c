
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_streaming {int async_wq; int intfnum; int intf; struct uvc_device* dev; int mutex; } ;
struct uvc_device {int dummy; } ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 struct uvc_streaming* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct uvc_streaming*) ;

__attribute__((used)) static struct uvc_streaming *FUNC_5(struct uvc_device *VAR_3,
         struct usb_interface *VAR_4)
{
 struct uvc_streaming *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_2(&VAR_5->mutex);

 VAR_5->dev = VAR_3;
 VAR_5->intf = FUNC_3(VAR_4);
 VAR_5->intfnum = VAR_4->cur_altsetting->desc.bInterfaceNumber;


 VAR_5->async_wq = FUNC_0("uvcvideo", VAR_2 | VAR_1,
        0);
 if (!VAR_5->async_wq) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
