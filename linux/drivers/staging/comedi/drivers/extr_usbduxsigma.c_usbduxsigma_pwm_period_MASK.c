
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {int pwm_delay; unsigned int pwm_period; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      unsigned int VAR_4)
{
 struct usbduxsigma_private *VAR_5 = VAR_2->private;
 int VAR_6;

 if (VAR_4 < VAR_1)
  return -VAR_0;

 VAR_6 = (VAR_4 / (6 * 512 * 1000 / 33)) - 6;
 if (VAR_6 > 255)
  return -VAR_0;

 VAR_5->pwm_delay = VAR_6;
 VAR_5->pwm_period = VAR_4;
 return 0;
}
