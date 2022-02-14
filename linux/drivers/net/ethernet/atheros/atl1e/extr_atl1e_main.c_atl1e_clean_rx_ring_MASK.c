
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct atl1e_rx_ring {int real_page_size; struct atl1e_rx_page_desc* rx_page_desc; } ;
struct atl1e_rx_page_desc {TYPE_1__* rx_page; } ;
struct atl1e_adapter {size_t num_rx_queues; int * ring_vir_addr; struct atl1e_rx_ring rx_ring; } ;
struct TYPE_2__ {int * addr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct atl1e_adapter *VAR_1)
{
 struct atl1e_rx_ring *VAR_2 =
  &VAR_1->rx_ring;
 struct atl1e_rx_page_desc *VAR_3 = VAR_2->rx_page_desc;
 u16 VAR_4, VAR_5;


 if (VAR_1->ring_vir_addr == ((void*)0))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_rx_queues; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_3[VAR_4].rx_page[VAR_5].addr != ((void*)0)) {
    FUNC_0(VAR_3[VAR_4].rx_page[VAR_5].addr, 0,
      VAR_2->real_page_size);
   }
  }
 }
}
