
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tls {int dummy; } ;
struct mlx5e_priv {struct mlx5e_tls* tls; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5e_tls* FUNC_0 (int,int ) ;

int FUNC_1(struct mlx5e_priv *VAR_2)
{
 struct mlx5e_tls *VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);

 if (!VAR_3)
  return -VAR_0;

 VAR_2->tls = VAR_3;
 return 0;
}
