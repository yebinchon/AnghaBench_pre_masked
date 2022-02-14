
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmuio_private {struct pcmuio_asic* asics; } ;
struct pcmuio_asic {int spinlock; scalar_t__ active; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcmuio_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         unsigned int VAR_3)
{
 struct pcmuio_private *VAR_4 = VAR_1->private;
 struct comedi_cmd *VAR_5 = &VAR_2->async->cmd;
 int VAR_6 = FUNC_1(VAR_2);
 struct pcmuio_asic *VAR_7 = &VAR_4->asics[VAR_6];
 unsigned long VAR_8;

 if (VAR_3 != VAR_5->start_arg)
  return -VAR_0;

 FUNC_2(&VAR_7->spinlock, VAR_8);
 VAR_2->async->inttrig = ((void*)0);
 if (VAR_7->active)
  FUNC_0(VAR_1, VAR_2);

 FUNC_3(&VAR_7->spinlock, VAR_8);

 return 1;
}
