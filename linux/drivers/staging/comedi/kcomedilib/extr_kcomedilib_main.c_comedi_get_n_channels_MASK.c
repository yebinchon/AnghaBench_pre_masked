
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {unsigned int n_subdevices; int attach_lock; TYPE_1__* subdevices; int attached; } ;
struct TYPE_2__ {int n_chan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct comedi_device *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->attach_lock);
 if (!VAR_0->attached || VAR_1 >= VAR_0->n_subdevices)
  VAR_2 = 0;
 else
  VAR_2 = VAR_0->subdevices[VAR_1].n_chan;
 FUNC_1(&VAR_0->attach_lock);

 return VAR_2;
}
