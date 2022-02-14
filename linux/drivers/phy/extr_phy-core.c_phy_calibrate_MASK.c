
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* calibrate ) (struct phy*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy*) ;

int FUNC_3(struct phy *VAR_0)
{
 int VAR_1;

 if (!VAR_0 || !VAR_0->ops->calibrate)
  return 0;

 FUNC_0(&VAR_0->mutex);
 VAR_1 = VAR_0->ops->calibrate(VAR_0);
 FUNC_1(&VAR_0->mutex);

 return VAR_1;
}
