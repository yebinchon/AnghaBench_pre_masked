
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_ring {int size; scalar_t__ prod; scalar_t__ cons; } ;
struct mlx4_en_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int,...) ;
 int FUNC_1 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,int) ;

__attribute__((used)) static void FUNC_2(struct mlx4_en_priv *VAR_1,
    struct mlx4_en_rx_ring *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_1, "Freeing Rx buf - cons:%d prod:%d\n",
        VAR_2->cons, VAR_2->prod);


 for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++) {
  FUNC_0(VAR_0, VAR_1, "Processing descriptor:%d\n", VAR_3);
  FUNC_1(VAR_1, VAR_2, VAR_3);
 }
 VAR_2->cons = 0;
 VAR_2->prod = 0;
}
