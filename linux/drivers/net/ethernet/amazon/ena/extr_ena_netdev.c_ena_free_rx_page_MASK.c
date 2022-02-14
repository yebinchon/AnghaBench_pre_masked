
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ena_com_buf {int paddr; } ;
struct ena_rx_buffer {struct page* page; struct ena_com_buf ena_buf; } ;
struct ena_ring {int dev; int netdev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ena_ring *VAR_3,
        struct ena_rx_buffer *VAR_4)
{
 struct page *VAR_5 = VAR_4->page;
 struct ena_com_buf *VAR_6 = &VAR_4->ena_buf;

 if (FUNC_3(!VAR_5)) {
  FUNC_2(VAR_3->adapter, VAR_2, VAR_3->netdev,
      "Trying to free unallocated buffer\n");
  return;
 }

 FUNC_1(VAR_3->dev, VAR_6->paddr, VAR_1,
         VAR_0);

 FUNC_0(VAR_5);
 VAR_4->page = ((void*)0);
}
