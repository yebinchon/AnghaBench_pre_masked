
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_devcom_list {int dummy; } ;
struct mlx5_devcom {int idx; struct mlx5_devcom_list* priv; } ;


 int VAR_0 ;
 struct mlx5_devcom* FUNC_0 (int,int ) ;

__attribute__((used)) static struct mlx5_devcom *FUNC_1(struct mlx5_devcom_list *VAR_1,
          u8 VAR_2)
{
 struct mlx5_devcom *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->priv = VAR_1;
 VAR_3->idx = VAR_2;
 return VAR_3;
}
