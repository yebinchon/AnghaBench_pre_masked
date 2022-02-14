
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {scalar_t__ streaming; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_usbvision*,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct usb_usbvision*) ;
 int FUNC_2 (struct usb_usbvision*) ;
 int VAR_4 ;
 struct usb_usbvision* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5,
       void *VAR_6, enum v4l2_buf_type VAR_7)
{
 struct usb_usbvision *VAR_8 = FUNC_3(VAR_5);

 if (VAR_7 != VAR_1)
  return -VAR_0;

 if (VAR_8->streaming == VAR_3) {
  FUNC_2(VAR_8);

  FUNC_0(VAR_8, VAR_4, VAR_2, 0);
 }
 FUNC_1(VAR_8);

 return 0;
}
