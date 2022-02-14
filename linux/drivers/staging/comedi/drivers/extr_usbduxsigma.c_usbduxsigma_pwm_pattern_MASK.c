
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsigma_private {int pwm_buf_sz; TYPE_1__* pwm_urb; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;
struct TYPE_2__ {scalar_t__ transfer_buffer; } ;



__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4)
{
 struct usbduxsigma_private *VAR_5 = VAR_0->private;
 char VAR_6 = (1 << VAR_2);
 char VAR_7 = (16 << VAR_2);
 char *VAR_8 = (char *)(VAR_5->pwm_urb->transfer_buffer);
 int VAR_9 = VAR_5->pwm_buf_sz;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  char VAR_11 = *VAR_8;

  VAR_11 &= ~VAR_6;
  if (VAR_10 < VAR_3)
   VAR_11 |= VAR_6;
  if (!VAR_4)
   VAR_11 &= ~VAR_7;
  else
   VAR_11 |= VAR_7;
  *VAR_8++ = VAR_11;
 }
}
