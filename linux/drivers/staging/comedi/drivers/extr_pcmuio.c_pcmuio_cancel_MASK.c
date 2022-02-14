
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmuio_private {struct pcmuio_asic* asics; } ;
struct pcmuio_asic {int spinlock; scalar_t__ active; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct pcmuio_private* private; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 struct pcmuio_private *VAR_2 = VAR_0->private;
 int VAR_3 = FUNC_1(VAR_1);
 struct pcmuio_asic *VAR_4 = &VAR_2->asics[VAR_3];
 unsigned long VAR_5;

 FUNC_2(&VAR_4->spinlock, VAR_5);
 if (VAR_4->active)
  FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_4->spinlock, VAR_5);

 return 0;
}
