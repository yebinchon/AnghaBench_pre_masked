
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int spin_lock; void* lock; scalar_t__ busy; } ;
struct comedi_device {unsigned long n_subdevices; struct comedi_subdevice* subdevices; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, unsigned long VAR_3,
    void *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;
 struct comedi_subdevice *VAR_7;

 FUNC_0(&VAR_2->mutex);
 if (VAR_3 >= VAR_2->n_subdevices)
  return -VAR_1;
 VAR_7 = &VAR_2->subdevices[VAR_3];

 FUNC_1(&VAR_7->spin_lock, VAR_6);
 if (VAR_7->busy || VAR_7->lock)
  VAR_5 = -VAR_0;
 else
  VAR_7->lock = VAR_4;
 FUNC_2(&VAR_7->spin_lock, VAR_6);

 return VAR_5;
}
