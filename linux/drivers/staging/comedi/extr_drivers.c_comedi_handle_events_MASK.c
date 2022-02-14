
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int (* cancel ) (struct comedi_device*,struct comedi_subdevice*) ;TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int events; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

unsigned int FUNC_2(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2)
{
 unsigned int VAR_3 = VAR_2->async->events;

 if (VAR_3 == 0)
  return VAR_3;

 if ((VAR_3 & VAR_0) && VAR_2->cancel)
  VAR_2->cancel(VAR_1, VAR_2);

 FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
