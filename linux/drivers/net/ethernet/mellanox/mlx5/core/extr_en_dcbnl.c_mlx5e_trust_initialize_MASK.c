
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dscp2prio; int trust_state; } ;
struct TYPE_3__ {int params; } ;
struct mlx5e_priv {TYPE_2__ dcbx_dp; struct mlx5_core_dev* mdev; TYPE_1__ channels; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct mlx5e_priv*,int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->mdev;
 int VAR_3;

 VAR_1->dcbx_dp.trust_state = VAR_0;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_2(VAR_1->mdev, &VAR_1->dcbx_dp.trust_state);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_1, &VAR_1->channels.params);

 VAR_3 = FUNC_1(VAR_1->mdev, VAR_1->dcbx_dp.dscp2prio);
 if (VAR_3)
  return VAR_3;

 return 0;
}
