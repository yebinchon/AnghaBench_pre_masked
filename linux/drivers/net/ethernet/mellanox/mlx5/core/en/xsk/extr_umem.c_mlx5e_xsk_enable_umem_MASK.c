
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xdp_umem {int dummy; } ;
struct mlx5e_priv {int state_lock; } ;


 int FUNC_0 (struct mlx5e_priv*,struct xdp_umem*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_0, struct xdp_umem *VAR_1,
     u16 VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->state_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->state_lock);

 return VAR_3;
}
