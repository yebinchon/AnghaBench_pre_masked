
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tls {int dummy; } ;
struct mlx5e_priv {struct mlx5e_tls* tls; } ;


 int FUNC_0 (struct mlx5e_tls*) ;

void FUNC_1(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_tls *VAR_1 = VAR_0->tls;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1);
 VAR_0->tls = ((void*)0);
}
