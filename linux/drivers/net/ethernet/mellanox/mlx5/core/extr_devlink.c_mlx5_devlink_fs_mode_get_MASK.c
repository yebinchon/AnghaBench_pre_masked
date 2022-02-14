
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* steering; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_6__ {int vstr; } ;
struct devlink_param_gset_ctx {TYPE_3__ val; } ;
struct devlink {int dummy; } ;
struct TYPE_4__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 struct mlx5_core_dev* FUNC_0 (struct devlink*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct devlink *VAR_1, u32 VAR_2,
        struct devlink_param_gset_ctx *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->priv.steering->mode == VAR_0)
  FUNC_1(VAR_3->val.vstr, "smfs");
 else
  FUNC_1(VAR_3->val.vstr, "dmfs");
 return 0;
}
