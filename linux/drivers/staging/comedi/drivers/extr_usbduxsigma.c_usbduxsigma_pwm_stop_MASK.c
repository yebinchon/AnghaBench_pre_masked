
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {scalar_t__ pwm_cmd_running; scalar_t__ pwm_urb; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0, int VAR_1)
{
 struct usbduxsigma_private *VAR_2 = VAR_0->private;

 if (VAR_1) {
  if (VAR_2->pwm_urb)
   FUNC_0(VAR_2->pwm_urb);
 }

 VAR_2->pwm_cmd_running = 0;
}
