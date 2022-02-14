
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmmio_private {int spinlock; scalar_t__ active; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcmmio_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         unsigned int VAR_3)
{
 struct pcmmio_private *VAR_4 = VAR_1->private;
 struct comedi_cmd *VAR_5 = &VAR_2->async->cmd;
 unsigned long VAR_6;

 if (VAR_3 != VAR_5->start_arg)
  return -VAR_0;

 FUNC_1(&VAR_4->spinlock, VAR_6);
 VAR_2->async->inttrig = ((void*)0);
 if (VAR_4->active)
  FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_4->spinlock, VAR_6);

 return 1;
}
