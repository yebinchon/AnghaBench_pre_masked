
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int mut; int pwm_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbdux_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2)
{
 struct usbdux_private *VAR_3 = VAR_1->private;
 int VAR_4;

 FUNC_0(&VAR_3->mut);

 FUNC_3(VAR_1, VAR_3->pwm_cmd_running);
 VAR_4 = FUNC_2(VAR_1, VAR_0);
 FUNC_1(&VAR_3->mut);

 return VAR_4;
}
