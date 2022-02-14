
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmuio_private {struct pcmuio_asic* asics; } ;
struct pcmuio_asic {int active; int spinlock; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcmuio_private* private; } ;
struct comedi_cmd {scalar_t__ start_src; } ;
struct TYPE_2__ {int inttrig; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 struct pcmuio_private *VAR_4 = VAR_2->private;
 struct comedi_cmd *VAR_5 = &VAR_3->async->cmd;
 int VAR_6 = FUNC_1(VAR_3);
 struct pcmuio_asic *VAR_7 = &VAR_4->asics[VAR_6];
 unsigned long VAR_8;

 FUNC_2(&VAR_7->spinlock, VAR_8);
 VAR_7->active = 1;


 if (VAR_5->start_src == VAR_0)
  VAR_3->async->inttrig = VAR_1;
 else
  FUNC_0(VAR_2, VAR_3);

 FUNC_3(&VAR_7->spinlock, VAR_8);

 return 0;
}
