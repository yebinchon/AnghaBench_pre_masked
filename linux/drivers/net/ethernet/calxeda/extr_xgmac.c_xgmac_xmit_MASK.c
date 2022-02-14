
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct xgmac_priv {int tx_irq_cnt; unsigned int tx_head; int device; struct sk_buff** tx_skbuff; struct xgmac_dma_desc* dma_tx; scalar_t__ base; } ;
struct xgmac_dma_desc {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; int data; } ;
struct net_device {int dummy; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct xgmac_dma_desc*) ;
 int FUNC_1 (struct xgmac_dma_desc*) ;
 int FUNC_2 (struct xgmac_dma_desc*) ;
 int FUNC_3 (struct xgmac_dma_desc*,int ,unsigned int) ;
 int FUNC_4 (struct xgmac_dma_desc*,unsigned int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 void* FUNC_8 (unsigned int,int) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 struct xgmac_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_15 (int *) ;
 unsigned int FUNC_16 (struct sk_buff*) ;
 TYPE_1__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (struct xgmac_priv*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 () ;
 int FUNC_22 (int,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_23(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct xgmac_priv *VAR_12 = FUNC_11(VAR_11);
 unsigned int VAR_13;
 int VAR_14;
 u32 VAR_15;
 int VAR_16 = FUNC_17(VAR_10)->nr_frags;
 struct xgmac_dma_desc *VAR_17, *VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;
 dma_addr_t VAR_21;

 VAR_12->tx_irq_cnt = (VAR_12->tx_irq_cnt + 1) & (VAR_2/4 - 1);
 VAR_15 = VAR_12->tx_irq_cnt ? 0 : VAR_7;

 VAR_19 = (VAR_10->ip_summed == VAR_0) ?
  VAR_5 : 0;
 VAR_13 = VAR_12->tx_head;
 VAR_17 = VAR_12->dma_tx + VAR_13;
 VAR_18 = VAR_17;

 VAR_20 = FUNC_16(VAR_10);
 VAR_21 = FUNC_6(VAR_12->device, VAR_10->data, VAR_20, VAR_1);
 if (FUNC_7(VAR_12->device, VAR_21)) {
  FUNC_5(VAR_10);
  return VAR_4;
 }
 VAR_12->tx_skbuff[VAR_13] = VAR_10;
 FUNC_3(VAR_17, VAR_21, VAR_20);

 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
  skb_frag_t *VAR_22 = &FUNC_17(VAR_10)->frags[VAR_14];

  VAR_20 = FUNC_15(VAR_22);

  VAR_21 = FUNC_14(VAR_12->device, VAR_22, 0, VAR_20,
      VAR_1);
  if (FUNC_7(VAR_12->device, VAR_21))
   goto dma_err;

  VAR_13 = FUNC_8(VAR_13, VAR_2);
  VAR_17 = VAR_12->dma_tx + VAR_13;
  VAR_12->tx_skbuff[VAR_13] = VAR_10;

  FUNC_3(VAR_17, VAR_21, VAR_20);
  if (VAR_14 < (VAR_16 - 1))
   FUNC_4(VAR_17, VAR_19);
 }


 if (VAR_17 != VAR_18)
  FUNC_4(VAR_17, VAR_19 |
   VAR_8 | VAR_15);
 else
  VAR_19 |= VAR_8 | VAR_15;


 FUNC_21();
 FUNC_4(VAR_18, VAR_19 | VAR_6);

 FUNC_22(1, VAR_12->base + VAR_9);

 VAR_12->tx_head = FUNC_8(VAR_13, VAR_2);


 FUNC_18();
 if (FUNC_20(FUNC_19(VAR_12) <= VAR_3)) {
  FUNC_13(VAR_11);

  FUNC_18();
  if (FUNC_19(VAR_12) > VAR_3)
   FUNC_12(VAR_11);
 }
 return VAR_4;

dma_err:
 VAR_13 = VAR_12->tx_head;
 for ( ; VAR_14 > 0; VAR_14--) {
  VAR_13 = FUNC_8(VAR_13, VAR_2);
  VAR_17 = VAR_12->dma_tx + VAR_13;
  VAR_12->tx_skbuff[VAR_13] = ((void*)0);
  FUNC_9(VAR_12->device, FUNC_1(VAR_17),
          FUNC_2(VAR_17), VAR_1);
  FUNC_0(VAR_17);
 }
 VAR_17 = VAR_18;
 FUNC_10(VAR_12->device, FUNC_1(VAR_17),
    FUNC_2(VAR_17), VAR_1);
 FUNC_5(VAR_10);
 return VAR_4;
}
