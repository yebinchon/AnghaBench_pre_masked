
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {unsigned int num_chips; unsigned int** regs; int regs_lock; } ;
struct ni_gpct {unsigned int chip_index; struct ni_gpct_device* counter_dev; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;


 int VAR_0 ;
 int FUNC_0 (struct ni_gpct*,unsigned int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ni_gpct *VAR_1,
          enum ni_gpct_register VAR_2,
          unsigned int VAR_3, unsigned int VAR_4,
          unsigned int VAR_5)
{
 struct ni_gpct_device *VAR_6 = VAR_1->counter_dev;
 unsigned int VAR_7 = VAR_1->chip_index;
 unsigned long VAR_8;

 if (VAR_2 < VAR_0 && VAR_7 < VAR_6->num_chips) {
  unsigned int *VAR_9 = VAR_6->regs[VAR_7];

  FUNC_1(&VAR_6->regs_lock, VAR_8);
  VAR_9[VAR_2] &= ~VAR_3;
  VAR_9[VAR_2] |= (VAR_4 & VAR_3);
  FUNC_0(VAR_1, VAR_9[VAR_2] | VAR_5, VAR_2);
  FUNC_2(&VAR_6->regs_lock, VAR_8);
 }
}
