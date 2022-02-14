
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {int pwm_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2)
{
 struct usbduxsigma_private *VAR_3 = VAR_1->private;


 FUNC_1(VAR_1, VAR_3->pwm_cmd_running);

 return FUNC_0(VAR_1, VAR_0);
}
