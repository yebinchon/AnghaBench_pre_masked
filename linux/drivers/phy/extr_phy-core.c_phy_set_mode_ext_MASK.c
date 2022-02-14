
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct phy {int mutex; TYPE_2__ attrs; TYPE_1__* ops; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;
struct TYPE_3__ {int (* set_mode ) (struct phy*,int,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy*,int,int) ;

int FUNC_3(struct phy *VAR_0, enum phy_mode VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_0 || !VAR_0->ops->set_mode)
  return 0;

 FUNC_0(&VAR_0->mutex);
 VAR_3 = VAR_0->ops->set_mode(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  VAR_0->attrs.mode = VAR_1;
 FUNC_1(&VAR_0->mutex);

 return VAR_3;
}
