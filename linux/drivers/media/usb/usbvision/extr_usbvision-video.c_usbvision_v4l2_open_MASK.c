
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int initialized; int v4l2_lock; scalar_t__ user; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_usbvision*) ;
 int FUNC_4 (struct usb_usbvision*) ;
 int FUNC_5 (struct usb_usbvision*) ;
 int FUNC_6 (struct usb_usbvision*) ;
 int FUNC_7 (struct usb_usbvision*) ;
 int FUNC_8 (struct usb_usbvision*,int ) ;
 int FUNC_9 (struct usb_usbvision*) ;
 int FUNC_10 (struct usb_usbvision*) ;
 int FUNC_11 (struct usb_usbvision*,scalar_t__) ;
 int FUNC_12 (struct file*) ;
 struct usb_usbvision* FUNC_13 (struct file*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_5)
{
 struct usb_usbvision *VAR_6 = FUNC_13(VAR_5);
 int VAR_7 = 0;

 FUNC_0(VAR_0, "open");

 if (FUNC_1(&VAR_6->v4l2_lock))
  return -VAR_2;

 if (VAR_6->user) {
  VAR_7 = -VAR_1;
 } else {
  VAR_7 = FUNC_12(VAR_5);
  if (VAR_7)
   goto unlock;


  VAR_7 = FUNC_9(VAR_6);
  if (VAR_4 == VAR_3) {


   VAR_7 = FUNC_4(VAR_6);
  }
  if (VAR_7) {

   FUNC_10(VAR_6);
   FUNC_5(VAR_6);
  }
 }


 if (!VAR_7) {

  if (!VAR_6->initialized) {
   int VAR_8 = 0;
   VAR_8 = FUNC_11(VAR_6, VAR_4);
   if (VAR_8)
    VAR_6->initialized = 1;
   else
    VAR_7 = -VAR_1;
  }

  if (!VAR_7) {
   FUNC_3(VAR_6);
   VAR_7 = FUNC_7(VAR_6);

   FUNC_8(VAR_6, 0);


   FUNC_6(VAR_6);
   VAR_6->user++;
  }
 }

unlock:
 FUNC_2(&VAR_6->v4l2_lock);

 FUNC_0(VAR_0, "success");
 return VAR_7;
}
