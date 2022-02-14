
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int attached; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct comedi_device *VAR_3 = VAR_2;
 struct comedi_subdevice *VAR_4 = VAR_3->read_subdev;
 int VAR_5;

 if (!VAR_3->attached)
  return VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_4);

 return FUNC_0(VAR_5);
}
