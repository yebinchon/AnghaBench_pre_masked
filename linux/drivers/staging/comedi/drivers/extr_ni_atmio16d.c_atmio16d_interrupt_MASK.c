
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned short FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct comedi_device *VAR_4 = VAR_3;
 struct comedi_subdevice *VAR_5 = VAR_4->read_subdev;
 unsigned short VAR_6;

 VAR_6 = FUNC_2(VAR_4->iobase + VAR_0);
 FUNC_0(VAR_5, &VAR_6, 1);
 FUNC_1(VAR_4, VAR_5);

 return VAR_1;
}
