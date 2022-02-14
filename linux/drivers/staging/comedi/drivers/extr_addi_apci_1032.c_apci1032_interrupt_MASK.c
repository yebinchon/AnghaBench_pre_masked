
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; struct apci1032_private* private; } ;
struct apci1032_private {scalar_t__ amcc_iobase; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct comedi_subdevice*,int*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct comedi_device *VAR_9 = VAR_8;
 struct apci1032_private *VAR_10 = VAR_9->private;
 struct comedi_subdevice *VAR_11 = VAR_9->read_subdev;
 unsigned int VAR_12;


 if ((FUNC_2(VAR_10->amcc_iobase + VAR_0) &
      VAR_4) == 0)
  return VAR_6;


 VAR_12 = FUNC_2(VAR_9->iobase + VAR_2);
 if ((VAR_12 & VAR_1) == 0)
  return VAR_5;


 FUNC_3(VAR_12 & ~VAR_1, VAR_9->iobase + VAR_2);

 VAR_11->state = FUNC_2(VAR_9->iobase + VAR_3) & 0xffff;
 FUNC_0(VAR_11, &VAR_11->state, 1);
 FUNC_1(VAR_9, VAR_11);


 FUNC_3(VAR_12, VAR_9->iobase + VAR_2);

 return VAR_5;
}
