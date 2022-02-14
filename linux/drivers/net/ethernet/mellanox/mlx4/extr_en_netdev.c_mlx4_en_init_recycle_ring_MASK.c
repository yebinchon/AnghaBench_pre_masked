
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_tx_ring {int recycle_ring; int free_tx_desc; } ;
struct mlx4_en_priv {int * rx_ring; struct mlx4_en_tx_ring*** tx_ring; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,size_t,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct mlx4_en_priv *VAR_3,
          int VAR_4)
{
 struct mlx4_en_tx_ring *VAR_5 = VAR_3->tx_ring[VAR_1][VAR_4];
 int VAR_6 = VAR_4;

 VAR_5->free_tx_desc = VAR_2;
 VAR_5->recycle_ring = VAR_3->rx_ring[VAR_6];
 FUNC_0(VAR_0, VAR_3, "Set tx_ring[%d][%d]->recycle_ring = rx_ring[%d]\n",
        VAR_1, VAR_4, VAR_6);
}
