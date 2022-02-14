
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {scalar_t__ pwm_cmd_running; } ;
struct comedi_device {struct usbdux_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0, int VAR_1)
{
 struct usbdux_private *VAR_2 = VAR_0->private;

 if (VAR_1)
  FUNC_0(VAR_0);

 VAR_2->pwm_cmd_running = 0;
}
