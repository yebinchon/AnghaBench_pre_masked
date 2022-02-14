
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int * notifier_call; } ;
struct mlx5_lag {TYPE_2__ nb; } ;
struct TYPE_3__ {struct mlx5_lag* lag; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_core_dev*,char*,...) ;
 struct mlx5_core_dev* FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_lag*,struct mlx5_core_dev*,struct net_device*) ;
 struct mlx5_lag* FUNC_4 () ;
 int FUNC_5 (struct mlx5_lag*) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_4 ;

void FUNC_7(struct mlx5_core_dev *VAR_5, struct net_device *VAR_6)
{
 struct mlx5_lag *VAR_7 = ((void*)0);
 struct mlx5_core_dev *VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_5, VAR_4) ||
     !FUNC_0(VAR_5, VAR_1) ||
     (FUNC_0(VAR_5, VAR_3) != VAR_0))
  return;

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8)
  VAR_7 = VAR_8->priv.lag;

 if (!VAR_7) {
  VAR_7 = FUNC_4();
  if (!VAR_7) {
   FUNC_1(VAR_5, "Failed to alloc lag dev\n");
   return;
  }
 }

 FUNC_3(VAR_7, VAR_5, VAR_6);

 if (!VAR_7->nb.notifier_call) {
  VAR_7->nb.notifier_call = VAR_2;
  if (FUNC_6(&VAR_7->nb)) {
   VAR_7->nb.notifier_call = ((void*)0);
   FUNC_1(VAR_5, "Failed to register LAG netdev notifier\n");
  }
 }

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  FUNC_1(VAR_5, "Failed to init multipath lag err=%d\n",
         VAR_9);
}
