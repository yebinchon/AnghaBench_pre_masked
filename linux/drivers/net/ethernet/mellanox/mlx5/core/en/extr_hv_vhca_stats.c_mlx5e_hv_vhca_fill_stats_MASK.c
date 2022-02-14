
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int max_nch; } ;
struct mlx5e_hv_vhca_per_ring_stats {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx5e_priv*,int,void*) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_0, void *VAR_1,
         int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->max_nch; VAR_3++) {
  void *VAR_5 = VAR_1 + VAR_4;

  if (FUNC_0(VAR_5 +
     sizeof(struct mlx5e_hv_vhca_per_ring_stats) >
     VAR_1 + VAR_2))
   return;

  FUNC_1(VAR_0, VAR_3, VAR_5);
  VAR_4 += sizeof(struct mlx5e_hv_vhca_per_ring_stats);
 }
}
