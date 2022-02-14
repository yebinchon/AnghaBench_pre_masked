
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; int lock; int state; int state_queue; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* remove ) (struct phy_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct phy_device*,int) ;
 int FUNC_4 (struct phy_device*) ;
 struct phy_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct phy_device *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(&VAR_2->state_queue);

 FUNC_1(&VAR_2->lock);
 VAR_2->state = VAR_0;
 FUNC_2(&VAR_2->lock);

 if (VAR_2->drv && VAR_2->drv->remove) {
  VAR_2->drv->remove(VAR_2);


  FUNC_3(VAR_2, 1);
 }
 VAR_2->drv = ((void*)0);

 return 0;
}
