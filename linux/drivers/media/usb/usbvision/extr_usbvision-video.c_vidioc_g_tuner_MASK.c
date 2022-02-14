
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ type; int name; scalar_t__ index; } ;
struct usb_usbvision {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct usb_usbvision*,int ,int ,struct v4l2_tuner*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_3 ;
 struct usb_usbvision* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
    struct v4l2_tuner *VAR_6)
{
 struct usb_usbvision *VAR_7 = FUNC_2(VAR_4);

 if (VAR_6->index)
  return -VAR_0;
 if (VAR_6->type == VAR_1)
  FUNC_1(VAR_6->name, "Radio", sizeof(VAR_6->name));
 else
  FUNC_1(VAR_6->name, "Television", sizeof(VAR_6->name));


 FUNC_0(VAR_7, VAR_3, VAR_2, VAR_6);

 return 0;
}
