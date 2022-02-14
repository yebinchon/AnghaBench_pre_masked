
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_rx_data {int mapping; struct page* data; scalar_t__ page_offset; } ;
struct qede_rx_queue {int filled_buffers; size_t sw_rx_prod; scalar_t__ rx_headroom; int rx_bd_ring; struct sw_rx_data* sw_rx_ring; int dev; int data_direction; } ;
struct page {int dummy; } ;
struct TYPE_2__ {void* lo; void* hi; } ;
struct eth_rx_bd {TYPE_1__ addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ,int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,struct page*,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11(struct qede_rx_queue *VAR_4, bool VAR_5)
{
 struct sw_rx_data *VAR_6;
 struct eth_rx_bd *VAR_7;
 dma_addr_t VAR_8;
 struct page *VAR_9;





 if (VAR_5 && FUNC_6(VAR_4->filled_buffers > 12)) {
  VAR_4->filled_buffers--;
  return 0;
 }

 VAR_9 = FUNC_2(VAR_1, 0);
 if (FUNC_9(!VAR_9))
  return -VAR_0;




 VAR_8 = FUNC_4(VAR_4->dev, VAR_9, 0,
          VAR_3, VAR_4->data_direction);
 if (FUNC_9(FUNC_5(VAR_4->dev, VAR_8))) {
  FUNC_1(VAR_9);
  return -VAR_0;
 }

 VAR_6 = &VAR_4->sw_rx_ring[VAR_4->sw_rx_prod & VAR_2];
 VAR_6->page_offset = 0;
 VAR_6->data = VAR_9;
 VAR_6->mapping = VAR_8;


 VAR_7 = (struct eth_rx_bd *)FUNC_8(&VAR_4->rx_bd_ring);
 FUNC_0(!VAR_7);
 VAR_7->addr.hi = FUNC_3(FUNC_10(VAR_8));
 VAR_7->addr.lo = FUNC_3(FUNC_7(VAR_8) +
         VAR_4->rx_headroom);

 VAR_4->sw_rx_prod++;
 VAR_4->filled_buffers++;

 return 0;
}
