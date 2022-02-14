
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union phy_configure_opts {int dummy; } phy_configure_opts ;
struct phy {int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* configure ) (struct phy*,union phy_configure_opts*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy*,union phy_configure_opts*) ;

int FUNC_3(struct phy *VAR_2, union phy_configure_opts *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 if (!VAR_2->ops->configure)
  return -VAR_1;

 FUNC_0(&VAR_2->mutex);
 VAR_4 = VAR_2->ops->configure(VAR_2, VAR_3);
 FUNC_1(&VAR_2->mutex);

 return VAR_4;
}
