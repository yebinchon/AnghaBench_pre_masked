
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reset ) (struct phy*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy*) ;
 int FUNC_3 (struct phy*) ;
 int FUNC_4 (struct phy*) ;

int FUNC_5(struct phy *VAR_1)
{
 int VAR_2;

 if (!VAR_1 || !VAR_1->ops->reset)
  return 0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0 && VAR_2 != -VAR_0)
  return VAR_2;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = VAR_1->ops->reset(VAR_1);
 FUNC_1(&VAR_1->mutex);

 FUNC_3(VAR_1);

 return VAR_2;
}
