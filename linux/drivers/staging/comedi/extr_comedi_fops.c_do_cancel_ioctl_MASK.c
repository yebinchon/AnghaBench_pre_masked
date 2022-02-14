
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {void* busy; int async; } ;
struct comedi_device {unsigned long n_subdevices; struct comedi_subdevice* subdevices; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, unsigned long VAR_3,
      void *VAR_4)
{
 struct comedi_subdevice *VAR_5;

 FUNC_1(&VAR_2->mutex);
 if (VAR_3 >= VAR_2->n_subdevices)
  return -VAR_1;
 VAR_5 = &VAR_2->subdevices[VAR_3];
 if (!VAR_5->async)
  return -VAR_1;

 if (!VAR_5->busy)
  return 0;

 if (VAR_5->busy != VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_5);
}
