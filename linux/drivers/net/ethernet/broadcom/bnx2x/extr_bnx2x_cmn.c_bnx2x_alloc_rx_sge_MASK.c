
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_rx_page {scalar_t__ offset; int * page; } ;
struct eth_rx_sge {void* addr_lo; void* addr_hi; } ;
struct bnx2x_alloc_pool {scalar_t__ offset; int * page; } ;
struct bnx2x_fastpath {struct bnx2x_alloc_pool page_pool; struct eth_rx_sge* rx_sge_ring; struct sw_rx_page* rx_page_ring; } ;
struct bnx2x {TYPE_1__* pdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct sw_rx_page*,int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct bnx2x *VAR_5, struct bnx2x_fastpath *VAR_6,
         u16 VAR_7, gfp_t VAR_8)
{
 struct sw_rx_page *VAR_9 = &VAR_6->rx_page_ring[VAR_7];
 struct eth_rx_sge *VAR_10 = &VAR_6->rx_sge_ring[VAR_7];
 struct bnx2x_alloc_pool *VAR_11 = &VAR_6->page_pool;
 dma_addr_t VAR_12;

 if (!VAR_11->page) {
  VAR_11->page = FUNC_3(VAR_8, VAR_2);
  if (FUNC_9(!VAR_11->page))
   return -VAR_1;

  VAR_11->offset = 0;
 }

 VAR_12 = FUNC_5(&VAR_5->pdev->dev, VAR_11->page,
          VAR_11->offset, VAR_4, VAR_0);
 if (FUNC_9(FUNC_6(&VAR_5->pdev->dev, VAR_12))) {
  FUNC_0("Can't map sge\n");
  return -VAR_1;
 }

 VAR_9->page = VAR_11->page;
 VAR_9->offset = VAR_11->offset;

 FUNC_7(VAR_9, VAR_12, VAR_12);

 VAR_10->addr_hi = FUNC_4(FUNC_1(VAR_12));
 VAR_10->addr_lo = FUNC_4(FUNC_2(VAR_12));

 VAR_11->offset += VAR_4;
 if (VAR_3 - VAR_11->offset >= VAR_4)
  FUNC_8(VAR_11->page);
 else
  VAR_11->page = ((void*)0);
 return 0;
}
