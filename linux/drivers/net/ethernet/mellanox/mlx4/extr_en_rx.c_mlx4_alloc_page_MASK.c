
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mlx4_en_rx_alloc {int page_offset; int dma; struct page* page; } ;
struct mlx4_en_priv {int rx_headroom; int ddev; int dma_dir; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct page*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mlx4_en_priv *VAR_2,
      struct mlx4_en_rx_alloc *VAR_3,
      gfp_t VAR_4)
{
 struct page *VAR_5;
 dma_addr_t VAR_6;

 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_4(!VAR_5))
  return -VAR_0;
 VAR_6 = FUNC_2(VAR_2->ddev, VAR_5, 0, VAR_1, VAR_2->dma_dir);
 if (FUNC_4(FUNC_3(VAR_2->ddev, VAR_6))) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }
 VAR_3->page = VAR_5;
 VAR_3->dma = VAR_6;
 VAR_3->page_offset = VAR_2->rx_headroom;
 return 0;
}
