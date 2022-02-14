
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dev; TYPE_1__* ops; int mutex; } ;
struct TYPE_2__ {int owner; int (* release ) (struct phy*) ;} ;


 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct phy*) ;

void FUNC_6(struct phy *VAR_0)
{
 if (!VAR_0 || FUNC_0(VAR_0))
  return;

 FUNC_2(&VAR_0->mutex);
 if (VAR_0->ops->release)
  VAR_0->ops->release(VAR_0);
 FUNC_3(&VAR_0->mutex);

 FUNC_1(VAR_0->ops->owner);
 FUNC_4(&VAR_0->dev);
}
