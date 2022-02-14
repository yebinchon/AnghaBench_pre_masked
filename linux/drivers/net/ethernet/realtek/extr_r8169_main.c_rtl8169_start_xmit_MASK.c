
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct rtl8169_private {unsigned int cur_tx; TYPE_3__* tx_skb; struct TxDesc* TxDescArray; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct device {int dummy; } ;
struct TxDesc {int opts1; int opts2; int addr; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int len; struct sk_buff* skb; } ;
struct TYPE_5__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct device*,int ,int,int ) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 () ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 struct rtl8169_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct rtl8169_private*,int ,struct net_device*,char*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct rtl8169_private*) ;
 int FUNC_15 (int,int,unsigned int) ;
 int FUNC_16 (struct sk_buff*,int*) ;
 int FUNC_17 (struct rtl8169_private*,struct sk_buff*,int*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct device*,TYPE_3__*,struct TxDesc*) ;
 int FUNC_20 (struct rtl8169_private*,struct sk_buff*,int*) ;
 scalar_t__ FUNC_21 (struct rtl8169_private*) ;
 scalar_t__ FUNC_22 (struct rtl8169_private*,int ) ;
 int FUNC_23 (struct sk_buff*) ;
 TYPE_2__* FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 struct device* FUNC_28 (struct rtl8169_private*) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 () ;

__attribute__((used)) static netdev_tx_t FUNC_31(struct sk_buff *VAR_9,
          struct net_device *VAR_10)
{
 struct rtl8169_private *VAR_11 = FUNC_9(VAR_10);
 unsigned int VAR_12 = VAR_11->cur_tx % VAR_7;
 struct TxDesc *VAR_13 = VAR_11->TxDescArray + VAR_12;
 struct device *VAR_14 = FUNC_28(VAR_11);
 dma_addr_t VAR_15;
 u32 VAR_16[2], VAR_17;
 bool VAR_18;
 bool VAR_19;
 int VAR_20;

 if (FUNC_29(!FUNC_22(VAR_11, FUNC_24(VAR_9)->nr_frags))) {
  FUNC_11(VAR_11, VAR_8, VAR_10, "BUG! Tx Ring full when queue awake!\n");
  goto err_stop_0;
 }

 if (FUNC_29(FUNC_7(VAR_13->opts1) & VAR_1))
  goto err_stop_0;

 VAR_16[1] = FUNC_18(VAR_9);
 VAR_16[0] = VAR_1;

 if (FUNC_21(VAR_11)) {
  if (!FUNC_17(VAR_11, VAR_9, VAR_16))
   goto err_dma_0;
 } else {
  FUNC_16(VAR_9, VAR_16);
 }

 VAR_17 = FUNC_23(VAR_9);
 VAR_15 = FUNC_4(VAR_14, VAR_9->data, VAR_17, VAR_0);
 if (FUNC_29(FUNC_5(VAR_14, VAR_15))) {
  if (FUNC_8())
   FUNC_11(VAR_11, VAR_8, VAR_10, "Failed to map TX DMA!\n");
  goto err_dma_0;
 }

 VAR_11->tx_skb[VAR_12].len = VAR_17;
 VAR_13->addr = FUNC_2(VAR_15);

 VAR_20 = FUNC_20(VAR_11, VAR_9, VAR_16);
 if (VAR_20 < 0)
  goto err_dma_1;
 else if (VAR_20)
  VAR_16[0] |= VAR_2;
 else {
  VAR_16[0] |= VAR_2 | VAR_3;
  VAR_11->tx_skb[VAR_12].skb = VAR_9;
 }

 VAR_13->opts2 = FUNC_1(VAR_16[1]);

 FUNC_25(VAR_9);


 FUNC_6();

 VAR_19 = FUNC_0(VAR_10, VAR_9->len, FUNC_10());

 VAR_13->opts1 = FUNC_15(VAR_16[0], VAR_17, VAR_12);


 FUNC_30();

 VAR_11->cur_tx += VAR_20 + 1;

 VAR_18 = !FUNC_22(VAR_11, VAR_4);
 if (FUNC_29(VAR_18)) {



  FUNC_27();
  FUNC_13(VAR_10);
  VAR_19 = 1;
 }

 if (VAR_19)
  FUNC_14(VAR_11);

 if (FUNC_29(VAR_18)) {







  FUNC_26();
  if (FUNC_22(VAR_11, VAR_4))
   FUNC_12(VAR_10);
 }

 return VAR_6;

err_dma_1:
 FUNC_19(VAR_14, VAR_11->tx_skb + VAR_12, VAR_13);
err_dma_0:
 FUNC_3(VAR_9);
 VAR_10->stats.tx_dropped++;
 return VAR_6;

err_stop_0:
 FUNC_13(VAR_10);
 VAR_10->stats.tx_dropped++;
 return VAR_5;
}
