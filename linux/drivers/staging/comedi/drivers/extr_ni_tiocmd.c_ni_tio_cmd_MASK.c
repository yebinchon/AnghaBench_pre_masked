
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ni_gpct {int lock; TYPE_2__* counter_dev; int mite_chan; } ;
struct comedi_subdevice {struct comedi_async* async; struct ni_gpct* private; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int flags; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_subdevice*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 struct ni_gpct *VAR_4 = VAR_3->private;
 struct comedi_async *VAR_5 = VAR_3->async;
 struct comedi_cmd *VAR_6 = &VAR_5->cmd;
 int VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_4(&VAR_4->lock, VAR_8);
 if (!VAR_4->mite_chan) {
  FUNC_0(VAR_4->counter_dev->dev->class_dev,
   "commands only supported with DMA.  ");
  FUNC_0(VAR_4->counter_dev->dev->class_dev,
   "Interrupt-driven commands not yet implemented.\n");
  VAR_7 = -VAR_1;
 } else {
  VAR_7 = FUNC_1(VAR_3);
  if (VAR_7 == 0) {
   if (VAR_6->flags & VAR_0)
    VAR_7 = FUNC_3(VAR_3);
   else
    VAR_7 = FUNC_2(VAR_3);
  }
 }
 FUNC_5(&VAR_4->lock, VAR_8);
 return VAR_7;
}
