
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct bnx2_tx_ring_info {struct bnx2_sw_tx_bd* tx_buf_ring; } ;
struct bnx2_sw_tx_bd {int nr_frags; struct sk_buff* skb; } ;
struct bnx2_napi {struct bnx2_tx_ring_info tx_ring; } ;
struct bnx2 {int num_tx_rings; int dev; TYPE_1__* pdev; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_4__ {int * frags; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct bnx2_sw_tx_bd*,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_2__* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_11(struct bnx2 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_tx_rings; VAR_4++) {
  struct bnx2_napi *VAR_5 = &VAR_3->bnx2_napi[VAR_4];
  struct bnx2_tx_ring_info *VAR_6 = &VAR_5->tx_ring;
  int VAR_7;

  if (!VAR_6->tx_buf_ring)
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_0; ) {
   struct bnx2_sw_tx_bd *VAR_8 = &VAR_6->tx_buf_ring[VAR_7];
   struct sk_buff *VAR_9 = VAR_8->skb;
   int VAR_10, VAR_11;

   if (!VAR_9) {
    VAR_7 = FUNC_0(VAR_7);
    continue;
   }

   FUNC_5(&VAR_3->pdev->dev,
      FUNC_3(VAR_8, VAR_2),
      FUNC_9(VAR_9),
      VAR_1);

   VAR_8->skb = ((void*)0);

   VAR_11 = VAR_8->nr_frags;
   VAR_7 = FUNC_0(VAR_7);
   for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++, VAR_7 = FUNC_0(VAR_7)) {
    VAR_8 = &VAR_6->tx_buf_ring[FUNC_1(VAR_7)];
    FUNC_4(&VAR_3->pdev->dev,
     FUNC_3(VAR_8, VAR_2),
     FUNC_8(&FUNC_10(VAR_9)->frags[VAR_10]),
     VAR_1);
   }
   FUNC_2(VAR_9);
  }
  FUNC_7(FUNC_6(VAR_3->dev, VAR_4));
 }
}
