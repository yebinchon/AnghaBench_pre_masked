
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_lag {int * v2p_map; TYPE_1__* pf; } ;
struct mlx5_core_dev {int dummy; } ;
struct lag_tracker {int dummy; } ;
struct TYPE_2__ {struct mlx5_core_dev* dev; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int ,int ) ;
 int FUNC_3 (struct lag_tracker*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5_lag *VAR_0,
      struct lag_tracker *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_0->pf[0].dev;
 int VAR_3;

 FUNC_3(VAR_1, &VAR_0->v2p_map[0],
           &VAR_0->v2p_map[1]);

 FUNC_2(VAR_2, "lag map port 1:%d port 2:%d",
         VAR_0->v2p_map[0], VAR_0->v2p_map[1]);

 VAR_3 = FUNC_0(VAR_2, VAR_0->v2p_map[0], VAR_0->v2p_map[1]);
 if (VAR_3)
  FUNC_1(VAR_2,
         "Failed to create LAG (%d)\n",
         VAR_3);
 return VAR_3;
}
