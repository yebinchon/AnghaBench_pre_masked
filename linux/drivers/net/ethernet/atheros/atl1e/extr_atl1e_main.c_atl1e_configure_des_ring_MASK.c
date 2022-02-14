
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct atl1e_tx_ring {int dma; int cmb_dma; scalar_t__ count; } ;
struct atl1e_rx_ring {int page_size; struct atl1e_rx_page_desc* rx_page_desc; } ;
struct atl1e_rx_page_desc {TYPE_1__* rx_page; } ;
struct atl1e_hw {int dummy; } ;
struct atl1e_adapter {int ring_dma; struct atl1e_tx_ring tx_ring; struct atl1e_rx_ring rx_ring; struct atl1e_hw hw; } ;
struct TYPE_2__ {int dma; int write_offset_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atl1e_hw*,int ,int) ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int ** VAR_11 ;
 int ** VAR_12 ;
 int ** VAR_13 ;

__attribute__((used)) static inline void FUNC_2(struct atl1e_adapter *VAR_14)
{

 struct atl1e_hw *VAR_15 = &VAR_14->hw;
 struct atl1e_rx_ring *VAR_16 = &VAR_14->rx_ring;
 struct atl1e_tx_ring *VAR_17 = &VAR_14->tx_ring;
 struct atl1e_rx_page_desc *VAR_18 = ((void*)0);
 int VAR_19, VAR_20;

 FUNC_0(VAR_15, VAR_4,
   (u32)((VAR_14->ring_dma & VAR_0) >> 32));
 FUNC_0(VAR_15, VAR_8,
   (u32)((VAR_17->dma) & VAR_1));
 FUNC_0(VAR_15, VAR_9, (u16)(VAR_17->count));
 FUNC_0(VAR_15, VAR_6,
   (u32)((VAR_17->cmb_dma) & VAR_1));

 VAR_18 = VAR_16->rx_page_desc;

 for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {
  FUNC_0(VAR_15, VAR_10[VAR_19],
     (u32)((VAR_14->ring_dma &
     VAR_0) >> 32));
  for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) {
   u32 VAR_21;
   u32 VAR_22;

   VAR_21 = VAR_18[VAR_19].rx_page[VAR_20].dma;
   VAR_22 =
       VAR_18[VAR_19].rx_page[VAR_20].write_offset_dma;

   FUNC_0(VAR_15, VAR_11[VAR_19][VAR_20],
     VAR_21 & VAR_1);
   FUNC_0(VAR_15, VAR_13[VAR_19][VAR_20],
     VAR_22 & VAR_1);
   FUNC_1(VAR_15, VAR_12[VAR_19][VAR_20], 1);
  }
 }

 FUNC_0(VAR_15, VAR_5, VAR_16->page_size);

 FUNC_0(VAR_15, VAR_7, 1);
}
