
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct comedi_device *VAR_6 = VAR_5;
 struct comedi_subdevice *VAR_7 = VAR_6->read_subdev;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_3(VAR_6->iobase + VAR_0);
 if (!(VAR_8 & VAR_1))
  return VAR_3;

 VAR_9 = FUNC_0(VAR_6);
 VAR_9 |= (VAR_8 << 16);

 FUNC_1(VAR_7, &VAR_9, 1);
 FUNC_2(VAR_6, VAR_7);

 return VAR_2;
}
