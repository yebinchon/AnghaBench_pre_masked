
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ucc_hdlc_private {size_t skb_dirtytx; struct qe_bd* dirty_tx; struct qe_bd* tx_bd_base; struct sk_buff** tx_skbuff; scalar_t__ dma_tx_addr; scalar_t__ tx_buffer; struct net_device* ndev; } ;
struct sk_buff {scalar_t__ len; } ;
struct qe_bd {int status; int buf; } ;
struct TYPE_2__ {int tx_packets; int tx_carrier_errors; int tx_fifo_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ucc_hdlc_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (struct net_device*,int,unsigned int) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct ucc_hdlc_private *VAR_5)
{

 struct net_device *VAR_6 = VAR_5->ndev;
 unsigned int VAR_7 = 0;
 int VAR_8 = 0;
 struct qe_bd *VAR_9;
 u16 VAR_10;
 int VAR_11 = 0;

 VAR_9 = VAR_5->dirty_tx;
 VAR_10 = FUNC_4(&VAR_9->status);


 while ((VAR_10 & VAR_2) == 0) {
  struct sk_buff *VAR_12;

  if (VAR_10 & VAR_3) {
   VAR_6->stats.tx_fifo_errors++;
   VAR_11 = 1;
  }
  if (VAR_10 & VAR_1) {
   VAR_6->stats.tx_carrier_errors++;
   VAR_11 = 1;
  }





  VAR_12 = VAR_5->tx_skbuff[VAR_5->skb_dirtytx];
  if (!VAR_12)
   break;
  VAR_8++;
  VAR_7 += VAR_12->len;
  VAR_6->stats.tx_packets++;
  FUNC_5(VAR_5->tx_buffer +
         (FUNC_1(VAR_9->buf) - VAR_5->dma_tx_addr),
         0, VAR_12->len);
  FUNC_2(VAR_12);

  VAR_5->tx_skbuff[VAR_5->skb_dirtytx] = ((void*)0);
  VAR_5->skb_dirtytx =
      (VAR_5->skb_dirtytx +
       1) & FUNC_0(VAR_0);


  if (FUNC_7(VAR_6))
   FUNC_8(VAR_6);


  if (!(VAR_10 & VAR_4))
   VAR_9 += 1;
  else
   VAR_9 = VAR_5->tx_bd_base;
  VAR_10 = FUNC_4(&VAR_9->status);
 }
 VAR_5->dirty_tx = VAR_9;

 if (VAR_11)
  FUNC_3(VAR_5);

 FUNC_6(VAR_6, VAR_8, VAR_7);
 return 0;
}
