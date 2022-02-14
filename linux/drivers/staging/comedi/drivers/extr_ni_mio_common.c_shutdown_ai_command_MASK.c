
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_1)
{
 struct comedi_subdevice *VAR_2 = VAR_1->read_subdev;




 FUNC_3(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 VAR_2->async->events |= VAR_0;
}
