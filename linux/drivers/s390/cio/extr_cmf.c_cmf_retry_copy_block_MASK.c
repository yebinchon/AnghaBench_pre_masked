
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct copy_block_struct {int wait; int ret; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct copy_block_struct* cmb_wait; } ;


 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ccw_device *VAR_0)
{
 struct copy_block_struct *VAR_1 = VAR_0->private->cmb_wait;

 if (!VAR_1)
  return;

 VAR_1->ret = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->wait);
}
