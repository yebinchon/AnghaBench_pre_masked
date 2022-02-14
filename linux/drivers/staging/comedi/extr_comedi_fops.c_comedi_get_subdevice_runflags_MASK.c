
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int spin_lock; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct comedi_subdevice *VAR_0)
{
 unsigned long VAR_1;
 unsigned int VAR_2;

 FUNC_1(&VAR_0->spin_lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->spin_lock, VAR_1);
 return VAR_2;
}
