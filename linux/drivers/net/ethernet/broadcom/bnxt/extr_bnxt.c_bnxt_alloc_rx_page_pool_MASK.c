
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_pool_params {int dma_dir; int * dev; int nid; int pool_size; int member_0; } ;
struct bnxt_rx_ring_info {int * page_pool; } ;
struct bnxt {TYPE_1__* pdev; int rx_ring_size; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct page_pool_params*) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_1,
       struct bnxt_rx_ring_info *VAR_2)
{
 struct page_pool_params VAR_3 = { 0 };

 VAR_3.pool_size = VAR_1->rx_ring_size;
 VAR_3.nid = FUNC_2(&VAR_1->pdev->dev);
 VAR_3.dev = &VAR_1->pdev->dev;
 VAR_3.dma_dir = VAR_0;

 VAR_2->page_pool = FUNC_3(&VAR_3);
 if (FUNC_0(VAR_2->page_pool)) {
  int VAR_4 = FUNC_1(VAR_2->page_pool);

  VAR_2->page_pool = ((void*)0);
  return VAR_4;
 }
 return 0;
}
