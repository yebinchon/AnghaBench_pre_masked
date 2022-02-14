
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ravb_tx_desc {void* die_dt; void* dptr; void* ds_cc; } ;
struct ravb_private {int num_tx_desc; int* num_rx_ring; int* num_tx_ring; scalar_t__* tx_desc_dma; struct ravb_desc* desc_bat; scalar_t__* rx_desc_dma; struct ravb_tx_desc** tx_ring; struct ravb_tx_desc** rx_ring; int rx_buf_sz; TYPE_1__*** rx_skb; scalar_t__* dirty_tx; scalar_t__* dirty_rx; scalar_t__* cur_tx; scalar_t__* cur_rx; } ;
struct ravb_ex_rx_desc {void* die_dt; void* dptr; void* ds_cc; } ;
struct ravb_desc {void* dptr; void* die_dt; } ;
struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_2__ dev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ravb_tx_desc*,int ,int) ;
 struct ravb_private* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5, int VAR_6)
{
 struct ravb_private *VAR_7 = FUNC_5(VAR_5);
 int VAR_8 = VAR_7->num_tx_desc;
 struct ravb_ex_rx_desc *VAR_9;
 struct ravb_tx_desc *VAR_10;
 struct ravb_desc *VAR_11;
 int VAR_12 = sizeof(*VAR_9) * VAR_7->num_rx_ring[VAR_6];
 int VAR_13 = sizeof(*VAR_10) * VAR_7->num_tx_ring[VAR_6] *
      VAR_8;
 dma_addr_t VAR_14;
 int VAR_15;

 VAR_7->cur_rx[VAR_6] = 0;
 VAR_7->cur_tx[VAR_6] = 0;
 VAR_7->dirty_rx[VAR_6] = 0;
 VAR_7->dirty_tx[VAR_6] = 0;

 FUNC_4(VAR_7->rx_ring[VAR_6], 0, VAR_12);

 for (VAR_15 = 0; VAR_15 < VAR_7->num_rx_ring[VAR_6]; VAR_15++) {

  VAR_9 = &VAR_7->rx_ring[VAR_6][VAR_15];
  VAR_9->ds_cc = FUNC_0(VAR_7->rx_buf_sz);
  VAR_14 = FUNC_2(VAR_5->dev.parent, VAR_7->rx_skb[VAR_6][VAR_15]->data,
       VAR_7->rx_buf_sz,
       VAR_0);



  if (FUNC_3(VAR_5->dev.parent, VAR_14))
   VAR_9->ds_cc = FUNC_0(0);
  VAR_9->dptr = FUNC_1(VAR_14);
  VAR_9->die_dt = VAR_2;
 }
 VAR_9 = &VAR_7->rx_ring[VAR_6][VAR_15];
 VAR_9->dptr = FUNC_1((u32)VAR_7->rx_desc_dma[VAR_6]);
 VAR_9->die_dt = VAR_3;

 FUNC_4(VAR_7->tx_ring[VAR_6], 0, VAR_13);

 for (VAR_15 = 0, VAR_10 = VAR_7->tx_ring[VAR_6]; VAR_15 < VAR_7->num_tx_ring[VAR_6];
      VAR_15++, VAR_10++) {
  VAR_10->die_dt = VAR_1;
  if (VAR_8 > 1) {
   VAR_10++;
   VAR_10->die_dt = VAR_1;
  }
 }
 VAR_10->dptr = FUNC_1((u32)VAR_7->tx_desc_dma[VAR_6]);
 VAR_10->die_dt = VAR_3;


 VAR_11 = &VAR_7->desc_bat[VAR_4 + VAR_6];
 VAR_11->die_dt = VAR_3;
 VAR_11->dptr = FUNC_1((u32)VAR_7->rx_desc_dma[VAR_6]);


 VAR_11 = &VAR_7->desc_bat[VAR_6];
 VAR_11->die_dt = VAR_3;
 VAR_11->dptr = FUNC_1((u32)VAR_7->tx_desc_dma[VAR_6]);
}
