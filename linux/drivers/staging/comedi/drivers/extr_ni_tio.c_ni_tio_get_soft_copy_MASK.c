
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {unsigned int num_chips; unsigned int** regs; int regs_lock; } ;
struct ni_gpct {unsigned int chip_index; struct ni_gpct_device* counter_dev; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

unsigned int FUNC_2(const struct ni_gpct *VAR_1,
      enum ni_gpct_register VAR_2)
{
 struct ni_gpct_device *VAR_3 = VAR_1->counter_dev;
 unsigned int VAR_4 = VAR_1->chip_index;
 unsigned int VAR_5 = 0;
 unsigned long VAR_6;

 if (VAR_2 < VAR_0 && VAR_4 < VAR_3->num_chips) {
  FUNC_0(&VAR_3->regs_lock, VAR_6);
  VAR_5 = VAR_3->regs[VAR_4][VAR_2];
  FUNC_1(&VAR_3->regs_lock, VAR_6);
 }
 return VAR_5;
}
