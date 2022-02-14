
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atl1e_tx_ring {int next_to_clean; scalar_t__ next_to_use; } ;
struct atl1e_rx_ring {struct atl1e_rx_page_desc* rx_page_desc; } ;
struct atl1e_rx_page_desc {TYPE_1__* rx_page; scalar_t__ rx_nxseq; scalar_t__ rx_using; } ;
struct atl1e_adapter {int num_rx_queues; struct atl1e_rx_ring rx_ring; struct atl1e_tx_ring tx_ring; } ;
struct TYPE_2__ {scalar_t__ read_offset; scalar_t__* write_offset_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct atl1e_adapter *VAR_1)
{
 struct atl1e_tx_ring *VAR_2 = ((void*)0);
 struct atl1e_rx_ring *VAR_3 = ((void*)0);
 struct atl1e_rx_page_desc *VAR_4 = ((void*)0);
 int VAR_5, VAR_6;

 VAR_2 = &VAR_1->tx_ring;
 VAR_3 = &VAR_1->rx_ring;
 VAR_4 = VAR_3->rx_page_desc;

 VAR_2->next_to_use = 0;
 FUNC_0(&VAR_2->next_to_clean, 0);

 for (VAR_5 = 0; VAR_5 < VAR_1->num_rx_queues; VAR_5++) {
  VAR_4[VAR_5].rx_using = 0;
  VAR_4[VAR_5].rx_nxseq = 0;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   *VAR_4[VAR_5].rx_page[VAR_6].write_offset_addr = 0;
   VAR_4[VAR_5].rx_page[VAR_6].read_offset = 0;
  }
 }
}
