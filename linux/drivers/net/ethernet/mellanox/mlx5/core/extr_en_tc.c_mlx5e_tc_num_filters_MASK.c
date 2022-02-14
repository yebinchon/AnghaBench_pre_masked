
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int nelems; } ;
struct mlx5e_priv {int dummy; } ;


 int FUNC_0 (int *) ;
 struct rhashtable* FUNC_1 (struct mlx5e_priv*,unsigned long) ;

int FUNC_2(struct mlx5e_priv *VAR_0, unsigned long VAR_1)
{
 struct rhashtable *VAR_2 = FUNC_1(VAR_0, VAR_1);

 return FUNC_0(&VAR_2->nelems);
}
