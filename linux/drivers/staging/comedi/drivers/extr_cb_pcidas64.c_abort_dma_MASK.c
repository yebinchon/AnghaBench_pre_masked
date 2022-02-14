
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {int plx9080_iobase; } ;
struct comedi_device {int spinlock; struct pcidas64_private* private; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0, unsigned int VAR_1)
{
 struct pcidas64_private *VAR_2 = VAR_0->private;
 unsigned long VAR_3;


 FUNC_1(&VAR_0->spinlock, VAR_3);

 FUNC_0(VAR_2->plx9080_iobase, VAR_1);

 FUNC_2(&VAR_0->spinlock, VAR_3);
}
