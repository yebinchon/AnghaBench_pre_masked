
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct v4l2_frequency {scalar_t__ type; int frequency; scalar_t__ tuner; } const v4l2_frequency ;
struct usb_usbvision {int tv_freq; int radio_freq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct usb_usbvision*,int ,int ,struct v4l2_frequency const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
    const struct v4l2_frequency *VAR_7)
{
 struct usb_usbvision *VAR_8 = FUNC_1(VAR_5);
 struct v4l2_frequency VAR_9 = *VAR_7;


 if (VAR_7->tuner)
  return -VAR_0;

 FUNC_0(VAR_8, VAR_4, VAR_3, VAR_7);
 FUNC_0(VAR_8, VAR_4, VAR_2, &VAR_9);
 if (VAR_7->type == VAR_1)
  VAR_8->radio_freq = VAR_9.frequency;
 else
  VAR_8->tv_freq = VAR_9.frequency;

 return 0;
}
