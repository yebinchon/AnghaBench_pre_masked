
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ type; int frequency; scalar_t__ tuner; } ;
struct usb_usbvision {int tv_freq; int radio_freq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_usbvision* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_frequency *VAR_4)
{
 struct usb_usbvision *VAR_5 = FUNC_0(VAR_2);


 if (VAR_4->tuner)
  return -VAR_0;
 if (VAR_4->type == VAR_1)
  VAR_4->frequency = VAR_5->radio_freq;
 else
  VAR_4->frequency = VAR_5->tv_freq;

 return 0;
}
