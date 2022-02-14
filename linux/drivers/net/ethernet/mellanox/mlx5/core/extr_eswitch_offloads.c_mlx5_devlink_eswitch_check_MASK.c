
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eswitch; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct devlink {int dummy; } ;
struct TYPE_3__ {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 scalar_t__ VAR_3 ;
 struct mlx5_core_dev* FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct devlink *VAR_5)
{
 struct mlx5_core_dev *VAR_6 = FUNC_2(VAR_5);

 if (FUNC_0(VAR_6, VAR_4) != VAR_2)
  return -VAR_0;

 if(!FUNC_1(VAR_6))
  return -VAR_1;

 if (VAR_6->priv.eswitch->mode == VAR_3 &&
     !FUNC_3(VAR_6))
  return -VAR_0;

 return 0;
}
