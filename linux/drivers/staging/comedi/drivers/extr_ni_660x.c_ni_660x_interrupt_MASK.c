
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {int interrupt_lock; } ;
struct comedi_subdevice {scalar_t__ type; } ;
struct comedi_device {unsigned int n_subdevices; struct comedi_subdevice* subdevices; int attached; struct ni_660x_private* private; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct comedi_device *VAR_5 = VAR_4;
 struct ni_660x_private *VAR_6 = VAR_5->private;
 struct comedi_subdevice *VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;

 if (!VAR_5->attached)
  return VAR_2;

 FUNC_1();


 FUNC_2(&VAR_6->interrupt_lock, VAR_9);
 for (VAR_8 = 0; VAR_8 < VAR_5->n_subdevices; ++VAR_8) {
  VAR_7 = &VAR_5->subdevices[VAR_8];
  if (VAR_7->type == VAR_0)
   FUNC_0(VAR_5, VAR_7);
 }
 FUNC_3(&VAR_6->interrupt_lock, VAR_9);
 return VAR_1;
}
