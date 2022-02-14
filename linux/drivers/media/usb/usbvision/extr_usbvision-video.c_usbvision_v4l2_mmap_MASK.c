
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct usb_usbvision {int v4l2_lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,struct vm_area_struct*) ;
 struct usb_usbvision* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct usb_usbvision *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (FUNC_0(&VAR_3->v4l2_lock))
  return -VAR_0;
 VAR_4 = FUNC_2(VAR_1, VAR_2);
 FUNC_1(&VAR_3->v4l2_lock);
 return VAR_4;
}
