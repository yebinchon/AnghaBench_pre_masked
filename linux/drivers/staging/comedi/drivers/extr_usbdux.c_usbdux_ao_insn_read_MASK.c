
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int mut; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct usbdux_private* private; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 struct usbdux_private *VAR_4 = VAR_0->private;
 int VAR_5;

 FUNC_1(&VAR_4->mut);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_4->mut);

 return VAR_5;
}
