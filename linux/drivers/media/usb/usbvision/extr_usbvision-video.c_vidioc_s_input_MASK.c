
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {unsigned int video_inputs; int curheight; int curwidth; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_usbvision*,unsigned int) ;
 int FUNC_1 (struct usb_usbvision*) ;
 int FUNC_2 (struct usb_usbvision*,int ,int ) ;
 struct usb_usbvision* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2, unsigned int VAR_3)
{
 struct usb_usbvision *VAR_4 = FUNC_3(VAR_1);

 if (VAR_3 >= VAR_4->video_inputs)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_3);
 FUNC_1(VAR_4);
 FUNC_2(VAR_4,
        VAR_4->curwidth,
        VAR_4->curheight);
 return 0;
}
