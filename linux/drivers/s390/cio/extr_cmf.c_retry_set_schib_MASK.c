
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct set_schib_struct {int wait; int address; int mbfc; int mme; int ret; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct set_schib_struct* cmb_wait; } ;


 int FUNC_0 (struct ccw_device*,int ,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ccw_device *VAR_0)
{
 struct set_schib_struct *VAR_1 = VAR_0->private->cmb_wait;

 if (!VAR_1)
  return;

 VAR_1->ret = FUNC_0(VAR_0, VAR_1->mme, VAR_1->mbfc,
      VAR_1->address);
 FUNC_1(&VAR_1->wait);
}
