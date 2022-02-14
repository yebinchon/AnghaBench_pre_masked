
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {scalar_t__ len; } ;
struct pci_dev {int dev; } ;
struct netdev_queue {int dummy; } ;
struct bnxt_tx_ring_info {size_t tx_cons; scalar_t__ dev_state; struct bnxt_sw_tx_bd* tx_buf_ring; int txq_index; } ;
struct bnxt_sw_tx_bd {int nr_frags; scalar_t__ is_push; struct sk_buff* skb; } ;
struct bnxt_napi {struct bnxt_tx_ring_info* tx_ring; } ;
struct bnxt {scalar_t__ tx_wake_thresh; struct pci_dev* pdev; int dev; } ;
struct TYPE_2__ {int * frags; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (struct netdev_queue*,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 scalar_t__ FUNC_3 (struct bnxt*,struct bnxt_tx_ring_info*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct bnxt_sw_tx_bd*,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int VAR_2 ;
 struct netdev_queue* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct netdev_queue*,int,unsigned int) ;
 scalar_t__ FUNC_10 (struct netdev_queue*) ;
 int FUNC_11 (struct netdev_queue*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sk_buff*) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (scalar_t__) ;

__attribute__((used)) static void FUNC_18(struct bnxt *VAR_3, struct bnxt_napi *VAR_4, int VAR_5)
{
 struct bnxt_tx_ring_info *VAR_6 = VAR_4->tx_ring;
 struct netdev_queue *VAR_7 = FUNC_8(VAR_3->dev, VAR_6->txq_index);
 u16 VAR_8 = VAR_6->tx_cons;
 struct pci_dev *VAR_9 = VAR_3->pdev;
 int VAR_10;
 unsigned int VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  struct bnxt_sw_tx_bd *VAR_12;
  struct sk_buff *VAR_13;
  int VAR_14, VAR_15;

  VAR_12 = &VAR_6->tx_buf_ring[VAR_8];
  VAR_8 = FUNC_0(VAR_8);
  VAR_13 = VAR_12->skb;
  VAR_12->skb = ((void*)0);

  if (VAR_12->is_push) {
   VAR_12->is_push = 0;
   goto next_tx_int;
  }

  FUNC_7(&VAR_9->dev, FUNC_5(VAR_12, VAR_2),
     FUNC_13(VAR_13), VAR_1);
  VAR_15 = VAR_12->nr_frags;

  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   VAR_8 = FUNC_0(VAR_8);
   VAR_12 = &VAR_6->tx_buf_ring[VAR_8];
   FUNC_6(
    &VAR_9->dev,
    FUNC_5(VAR_12, VAR_2),
    FUNC_12(&FUNC_14(VAR_13)->frags[VAR_14]),
    VAR_1);
  }

next_tx_int:
  VAR_8 = FUNC_0(VAR_8);

  VAR_11 += VAR_13->len;
  FUNC_4(VAR_13);
 }

 FUNC_9(VAR_7, VAR_5, VAR_11);
 VAR_6->tx_cons = VAR_8;






 FUNC_15();

 if (FUNC_17(FUNC_10(VAR_7)) &&
     (FUNC_3(VAR_3, VAR_6) > VAR_3->tx_wake_thresh)) {
  FUNC_1(VAR_7, FUNC_16());
  if (FUNC_10(VAR_7) &&
      FUNC_3(VAR_3, VAR_6) > VAR_3->tx_wake_thresh &&
      VAR_6->dev_state != VAR_0)
   FUNC_11(VAR_7);
  FUNC_2(VAR_7);
 }
}
