
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ memory; int count; } ;
struct usb_usbvision {scalar_t__ streaming; int * cur_frame; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct usb_usbvision*) ;
 int FUNC_2 (struct usb_usbvision*,int ) ;
 int FUNC_3 (struct usb_usbvision*) ;
 int FUNC_4 (struct usb_usbvision*) ;
 struct usb_usbvision* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_4,
      void *VAR_5, struct v4l2_requestbuffers *VAR_6)
{
 struct usb_usbvision *VAR_7 = FUNC_5(VAR_4);
 int VAR_8;

 FUNC_0(VAR_6->count, 1, VAR_1);



 if (VAR_6->memory != VAR_2)
  return -VAR_0;

 if (VAR_7->streaming == VAR_3) {
  VAR_8 = FUNC_4(VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_3(VAR_7);
 FUNC_1(VAR_7);
 VAR_6->count = FUNC_2(VAR_7, VAR_6->count);

 VAR_7->cur_frame = ((void*)0);

 return 0;
}
