
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_11__ {int buff_id; } ;
struct wil_rx_enhanced_desc {TYPE_4__ mac; } ;
struct wil_ring {int size; TYPE_7__* ctx; TYPE_3__* va; } ;
struct TYPE_13__ {TYPE_5__* buff_arr; int size; } ;
struct wil6210_priv {TYPE_6__ rx_buff_mgmt; scalar_t__ use_enhanced_dma_hw; struct wil_ring ring_rx; struct wil_ring* ring_tx; } ;
struct vring_tx_desc {int dummy; } ;
struct sk_buff {int dummy; } ;
struct seq_file {struct wil6210_priv* private; } ;
struct TYPE_14__ {struct sk_buff* skb; } ;
struct TYPE_12__ {struct sk_buff* skb; } ;
struct TYPE_9__ {int enhanced; } ;
struct TYPE_8__ {struct vring_tx_desc legacy; } ;
struct TYPE_10__ {TYPE_2__ rx; TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct seq_file*,struct sk_buff*) ;
 int FUNC_6 (size_t,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_3, void *VAR_4)
{
 struct wil6210_priv *VAR_5 = VAR_3->private;
 struct wil_ring *VAR_6;
 bool VAR_7;
 int VAR_8 = VAR_1;
 int VAR_9 = VAR_2;
 volatile struct vring_tx_desc *VAR_10;
 volatile u32 *VAR_11;
 struct sk_buff *VAR_12;

 if (VAR_5->use_enhanced_dma_hw) {

  if (VAR_8 >= VAR_0) {
   FUNC_2(VAR_3, "invalid ring index %d\n", VAR_8);
   return 0;
  }
  VAR_7 = VAR_8 > 0;
 } else {

  if (VAR_8 > VAR_0) {
   FUNC_2(VAR_3, "invalid ring index %d\n", VAR_8);
   return 0;
  }
  VAR_7 = (VAR_8 < VAR_0);
 }

 VAR_6 = VAR_7 ? &VAR_5->ring_tx[VAR_8] : &VAR_5->ring_rx;

 if (!VAR_6->va) {
  if (VAR_7)
   FUNC_2(VAR_3, "No Tx[%2d] RING\n", VAR_8);
  else
   FUNC_3(VAR_3, "No Rx RING\n");
  return 0;
 }

 if (VAR_9 >= VAR_6->size) {
  if (VAR_7)
   FUNC_2(VAR_3, "[%2d] TxDesc index (%d) >= size (%d)\n",
       VAR_8, VAR_9, VAR_6->size);
  else
   FUNC_2(VAR_3, "RxDesc index (%d) >= size (%d)\n",
       VAR_9, VAR_6->size);
  return 0;
 }




 VAR_10 = &VAR_6->va[VAR_9].tx.legacy;
 VAR_11 = (volatile u32 *)VAR_10;
 VAR_12 = ((void*)0);

 if (VAR_5->use_enhanced_dma_hw) {
  if (VAR_7) {
   VAR_12 = VAR_6->ctx ? VAR_6->ctx[VAR_9].skb : ((void*)0);
  } else if (VAR_5->rx_buff_mgmt.buff_arr) {
   struct wil_rx_enhanced_desc *VAR_13 =
    (struct wil_rx_enhanced_desc *)
    &VAR_6->va[VAR_9].rx.enhanced;
   u16 VAR_14 = FUNC_1(VAR_13->mac.buff_id);

   if (!FUNC_6(VAR_14, 0,
           VAR_5->rx_buff_mgmt.size))
    FUNC_2(VAR_3, "invalid buff_id %d\n", VAR_14);
   else
    VAR_12 = VAR_5->rx_buff_mgmt.buff_arr[VAR_14].skb;
  }
 } else {
  VAR_12 = VAR_6->ctx[VAR_9].skb;
 }
 if (VAR_7)
  FUNC_2(VAR_3, "Tx[%2d][%3d] = {\n", VAR_8,
      VAR_9);
 else
  FUNC_2(VAR_3, "Rx[%3d] = {\n", VAR_9);
 FUNC_2(VAR_3, "  MAC = 0x%08x 0x%08x 0x%08x 0x%08x\n",
     VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3]);
 FUNC_2(VAR_3, "  DMA = 0x%08x 0x%08x 0x%08x 0x%08x\n",
     VAR_11[4], VAR_11[5], VAR_11[6], VAR_11[7]);
 FUNC_2(VAR_3, "  SKB = 0x%p\n", VAR_12);

 if (VAR_12) {
  FUNC_4(VAR_12);
  FUNC_5(VAR_3, VAR_12);
  FUNC_0(VAR_12);
 }
 FUNC_3(VAR_3, "}\n");

 return 0;
}
