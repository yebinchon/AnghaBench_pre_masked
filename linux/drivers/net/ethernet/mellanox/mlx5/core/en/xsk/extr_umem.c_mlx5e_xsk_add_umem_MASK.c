
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct xdp_umem {int dummy; } ;
struct mlx5e_xsk {struct xdp_umem** umems; } ;


 int FUNC_0 (struct mlx5e_xsk*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_xsk *VAR_0, struct xdp_umem *VAR_1, u16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_0->umems[VAR_2] = VAR_1;
 return 0;
}
