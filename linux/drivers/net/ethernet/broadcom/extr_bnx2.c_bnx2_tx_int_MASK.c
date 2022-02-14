
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int end; } ;
struct netdev_queue {int dummy; } ;
struct bnx2_tx_ring_info {scalar_t__ tx_cons; scalar_t__ hw_tx_cons; struct bnx2_sw_tx_bd* tx_buf_ring; } ;
struct bnx2_sw_tx_bd {scalar_t__ nr_frags; struct sk_buff* skb; scalar_t__ is_gso; } ;
struct bnx2_napi {struct bnx2_tx_ring_info tx_ring; } ;
struct bnx2 {scalar_t__ tx_wake_thresh; TYPE_1__* pdev; int dev; struct bnx2_napi* bnx2_napi; } ;
typedef scalar_t__ s16 ;
struct TYPE_4__ {int * frags; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (struct netdev_queue*,int ) ;
 int FUNC_3 (struct netdev_queue*) ;
 scalar_t__ FUNC_4 (struct bnx2_napi*) ;
 scalar_t__ FUNC_5 (struct bnx2*,struct bnx2_tx_ring_info*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct bnx2_sw_tx_bd*,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int VAR_2 ;
 struct netdev_queue* FUNC_10 (int ,int) ;
 int FUNC_11 (struct netdev_queue*,int,unsigned int) ;
 int FUNC_12 (struct netdev_queue*) ;
 int FUNC_13 (struct netdev_queue*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct sk_buff*) ;
 TYPE_2__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static int
FUNC_21(struct bnx2 *VAR_3, struct bnx2_napi *VAR_4, int VAR_5)
{
 struct bnx2_tx_ring_info *VAR_6 = &VAR_4->tx_ring;
 u16 VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0, VAR_11;
 unsigned int VAR_12 = 0;
 struct netdev_queue *VAR_13;

 VAR_11 = (VAR_4 - VAR_3->bnx2_napi);
 VAR_13 = FUNC_10(VAR_3->dev, VAR_11);

 VAR_7 = FUNC_4(VAR_4);
 VAR_8 = VAR_6->tx_cons;

 while (VAR_8 != VAR_7) {
  struct bnx2_sw_tx_bd *VAR_14;
  struct sk_buff *VAR_15;
  int VAR_16, VAR_17;

  VAR_9 = FUNC_1(VAR_8);

  VAR_14 = &VAR_6->tx_buf_ring[VAR_9];
  VAR_15 = VAR_14->skb;


  FUNC_14(&VAR_15->end);


  if (VAR_14->is_gso) {
   u16 VAR_18, VAR_19;

   VAR_18 = VAR_8 + VAR_14->nr_frags + 1;
   VAR_19 = VAR_9 + VAR_14->nr_frags + 1;
   if (FUNC_20(VAR_19 >= VAR_0)) {
    VAR_18++;
   }
   if (((s16) ((s16) VAR_18 - (s16) VAR_7)) > 0) {
    break;
   }
  }

  FUNC_9(&VAR_3->pdev->dev, FUNC_7(VAR_14, VAR_2),
   FUNC_16(VAR_15), VAR_1);

  VAR_14->skb = ((void*)0);
  VAR_17 = VAR_14->nr_frags;

  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
   struct bnx2_sw_tx_bd *VAR_20;

   VAR_8 = FUNC_0(VAR_8);

   VAR_20 = &VAR_6->tx_buf_ring[FUNC_1(VAR_8)];
   FUNC_8(&VAR_3->pdev->dev,
    FUNC_7(VAR_20, VAR_2),
    FUNC_15(&FUNC_17(VAR_15)->frags[VAR_16]),
    VAR_1);
  }

  VAR_8 = FUNC_0(VAR_8);

  VAR_12 += VAR_15->len;
  FUNC_6(VAR_15);
  VAR_10++;
  if (VAR_10 == VAR_5)
   break;

  if (VAR_7 == VAR_8)
   VAR_7 = FUNC_4(VAR_4);
 }

 FUNC_11(VAR_13, VAR_10, VAR_12);
 VAR_6->hw_tx_cons = VAR_7;
 VAR_6->tx_cons = VAR_8;






 FUNC_18();

 if (FUNC_20(FUNC_12(VAR_13)) &&
       (FUNC_5(VAR_3, VAR_6) > VAR_3->tx_wake_thresh)) {
  FUNC_2(VAR_13, FUNC_19());
  if ((FUNC_12(VAR_13)) &&
      (FUNC_5(VAR_3, VAR_6) > VAR_3->tx_wake_thresh))
   FUNC_13(VAR_13);
  FUNC_3(VAR_13);
 }

 return VAR_10;
}
