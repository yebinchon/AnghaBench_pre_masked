
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atl1e_rx_ring {int * desc; scalar_t__ real_page_size; scalar_t__ page_size; } ;
struct TYPE_4__ {int tx_lock; } ;
struct TYPE_3__ {scalar_t__ max_frame_size; } ;
struct atl1e_adapter {TYPE_2__ tx_ring; struct atl1e_rx_ring rx_ring; int * ring_vir_addr; int ring_size; TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct atl1e_adapter*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct atl1e_adapter *VAR_3)
{
 struct atl1e_rx_ring *VAR_4 = ((void*)0);

 VAR_4 = &VAR_3->rx_ring;

 VAR_4->real_page_size = VAR_3->rx_ring.page_size
     + VAR_3->hw.max_frame_size
     + VAR_1 + VAR_2
     + VAR_0;
 VAR_4->real_page_size = FUNC_1(VAR_4->real_page_size, 32);
 FUNC_0(VAR_3, &VAR_3->ring_size);

 VAR_3->ring_vir_addr = ((void*)0);
 VAR_3->rx_ring.desc = ((void*)0);
 FUNC_2(&VAR_3->tx_ring.tx_lock);
}
