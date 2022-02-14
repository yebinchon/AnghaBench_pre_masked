
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_tc_flow {int dummy; } ;
struct mlx5e_priv {int netdev; TYPE_2__* mdev; } ;
struct mlx5_eswitch {scalar_t__ mode; } ;
struct TYPE_6__ {int extack; } ;
struct flow_cls_offload {TYPE_3__ common; } ;
struct TYPE_4__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_5__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long*) ;
 int FUNC_1 (struct mlx5e_priv*,struct flow_cls_offload*,unsigned long,struct net_device*,struct mlx5e_tc_flow**) ;
 int FUNC_2 (struct mlx5e_priv*,struct flow_cls_offload*,unsigned long,struct net_device*,struct mlx5e_tc_flow**) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct mlx5e_priv *VAR_2,
    struct flow_cls_offload *VAR_3,
    unsigned long VAR_4,
    struct net_device *VAR_5,
    struct mlx5e_tc_flow **VAR_6)
{
 struct mlx5_eswitch *VAR_7 = VAR_2->mdev->priv.eswitch;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_0(VAR_4, &VAR_8);

 if (!FUNC_3(VAR_2->netdev, VAR_3->common.extack))
  return -VAR_0;

 if (VAR_7 && VAR_7->mode == VAR_1)
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_8,
      VAR_5, VAR_6);
 else
  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_8,
      VAR_5, VAR_6);

 return VAR_9;
}
