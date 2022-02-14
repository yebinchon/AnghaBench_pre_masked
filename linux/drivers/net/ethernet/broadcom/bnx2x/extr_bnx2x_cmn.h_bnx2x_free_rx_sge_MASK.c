
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_rx_page {struct page* page; } ;
struct page {int dummy; } ;
struct eth_rx_sge {scalar_t__ addr_lo; scalar_t__ addr_hi; } ;
struct bnx2x_fastpath {struct eth_rx_sge* rx_sge_ring; struct sw_rx_page* rx_page_ring; } ;
struct bnx2x {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sw_rx_page*,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_3,
         struct bnx2x_fastpath *VAR_4, u16 VAR_5)
{
 struct sw_rx_page *VAR_6 = &VAR_4->rx_page_ring[VAR_5];
 struct page *VAR_7 = VAR_6->page;
 struct eth_rx_sge *VAR_8 = &VAR_4->rx_sge_ring[VAR_5];


 if (!VAR_7)
  return;




 FUNC_1(&VAR_3->pdev->dev, FUNC_0(VAR_6, VAR_2),
         VAR_1, VAR_0);

 FUNC_2(VAR_7);

 VAR_6->page = ((void*)0);
 VAR_8->addr_hi = 0;
 VAR_8->addr_lo = 0;
}
