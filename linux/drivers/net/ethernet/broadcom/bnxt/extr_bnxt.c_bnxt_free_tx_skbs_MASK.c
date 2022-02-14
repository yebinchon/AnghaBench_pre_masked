
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pci_dev {int dev; } ;
struct bnxt_tx_ring_info {struct bnxt_sw_tx_bd* tx_buf_ring; } ;
struct bnxt_sw_tx_bd {scalar_t__ action; int nr_frags; scalar_t__ is_push; struct sk_buff* skb; int * xdpf; } ;
struct bnxt {int tx_nr_pages; int tx_nr_rings; int tx_nr_rings_xdp; int tx_ring_mask; int dev; struct bnxt_tx_ring_info* tx_ring; struct pci_dev* pdev; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct bnxt_sw_tx_bd*,int ) ;
 int FUNC_2 (struct bnxt_sw_tx_bd*,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct bnxt *VAR_5)
{
 int VAR_6, VAR_7;
 struct pci_dev *VAR_8 = VAR_5->pdev;

 if (!VAR_5->tx_ring)
  return;

 VAR_7 = VAR_5->tx_nr_pages * VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_5->tx_nr_rings; VAR_6++) {
  struct bnxt_tx_ring_info *VAR_9 = &VAR_5->tx_ring[VAR_6];
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_7;) {
   struct bnxt_sw_tx_bd *VAR_11 = &VAR_9->tx_buf_ring[VAR_10];
   struct sk_buff *VAR_12;
   int VAR_13, VAR_14;

   if (VAR_6 < VAR_5->tx_nr_rings_xdp &&
       VAR_11->action == VAR_2) {
    FUNC_4(&VAR_8->dev,
     FUNC_1(VAR_11, VAR_4),
     FUNC_2(VAR_11, VAR_3),
     VAR_0);
    FUNC_10(VAR_11->xdpf);
    VAR_11->action = 0;
    VAR_11->xdpf = ((void*)0);
    VAR_10++;
    continue;
   }

   VAR_12 = VAR_11->skb;
   if (!VAR_12) {
    VAR_10++;
    continue;
   }

   VAR_11->skb = ((void*)0);

   if (VAR_11->is_push) {
    FUNC_0(VAR_12);
    VAR_10 += 2;
    continue;
   }

   FUNC_4(&VAR_8->dev,
      FUNC_1(VAR_11, VAR_4),
      FUNC_8(VAR_12),
      VAR_0);

   VAR_14 = VAR_11->nr_frags;
   VAR_10 += 2;
   for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++, VAR_10++) {
    int VAR_15 = VAR_10 & VAR_5->tx_ring_mask;
    skb_frag_t *VAR_16 = &FUNC_9(VAR_12)->frags[VAR_13];

    VAR_11 = &VAR_9->tx_buf_ring[VAR_15];
    FUNC_3(
     &VAR_8->dev,
     FUNC_1(VAR_11, VAR_4),
     FUNC_7(VAR_16), VAR_0);
   }
   FUNC_0(VAR_12);
  }
  FUNC_6(FUNC_5(VAR_5->dev, VAR_6));
 }
}
