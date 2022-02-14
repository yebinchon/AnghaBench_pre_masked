
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {scalar_t__ ppriv; int mdev; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct mlx5e_priv *VAR_0)
{
 return (FUNC_0(VAR_0->mdev) && VAR_0->ppriv);
}
