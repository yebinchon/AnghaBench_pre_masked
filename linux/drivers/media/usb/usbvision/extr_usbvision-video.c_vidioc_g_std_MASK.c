
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct usb_usbvision {int tvnorm_id; } ;
struct file {int dummy; } ;


 struct usb_usbvision* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct usb_usbvision *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->tvnorm_id;
 return 0;
}
