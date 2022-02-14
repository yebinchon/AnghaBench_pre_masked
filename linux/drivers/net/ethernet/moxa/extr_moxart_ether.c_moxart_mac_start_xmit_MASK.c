
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {unsigned int len; int * data; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct net_device {int dev; TYPE_1__ stats; } ;
struct moxart_mac_priv_t {unsigned int tx_head; int* tx_mapping; unsigned int* tx_len; int txlock; scalar_t__ base; int tx_buf_size; struct sk_buff** tx_skb; void* tx_desc_base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *,int *,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,void*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct moxart_mac_priv_t* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_18, struct net_device *VAR_19)
{
 struct moxart_mac_priv_t *VAR_20 = FUNC_10(VAR_19);
 void *VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 u32 VAR_24;
 int VAR_25 = VAR_2;

 FUNC_14(&VAR_20->txlock);

 VAR_23 = VAR_20->tx_head;
 VAR_21 = VAR_20->tx_desc_base + (VAR_14 * VAR_23);

 if (FUNC_7(VAR_19) == 1)
  FUNC_11(VAR_19);

 if (FUNC_5(VAR_21 + VAR_15) & VAR_6) {
  FUNC_8("no TX space for packet\n");
  VAR_19->stats.tx_dropped++;
  goto out_unlock;
 }
 FUNC_13();

 VAR_22 = VAR_18->len > VAR_5 ? VAR_5 : VAR_18->len;

 VAR_20->tx_mapping[VAR_23] = FUNC_1(&VAR_19->dev, VAR_18->data,
         VAR_22, VAR_0);
 if (FUNC_2(&VAR_19->dev, VAR_20->tx_mapping[VAR_23])) {
  FUNC_9(VAR_19, "DMA mapping error\n");
  goto out_unlock;
 }

 VAR_20->tx_len[VAR_23] = VAR_22;
 VAR_20->tx_skb[VAR_23] = VAR_18;

 FUNC_6(VAR_20->tx_mapping[VAR_23],
        VAR_21 + VAR_17 + VAR_11);
 FUNC_6((uintptr_t)VAR_18->data,
        VAR_21 + VAR_17 + VAR_12);

 if (VAR_18->len < VAR_1) {
  FUNC_4(&VAR_18->data[VAR_18->len],
         0, VAR_1 - VAR_18->len);
  VAR_22 = VAR_1;
 }

 FUNC_3(&VAR_19->dev, VAR_20->tx_mapping[VAR_23],
       VAR_20->tx_buf_size, VAR_0);

 VAR_24 = VAR_10 | VAR_9 | (VAR_22 & VAR_7);
 if (VAR_23 == VAR_13)
  VAR_24 |= VAR_8;
 FUNC_6(VAR_24, VAR_21 + VAR_16);
 FUNC_16();
 FUNC_6(VAR_6, VAR_21 + VAR_15);


 FUNC_17(0xffffffff, VAR_20->base + VAR_4);

 VAR_20->tx_head = FUNC_0(VAR_23);

 FUNC_12(VAR_19);
 VAR_25 = VAR_3;
out_unlock:
 FUNC_15(&VAR_20->txlock);

 return VAR_25;
}
