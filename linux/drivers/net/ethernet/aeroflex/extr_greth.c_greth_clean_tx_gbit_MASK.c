
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_5__ {int tx_bytes; } ;
struct net_device {TYPE_2__ stats; } ;
struct greth_private {size_t tx_last; size_t tx_next; int dev; struct greth_bd* tx_bd_base; struct sk_buff** tx_skbuff; TYPE_1__* regs; } ;
struct greth_bd {int addr; int stat; } ;
typedef int skb_frag_t ;
struct TYPE_6__ {int nr_frags; int * frags; } ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_4 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int ,int,int ,int ) ;
 scalar_t__ FUNC_6 (size_t,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 () ;
 struct greth_private* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sk_buff*) ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(struct net_device *VAR_5)
{
 struct greth_private *VAR_6;
 struct greth_bd *VAR_7, *VAR_8;
 struct sk_buff *VAR_9 = ((void*)0);
 u32 VAR_10;
 int VAR_11, VAR_12;
 u16 VAR_13;

 VAR_6 = FUNC_10(VAR_5);
 VAR_13 = VAR_6->tx_last;

 while (VAR_13 != VAR_6->tx_next) {

  VAR_9 = VAR_6->tx_skbuff[VAR_13];

  VAR_11 = FUNC_15(VAR_9)->nr_frags;


  VAR_8 = VAR_6->tx_bd_base + FUNC_2(VAR_13, VAR_11);

  FUNC_0(VAR_6->regs->status, VAR_2 | VAR_3);
  FUNC_9();
  VAR_10 = FUNC_7(&VAR_8->stat);

  if (VAR_10 & VAR_1)
   break;

  VAR_6->tx_skbuff[VAR_13] = ((void*)0);

  FUNC_8(VAR_5, VAR_10);
  VAR_5->stats.tx_bytes += VAR_9->len;

  VAR_7 = VAR_6->tx_bd_base + VAR_13;

  VAR_13 = FUNC_1(VAR_13);

  FUNC_5(VAR_6->dev,
     FUNC_7(&VAR_7->addr),
     FUNC_14(VAR_9),
     VAR_0);

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   skb_frag_t *VAR_14 = &FUNC_15(VAR_9)->frags[VAR_12];
   VAR_7 = VAR_6->tx_bd_base + VAR_13;

   FUNC_4(VAR_6->dev,
           FUNC_7(&VAR_7->addr),
           FUNC_13(VAR_14),
           VAR_0);

   VAR_13 = FUNC_1(VAR_13);
  }
  FUNC_3(VAR_9);
 }
 if (VAR_9) {
  FUNC_16();
  VAR_6->tx_last = VAR_13;

  if (FUNC_11(VAR_5) &&
      (FUNC_6(VAR_13, VAR_6->tx_next) >
      (VAR_4+1)))
   FUNC_12(VAR_5);
 }
}
