
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; scalar_t__ len; } ;
struct rxbd8 {int lstatus; } ;
struct net_device {int dummy; } ;
struct gfar_private {int tx_actual_en; } ;
struct TYPE_4__ {unsigned int rx_packets; unsigned int rx_bytes; int rx_dropped; } ;
struct gfar_priv_rx_q {int next_to_clean; int rx_ring_size; int rfbptr; TYPE_2__ stats; struct sk_buff* skb; TYPE_1__* grp; int qindex; struct rxbd8* rx_bd_base; struct net_device* ndev; } ;
struct TYPE_3__ {int napi_rx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct gfar_priv_rx_q*,int) ;
 struct sk_buff* FUNC_6 (struct gfar_priv_rx_q*,int,struct sk_buff*) ;
 int FUNC_7 (struct net_device*,struct sk_buff*) ;
 int FUNC_8 (struct gfar_priv_rx_q*) ;
 int FUNC_9 (struct gfar_priv_rx_q*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 struct gfar_private* FUNC_12 (struct net_device*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct gfar_priv_rx_q *VAR_4,
         int VAR_5)
{
 struct net_device *VAR_6 = VAR_4->ndev;
 struct gfar_private *VAR_7 = FUNC_12(VAR_6);
 struct rxbd8 *VAR_8;
 int VAR_9, VAR_10 = 0;
 struct sk_buff *VAR_11 = VAR_4->skb;
 int VAR_12 = FUNC_9(VAR_4);
 unsigned int VAR_13 = 0, VAR_14 = 0;


 VAR_9 = VAR_4->next_to_clean;

 while (VAR_5--) {
  u32 VAR_15;

  if (VAR_12 >= VAR_0) {
   FUNC_5(VAR_4, VAR_12);
   VAR_12 = 0;
  }

  VAR_8 = &VAR_4->rx_bd_base[VAR_9];
  VAR_15 = FUNC_1(VAR_8->lstatus);
  if (VAR_15 & FUNC_0(VAR_1))
   break;


  FUNC_13();


  VAR_11 = FUNC_6(VAR_4, VAR_15, VAR_11);
  if (FUNC_15(!VAR_11))
   break;

  VAR_12++;
  VAR_10++;

  if (FUNC_15(++VAR_9 == VAR_4->rx_ring_size))
   VAR_9 = 0;

  VAR_4->next_to_clean = VAR_9;


  if (!(VAR_15 & FUNC_0(VAR_3)))
   continue;

  if (FUNC_15(VAR_15 & FUNC_0(VAR_2))) {
   FUNC_2(VAR_15, VAR_6);


   FUNC_3(VAR_11);
   VAR_11 = ((void*)0);
   VAR_4->stats.rx_dropped++;
   continue;
  }

  FUNC_7(VAR_6, VAR_11);


  VAR_14++;
  VAR_13 += VAR_11->len;

  FUNC_14(VAR_11, VAR_4->qindex);

  VAR_11->protocol = FUNC_4(VAR_11, VAR_6);


  FUNC_11(&VAR_4->grp->napi_rx, VAR_11);

  VAR_11 = ((void*)0);
 }


 VAR_4->skb = VAR_11;

 VAR_4->stats.rx_packets += VAR_14;
 VAR_4->stats.rx_bytes += VAR_13;

 if (VAR_12)
  FUNC_5(VAR_4, VAR_12);


 if (FUNC_15(VAR_7->tx_actual_en)) {
  u32 VAR_16 = FUNC_8(VAR_4);

  FUNC_10(VAR_4->rfbptr, VAR_16);
 }

 return VAR_10;
}
