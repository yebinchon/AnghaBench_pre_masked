
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_device {scalar_t__ mmio; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct comedi_subdevice*,int *,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct comedi_device *VAR_10 = VAR_9;
 struct comedi_subdevice *VAR_11 = VAR_10->read_subdev;
 unsigned int VAR_12;

 VAR_12 = FUNC_2(VAR_10->mmio + VAR_7);
 if ((VAR_12 & VAR_6) == 0)
  return VAR_1;
 if ((VAR_12 & VAR_5) == 0)
  return VAR_1;

 FUNC_3(VAR_2 | VAR_3,
        VAR_10->mmio + VAR_4);

 FUNC_0(VAR_11, &VAR_11->state, 1);
 FUNC_1(VAR_10, VAR_11);

 return VAR_0;
}
