
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmmio_private {int spinlock; scalar_t__ active; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct pcmmio_private* private; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 struct pcmmio_private *VAR_2 = VAR_0->private;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->spinlock, VAR_3);
 if (VAR_2->active)
  FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->spinlock, VAR_3);

 return 0;
}
