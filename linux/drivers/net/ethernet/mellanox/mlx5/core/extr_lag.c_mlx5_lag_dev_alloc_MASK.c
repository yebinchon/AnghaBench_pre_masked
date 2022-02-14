
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_lag {int bond_work; int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct mlx5_lag*) ;
 struct mlx5_lag* FUNC_3 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct mlx5_lag *FUNC_4(void)
{
 struct mlx5_lag *VAR_2;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->wq = FUNC_1("mlx5_lag");
 if (!VAR_2->wq) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_0(&VAR_2->bond_work, VAR_1);

 return VAR_2;
}
