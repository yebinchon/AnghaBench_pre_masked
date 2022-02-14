
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct comedi_file* private_data; } ;
struct comedi_subdevice {struct file* lock; struct file* busy; } ;
struct comedi_file {struct comedi_device* dev; } ;
struct comedi_device {int n_subdevices; int use_count; int mutex; TYPE_1__* driver; int (* close ) (struct comedi_device*) ;scalar_t__ attached; struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int module; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_file*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct file *VAR_1)
{
 struct comedi_file *VAR_2 = VAR_1->private_data;
 struct comedi_device *VAR_3 = VAR_2->dev;
 struct comedi_subdevice *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_4(&VAR_3->mutex);

 if (VAR_3->subdevices) {
  for (VAR_5 = 0; VAR_5 < VAR_3->n_subdevices; VAR_5++) {
   VAR_4 = &VAR_3->subdevices[VAR_5];

   if (VAR_4->busy == VAR_1)
    FUNC_1(VAR_3, VAR_4);
   if (VAR_4->lock == VAR_1)
    VAR_4->lock = ((void*)0);
  }
 }
 if (VAR_3->attached && VAR_3->use_count == 1) {
  if (VAR_3->close)
   VAR_3->close(VAR_3);
  FUNC_3(VAR_3->driver->module);
 }

 VAR_3->use_count--;

 FUNC_5(&VAR_3->mutex);
 FUNC_0(VAR_3);
 FUNC_2(VAR_2);

 return 0;
}
