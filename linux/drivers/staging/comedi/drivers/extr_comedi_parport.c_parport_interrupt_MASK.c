
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,int *,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct comedi_device *VAR_6 = VAR_5;
 struct comedi_subdevice *VAR_7 = VAR_6->read_subdev;
 unsigned int VAR_8;

 VAR_8 = FUNC_2(VAR_6->iobase + VAR_3);
 if (!(VAR_8 & VAR_2))
  return VAR_1;

 FUNC_0(VAR_7, &VAR_7->state, 1);
 FUNC_1(VAR_6, VAR_7);

 return VAR_0;
}
