
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_alloc {scalar_t__ page; int dma; } ;
struct mlx4_en_priv {int dma_dir; int ddev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct mlx4_en_rx_alloc*,int ,int) ;

__attribute__((used)) static void FUNC_3(const struct mlx4_en_priv *VAR_1,
         struct mlx4_en_rx_alloc *VAR_2)
{
 if (VAR_2->page) {
  FUNC_1(VAR_1->ddev, VAR_2->dma,
          VAR_0, VAR_1->dma_dir);
  FUNC_0(VAR_2->page);
 }



 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
}
