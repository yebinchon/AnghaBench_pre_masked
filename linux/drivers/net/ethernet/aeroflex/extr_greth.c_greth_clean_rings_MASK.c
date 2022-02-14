
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct greth_private {int tx_free; size_t tx_last; int dev; int * tx_bufs; int * rx_bufs; struct greth_bd* tx_bd_base; struct sk_buff** tx_skbuff; struct sk_buff** rx_skbuff; scalar_t__ gbit_mac; struct greth_bd* rx_bd_base; } ;
struct greth_bd {int addr; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct greth_private *VAR_6)
{
 int VAR_7;
 struct greth_bd *VAR_8 = VAR_6->rx_bd_base;
 struct greth_bd *VAR_9 = VAR_6->tx_bd_base;

 if (VAR_6->gbit_mac) {


  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++, VAR_8++) {
   if (VAR_6->rx_skbuff[VAR_7] != ((void*)0)) {
    FUNC_1(VAR_6->rx_skbuff[VAR_7]);
    FUNC_3(VAR_6->dev,
       FUNC_4(&VAR_8->addr),
       VAR_4+VAR_5,
       VAR_0);
   }
  }


  while (VAR_6->tx_free < VAR_3) {

   struct sk_buff *VAR_10 = VAR_6->tx_skbuff[VAR_6->tx_last];
   int VAR_11 = FUNC_8(VAR_10)->nr_frags;
   VAR_9 = VAR_6->tx_bd_base + VAR_6->tx_last;
   VAR_6->tx_last = FUNC_0(VAR_6->tx_last);

   FUNC_3(VAR_6->dev,
      FUNC_4(&VAR_9->addr),
      FUNC_7(VAR_10),
      VAR_1);

   for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
    skb_frag_t *VAR_12 = &FUNC_8(VAR_10)->frags[VAR_7];
    VAR_9 = VAR_6->tx_bd_base + VAR_6->tx_last;

    FUNC_2(VAR_6->dev,
            FUNC_4(&VAR_9->addr),
            FUNC_6(VAR_12),
            VAR_1);

    VAR_6->tx_last = FUNC_0(VAR_6->tx_last);
   }
   VAR_6->tx_free += VAR_11+1;
   FUNC_1(VAR_10);
  }


 } else {

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++, VAR_8++) {
   FUNC_5(VAR_6->rx_bufs[VAR_7]);
   FUNC_3(VAR_6->dev,
      FUNC_4(&VAR_8->addr),
      VAR_4,
      VAR_0);
  }
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++, VAR_9++) {
   FUNC_5(VAR_6->tx_bufs[VAR_7]);
   FUNC_3(VAR_6->dev,
      FUNC_4(&VAR_9->addr),
      VAR_4,
      VAR_1);
  }
 }
}
