
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int link_state; } ;
struct mlx5_vport {TYPE_1__ info; } ;
struct mlx5_eswitch {int state_lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_eswitch*) ;
 scalar_t__ FUNC_1 (struct mlx5_vport*) ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5_vport*) ;
 int FUNC_3 (int ,char*,int ,int) ;
 struct mlx5_vport* FUNC_4 (struct mlx5_eswitch*,int ) ;
 int FUNC_5 (int ,int ,int ,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mlx5_eswitch *VAR_2,
     u16 VAR_3, int VAR_4)
{
 struct mlx5_vport *VAR_5 = FUNC_4(VAR_2, VAR_3);
 int VAR_6 = 0;

 if (!FUNC_0(VAR_2))
  return -VAR_0;
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 FUNC_6(&VAR_2->state_lock);

 VAR_6 = FUNC_5(VAR_2->dev,
         VAR_1,
         VAR_3, 1, VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_2->dev,
          "Failed to set vport %d link state, err = %d",
          VAR_3, VAR_6);
  goto unlock;
 }

 VAR_5->info.link_state = VAR_4;

unlock:
 FUNC_7(&VAR_2->state_lock);
 return 0;
}
