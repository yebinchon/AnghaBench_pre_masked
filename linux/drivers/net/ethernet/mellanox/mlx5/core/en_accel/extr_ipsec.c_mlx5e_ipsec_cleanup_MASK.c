
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {struct mlx5e_ipsec* ipsec; } ;
struct mlx5e_ipsec {int halloc; int wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_ipsec*) ;

void FUNC_4(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_ipsec *VAR_1 = VAR_0->ipsec;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1->wq);
 FUNC_0(VAR_1->wq);

 FUNC_2(&VAR_1->halloc);
 FUNC_3(VAR_1);
 VAR_0->ipsec = ((void*)0);
}
