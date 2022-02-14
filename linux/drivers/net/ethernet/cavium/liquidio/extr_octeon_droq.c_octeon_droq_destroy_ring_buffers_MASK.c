
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct octeon_skb_page_info {scalar_t__ page; scalar_t__ dma; } ;
struct octeon_droq {size_t max_count; TYPE_1__* recv_buf_list; } ;
struct octeon_device {int pci_dev; } ;
struct TYPE_2__ {int * buffer; struct octeon_skb_page_info pg_info; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct octeon_droq*) ;
 int FUNC_2 (int *,struct octeon_skb_page_info*) ;

__attribute__((used)) static void
FUNC_3(struct octeon_device *VAR_0,
     struct octeon_droq *VAR_1)
{
 u32 VAR_2;
 struct octeon_skb_page_info *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->max_count; VAR_2++) {
  VAR_3 = &VAR_1->recv_buf_list[VAR_2].pg_info;
  if (!VAR_3)
   continue;

  if (VAR_3->dma)
   FUNC_0(VAR_0->pci_dev,
           (u64)VAR_3->dma);
  VAR_3->dma = 0;

  if (VAR_3->page)
   FUNC_2(VAR_1->recv_buf_list[VAR_2].buffer,
         VAR_3);

  VAR_1->recv_buf_list[VAR_2].buffer = ((void*)0);
 }

 FUNC_1(VAR_1);
}
