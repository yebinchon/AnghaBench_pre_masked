
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct device {int dummy; } ;
struct bnxt_rx_ring_info {int page_pool; } ;
struct bnxt {scalar_t__ rx_dma_offset; int rx_dir; TYPE_1__* pdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct page*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct page*) ;

__attribute__((used)) static struct page *FUNC_4(struct bnxt *VAR_2, dma_addr_t *VAR_3,
      struct bnxt_rx_ring_info *VAR_4,
      gfp_t VAR_5)
{
 struct device *VAR_6 = &VAR_2->pdev->dev;
 struct page *VAR_7;

 VAR_7 = FUNC_2(VAR_4->page_pool);
 if (!VAR_7)
  return ((void*)0);

 *VAR_3 = FUNC_0(VAR_6, VAR_7, 0, VAR_1, VAR_2->rx_dir,
          VAR_0);
 if (FUNC_1(VAR_6, *VAR_3)) {
  FUNC_3(VAR_4->page_pool, VAR_7);
  return ((void*)0);
 }
 *VAR_3 += VAR_2->rx_dma_offset;
 return VAR_7;
}
