
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ mmio; int attached; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_8 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_9, void *VAR_10)
{
 struct comedi_device *VAR_11 = VAR_10;
 struct comedi_subdevice *VAR_12 = VAR_11->read_subdev;
 unsigned int VAR_13;

 if (!VAR_11->attached)
  return VAR_7;

 VAR_13 = FUNC_2(VAR_11->mmio + VAR_5);

 if (VAR_13 & VAR_2)
  FUNC_1(VAR_11, VAR_12);

 if (VAR_13 & (VAR_4 | VAR_3))
  VAR_12->async->events |= VAR_1;

 VAR_8++;
 if (VAR_8 >= 10)
  VAR_12->async->events |= VAR_0;

 FUNC_0(VAR_11, VAR_12);
 return VAR_6;
}
