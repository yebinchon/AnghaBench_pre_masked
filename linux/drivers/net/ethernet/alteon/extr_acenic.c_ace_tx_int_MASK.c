
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring_info {struct sk_buff* skb; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct ace_private {int tx_ret_csm; int pdev; TYPE_1__* skb; } ;
struct TYPE_3__ {struct tx_ring_info* tx_skbuff; } ;


 int FUNC_0 (struct ace_private*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tx_ring_info*,int ) ;
 scalar_t__ FUNC_3 (struct tx_ring_info*,int ) ;
 int FUNC_4 (struct tx_ring_info*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ace_private* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static inline void FUNC_10(struct net_device *VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 struct ace_private *VAR_6 = FUNC_5(VAR_3);

 do {
  struct sk_buff *VAR_7;
  struct tx_ring_info *VAR_8;

  VAR_8 = VAR_6->skb->tx_skbuff + VAR_5;
  VAR_7 = VAR_8->skb;

  if (FUNC_3(VAR_8, VAR_1)) {
   FUNC_8(VAR_6->pdev, FUNC_2(VAR_8, VAR_2),
           FUNC_3(VAR_8, VAR_1),
           VAR_0);
   FUNC_4(VAR_8, VAR_1, 0);
  }

  if (VAR_7) {
   VAR_3->stats.tx_packets++;
   VAR_3->stats.tx_bytes += VAR_7->len;
   FUNC_1(VAR_7);
   VAR_8->skb = ((void*)0);
  }

  VAR_5 = (VAR_5 + 1) % FUNC_0(VAR_6);
 } while (VAR_5 != VAR_4);

 if (FUNC_6(VAR_3))
  FUNC_7(VAR_3);

 FUNC_9();
 VAR_6->tx_ret_csm = VAR_4;
}
