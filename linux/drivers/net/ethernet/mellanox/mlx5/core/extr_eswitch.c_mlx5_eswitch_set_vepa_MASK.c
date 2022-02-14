
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_eswitch {scalar_t__ mode; int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_eswitch*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mlx5_eswitch*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mlx5_eswitch *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_3)
  return -VAR_0;

 if (!FUNC_0(VAR_3))
  return -VAR_1;

 FUNC_2(&VAR_3->state_lock);
 if (VAR_3->mode != VAR_2) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_4);

out:
 FUNC_3(&VAR_3->state_lock);
 return VAR_5;
}
