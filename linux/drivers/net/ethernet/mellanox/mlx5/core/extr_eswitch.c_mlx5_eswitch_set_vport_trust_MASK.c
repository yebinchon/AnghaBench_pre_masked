
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int trusted; } ;
struct mlx5_vport {scalar_t__ enabled; TYPE_1__ info; } ;
struct mlx5_eswitch {int state_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_eswitch*) ;
 scalar_t__ FUNC_1 (struct mlx5_vport*) ;
 int FUNC_2 (struct mlx5_vport*) ;
 int FUNC_3 (struct mlx5_vport*) ;
 struct mlx5_vport* FUNC_4 (struct mlx5_eswitch*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mlx5_eswitch *VAR_1,
     u16 VAR_2, bool VAR_3)
{
 struct mlx5_vport *VAR_4 = FUNC_4(VAR_1, VAR_2);

 if (!FUNC_0(VAR_1))
  return -VAR_0;
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 FUNC_5(&VAR_1->state_lock);
 VAR_4->info.trusted = VAR_3;
 if (VAR_4->enabled)
  FUNC_3(VAR_4);
 FUNC_6(&VAR_1->state_lock);

 return 0;
}
