
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlx5_lag {scalar_t__* v2p_map; TYPE_1__* pf; } ;
struct mlx5_core_dev {int dummy; } ;
struct lag_tracker {int dummy; } ;
struct TYPE_2__ {struct mlx5_core_dev* dev; } ;


 int FUNC_0 (struct mlx5_core_dev*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct lag_tracker*,scalar_t__*,scalar_t__*) ;

void FUNC_4(struct mlx5_lag *VAR_0,
       struct lag_tracker *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_0->pf[0].dev;
 u8 VAR_3, VAR_4;
 int VAR_5;

 FUNC_3(VAR_1, &VAR_3,
           &VAR_4);

 if (VAR_3 != VAR_0->v2p_map[0] ||
     VAR_4 != VAR_0->v2p_map[1]) {
  VAR_0->v2p_map[0] = VAR_3;
  VAR_0->v2p_map[1] = VAR_4;

  FUNC_2(VAR_2, "modify lag map port 1:%d port 2:%d",
          VAR_0->v2p_map[0], VAR_0->v2p_map[1]);

  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (VAR_5)
   FUNC_1(VAR_2,
          "Failed to modify LAG (%d)\n",
          VAR_5);
 }
}
