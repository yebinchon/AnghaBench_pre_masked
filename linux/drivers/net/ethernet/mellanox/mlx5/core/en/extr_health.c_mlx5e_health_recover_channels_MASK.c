
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int state_lock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct mlx5e_priv *VAR_1)
{
 int VAR_2 = 0;

 FUNC_3();
 FUNC_1(&VAR_1->state_lock);

 if (!FUNC_5(VAR_0, &VAR_1->state))
  goto out;

 VAR_2 = FUNC_0(VAR_1);

out:
 FUNC_2(&VAR_1->state_lock);
 FUNC_4();

 return VAR_2;
}
