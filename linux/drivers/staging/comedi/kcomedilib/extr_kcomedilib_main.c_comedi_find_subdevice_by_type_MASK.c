
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int type; } ;
struct comedi_device {unsigned int n_subdevices; int attach_lock; struct comedi_subdevice* subdevices; scalar_t__ attached; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct comedi_device *VAR_1, int VAR_2,
      unsigned int VAR_3)
{
 struct comedi_subdevice *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_1->attach_lock);
 if (VAR_1->attached)
  for (; VAR_3 < VAR_1->n_subdevices; VAR_3++) {
   VAR_4 = &VAR_1->subdevices[VAR_3];
   if (VAR_4->type == VAR_2) {
    VAR_5 = VAR_3;
    break;
   }
  }
 FUNC_1(&VAR_1->attach_lock);
 return VAR_5;
}
