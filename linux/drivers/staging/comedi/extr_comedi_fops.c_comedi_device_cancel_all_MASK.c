
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ async; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; int attached; int mutex; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct comedi_device *VAR_0)
{
 struct comedi_subdevice *VAR_1;
 int VAR_2;

 FUNC_1(&VAR_0->mutex);
 if (!VAR_0->attached)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_subdevices; VAR_2++) {
  VAR_1 = &VAR_0->subdevices[VAR_2];
  if (VAR_1->async)
   FUNC_0(VAR_0, VAR_1);
 }
}
