
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subdev_8255_private {unsigned long regbase; } ;
struct comedi_subdevice {struct subdev_8255_private* private; } ;



unsigned long FUNC_0(struct comedi_subdevice *VAR_0)
{
 struct subdev_8255_private *VAR_1 = VAR_0->private;

 return VAR_1->regbase;
}
