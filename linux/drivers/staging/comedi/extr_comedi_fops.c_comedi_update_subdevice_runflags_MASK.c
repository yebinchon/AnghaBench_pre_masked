
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int spin_lock; } ;


 int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct comedi_subdevice *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_0->spin_lock, VAR_3);
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_2 & VAR_1);
 FUNC_3(&VAR_0->spin_lock, VAR_3);
}
