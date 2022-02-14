
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; } ;


 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1)
{
 unsigned long VAR_2;





 FUNC_2(&VAR_0->spinlock, VAR_2);

 FUNC_1(VAR_0);

 FUNC_3(&VAR_0->spinlock, VAR_2);

 return FUNC_0(VAR_1);
}
