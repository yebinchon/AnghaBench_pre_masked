
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
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct comedi_subdevice*,int *,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct comedi_device *VAR_9 = VAR_8;
 struct comedi_subdevice *VAR_10 = VAR_9->read_subdev;
 unsigned int VAR_11;

 VAR_11 = FUNC_2(VAR_9->mmio + VAR_6);
 if (!(VAR_11 & VAR_5))
  return VAR_1;

 if (VAR_11 & VAR_4) {
  FUNC_0(VAR_10, &VAR_10->state, 1);
  FUNC_1(VAR_9, VAR_10);
 }

 FUNC_3(VAR_2, VAR_9->mmio + VAR_3);

 return VAR_0;
}
