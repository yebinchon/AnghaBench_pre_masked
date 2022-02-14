
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int mut; int ao_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbdux_private* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1)
{
 struct usbdux_private *VAR_2 = VAR_0->private;


 FUNC_0(&VAR_2->mut);

 FUNC_2(VAR_0, VAR_2->ao_cmd_running);
 FUNC_1(&VAR_2->mut);

 return 0;
}
