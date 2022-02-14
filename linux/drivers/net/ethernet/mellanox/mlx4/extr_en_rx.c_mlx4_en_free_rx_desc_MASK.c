
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_ring {struct mlx4_en_rx_alloc* rx_info; } ;
struct mlx4_en_rx_alloc {int dummy; } ;
struct mlx4_en_priv {int log_rx_info; int num_frags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv const*,char*,int) ;
 int FUNC_1 (struct mlx4_en_priv const*,struct mlx4_en_rx_alloc*) ;

__attribute__((used)) static void FUNC_2(const struct mlx4_en_priv *VAR_1,
     struct mlx4_en_rx_ring *VAR_2,
     int VAR_3)
{
 struct mlx4_en_rx_alloc *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->rx_info + (VAR_3 << VAR_1->log_rx_info);
 for (VAR_5 = 0; VAR_5 < VAR_1->num_frags; VAR_5++) {
  FUNC_0(VAR_0, VAR_1, "Freeing fragment:%d\n", VAR_5);
  FUNC_1(VAR_1, VAR_4 + VAR_5);
 }
}
