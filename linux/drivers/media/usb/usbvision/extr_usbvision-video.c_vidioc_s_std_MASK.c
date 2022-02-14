
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct usb_usbvision {int ctl_input; int tvnorm_id; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct usb_usbvision*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_usbvision*,int ) ;
 int VAR_1 ;
 struct usb_usbvision* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, v4l2_std_id VAR_4)
{
 struct usb_usbvision *VAR_5 = FUNC_2(VAR_2);

 VAR_5->tvnorm_id = VAR_4;

 FUNC_0(VAR_5, VAR_1, VAR_0, VAR_5->tvnorm_id);

 FUNC_1(VAR_5, VAR_5->ctl_input);

 return 0;
}
