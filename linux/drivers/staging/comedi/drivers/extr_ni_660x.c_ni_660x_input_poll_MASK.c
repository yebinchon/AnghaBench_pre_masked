
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int mite_chan; } ;
struct ni_660x_private {int interrupt_lock; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (int ,struct comedi_subdevice*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1)
{
 struct ni_660x_private *VAR_2 = VAR_0->private;
 struct ni_gpct *VAR_3 = VAR_1->private;
 unsigned long VAR_4;


 FUNC_2(&VAR_2->interrupt_lock, VAR_4);
 FUNC_1(VAR_3->mite_chan, VAR_1);
 FUNC_3(&VAR_2->interrupt_lock, VAR_4);
 return FUNC_0(VAR_1);
}
