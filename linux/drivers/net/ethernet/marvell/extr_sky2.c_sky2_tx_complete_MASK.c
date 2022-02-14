
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tx_ring_info {struct sk_buff* skb; } ;
struct TYPE_4__ {unsigned int packets; unsigned int bytes; int syncp; } ;
struct sky2_port {scalar_t__ tx_ring_size; scalar_t__ tx_cons; TYPE_2__ tx_stats; scalar_t__ tx_next; TYPE_1__* hw; struct tx_ring_info* tx_ring; struct net_device* netdev; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*,unsigned int,unsigned int) ;
 int FUNC_4 (struct sky2_port*,int ,int ,struct net_device*,char*,scalar_t__) ;
 int FUNC_5 (int ,struct tx_ring_info*) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct sky2_port *VAR_2, u16 VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 u16 VAR_5;
 unsigned int VAR_6 = 0, VAR_7 = 0;

 FUNC_0(VAR_3 >= VAR_2->tx_ring_size);

 for (VAR_5 = VAR_2->tx_cons; VAR_5 != VAR_3;
      VAR_5 = FUNC_1(VAR_5, VAR_2->tx_ring_size)) {
  struct tx_ring_info *VAR_8 = VAR_2->tx_ring + VAR_5;
  struct sk_buff *VAR_9 = VAR_8->skb;

  FUNC_5(VAR_2->hw->pdev, VAR_8);

  if (VAR_9) {
   FUNC_4(VAR_2, VAR_1, VAR_0, VAR_4,
         "tx done %u\n", VAR_5);

   VAR_7++;
   VAR_6 += VAR_9->len;

   VAR_8->skb = ((void*)0);
   FUNC_2(VAR_9);

   VAR_2->tx_next = FUNC_1(VAR_5, VAR_2->tx_ring_size);
  }
 }

 VAR_2->tx_cons = VAR_5;
 FUNC_6();

 FUNC_3(VAR_4, VAR_7, VAR_6);

 FUNC_7(&VAR_2->tx_stats.syncp);
 VAR_2->tx_stats.packets += VAR_7;
 VAR_2->tx_stats.bytes += VAR_6;
 FUNC_8(&VAR_2->tx_stats.syncp);
}
