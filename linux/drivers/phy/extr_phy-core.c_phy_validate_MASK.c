
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union phy_configure_opts {int dummy; } phy_configure_opts ;
struct phy {int mutex; TYPE_1__* ops; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;
struct TYPE_2__ {int (* validate ) (struct phy*,int,int,union phy_configure_opts*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy*,int,int,union phy_configure_opts*) ;

int FUNC_3(struct phy *VAR_2, enum phy_mode VAR_3, int VAR_4,
   union phy_configure_opts *VAR_5)
{
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;

 if (!VAR_2->ops->validate)
  return -VAR_1;

 FUNC_0(&VAR_2->mutex);
 VAR_6 = VAR_2->ops->validate(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_2->mutex);

 return VAR_6;
}
