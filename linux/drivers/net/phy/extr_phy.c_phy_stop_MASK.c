
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct phy_device {TYPE_1__ state_queue; int lock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct phy_device*) ;

void FUNC_7(struct phy_device *VAR_1)
{
 if (!FUNC_3(VAR_1)) {
  FUNC_0(1, "called from state %s\n",
       FUNC_5(VAR_1->state));
  return;
 }

 FUNC_1(&VAR_1->lock);

 VAR_1->state = VAR_0;

 FUNC_2(&VAR_1->lock);

 FUNC_4(&VAR_1->state_queue.work);
 FUNC_6(VAR_1);





}
