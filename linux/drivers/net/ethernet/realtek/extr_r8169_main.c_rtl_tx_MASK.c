
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned int packets; unsigned int bytes; int syncp; } ;
struct rtl8169_private {unsigned int dirty_tx; unsigned int cur_tx; TYPE_1__ tx_stats; TYPE_2__* TxDescArray; struct ring_info* tx_skb; } ;
struct ring_info {TYPE_3__* skb; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {int opts1; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (struct net_device*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (int ,struct ring_info*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (struct rtl8169_private*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct rtl8169_private*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_3, struct rtl8169_private *VAR_4,
     int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0;

 VAR_6 = VAR_4->dirty_tx;
 FUNC_10();
 VAR_7 = VAR_4->cur_tx - VAR_6;

 while (VAR_7 > 0) {
  unsigned int VAR_10 = VAR_6 % VAR_2;
  struct ring_info *VAR_11 = VAR_4->tx_skb + VAR_10;
  u32 VAR_12;

  VAR_12 = FUNC_1(VAR_4->TxDescArray[VAR_10].opts1);
  if (VAR_12 & VAR_0)
   break;





  FUNC_0();

  FUNC_7(FUNC_11(VAR_4), VAR_11,
         VAR_4->TxDescArray + VAR_10);
  if (VAR_11->skb) {
   VAR_9++;
   VAR_8 += VAR_11->skb->len;
   FUNC_2(VAR_11->skb, VAR_5);
   VAR_11->skb = ((void*)0);
  }
  VAR_6++;
  VAR_7--;
 }

 if (VAR_4->dirty_tx != VAR_6) {
  FUNC_3(VAR_3, VAR_9, VAR_8);

  FUNC_12(&VAR_4->tx_stats.syncp);
  VAR_4->tx_stats.packets += VAR_9;
  VAR_4->tx_stats.bytes += VAR_8;
  FUNC_13(&VAR_4->tx_stats.syncp);

  VAR_4->dirty_tx = VAR_6;







  FUNC_9();
  if (FUNC_4(VAR_3) &&
      FUNC_8(VAR_4, VAR_1)) {
   FUNC_5(VAR_3);
  }






  if (VAR_4->cur_tx != VAR_6)
   FUNC_6(VAR_4);
 }
}
