
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ mmio; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct comedi_device *VAR_5 = VAR_4;
 struct comedi_subdevice *VAR_6 = VAR_5->read_subdev;
 unsigned int VAR_7;
 unsigned int VAR_8;


 VAR_7 = FUNC_2(VAR_5->mmio + 16);
 if ((VAR_7 & 0x2) == 0x2) {

  FUNC_3(VAR_7, VAR_5->mmio + 16);

  VAR_8 = FUNC_2(VAR_5->mmio + 28);
  FUNC_0(VAR_6, &VAR_8, 1);

  VAR_6->async->events |= VAR_0;
  FUNC_1(VAR_5, VAR_6);

  return VAR_1;
 }
 return VAR_2;
}
