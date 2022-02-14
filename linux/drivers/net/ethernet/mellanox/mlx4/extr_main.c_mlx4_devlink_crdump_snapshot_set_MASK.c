
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_dev {TYPE_2__* persist; } ;
struct mlx4_priv {struct mlx4_dev dev; } ;
struct TYPE_6__ {int vbool; } ;
struct devlink_param_gset_ctx {TYPE_3__ val; } ;
struct devlink {int dummy; } ;
struct TYPE_4__ {int snapshot_enable; } ;
struct TYPE_5__ {TYPE_1__ crdump; } ;


 struct mlx4_priv* FUNC_0 (struct devlink*) ;

__attribute__((used)) static int FUNC_1(struct devlink *VAR_0, u32 VAR_1,
         struct devlink_param_gset_ctx *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_0(VAR_0);
 struct mlx4_dev *VAR_4 = &VAR_3->dev;

 VAR_4->persist->crdump.snapshot_enable = VAR_2->val.vbool;
 return 0;
}
