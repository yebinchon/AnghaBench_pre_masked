
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsigma_private {int pwm_cmd_running; int pwm_buf_sz; TYPE_1__* pwm_urb; int pwm_delay; int * dux_commands; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;
struct TYPE_2__ {int transfer_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2)
{
 struct usbduxsigma_private *VAR_3 = VAR_1->private;
 int VAR_4;

 if (VAR_3->pwm_cmd_running)
  return 0;

 VAR_3->dux_commands[1] = VAR_3->pwm_delay;
 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(VAR_3->pwm_urb->transfer_buffer, 0, VAR_3->pwm_buf_sz);

 VAR_3->pwm_cmd_running = 1;
 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 < 0) {
  VAR_3->pwm_cmd_running = 0;
  return VAR_4;
 }

 return 0;
}
