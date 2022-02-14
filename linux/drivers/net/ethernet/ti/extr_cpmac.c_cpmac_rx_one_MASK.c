
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int data; int protocol; } ;
struct cpmac_priv {TYPE_2__* dev; int regs; } ;
struct cpmac_desc {int dataflags; int buflen; scalar_t__ data_mapping; scalar_t__ hw_data; struct sk_buff* skb; scalar_t__ datalen; scalar_t__ mapping; } ;
struct TYPE_8__ {int rx_dropped; int rx_bytes; int rx_packets; } ;
struct TYPE_9__ {TYPE_1__ stats; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct cpmac_desc*) ;
 int FUNC_2 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,scalar_t__,int ,int ) ;
 int FUNC_6 (struct sk_buff*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 () ;
 struct sk_buff* FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (struct cpmac_priv*) ;
 int FUNC_13 (struct cpmac_priv*) ;
 scalar_t__ FUNC_14 (struct cpmac_priv*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_18(struct cpmac_priv *VAR_3,
        struct cpmac_desc *VAR_4)
{
 struct sk_buff *VAR_5, *VAR_6 = ((void*)0);

 if (FUNC_17(FUNC_12(VAR_3)))
  FUNC_1(VAR_3->dev, VAR_4);
 FUNC_3(VAR_3->regs, FUNC_0(0), (u32)VAR_4->mapping);
 if (FUNC_17(!VAR_4->datalen)) {
  if (FUNC_14(VAR_3) && FUNC_8())
   FUNC_11(VAR_3->dev, "rx: spurious interrupt\n");

  return ((void*)0);
 }

 VAR_5 = FUNC_9(VAR_3->dev, VAR_1);
 if (FUNC_7(VAR_5)) {
  FUNC_16(VAR_4->skb, VAR_4->datalen);
  VAR_4->skb->protocol = FUNC_6(VAR_4->skb, VAR_3->dev);
  FUNC_15(VAR_4->skb);
  VAR_3->dev->stats.rx_packets++;
  VAR_3->dev->stats.rx_bytes += VAR_4->datalen;
  VAR_6 = VAR_4->skb;
  FUNC_5(&VAR_3->dev->dev, VAR_4->data_mapping,
     VAR_1, VAR_2);
  VAR_4->skb = VAR_5;
  VAR_4->data_mapping = FUNC_4(&VAR_3->dev->dev, VAR_5->data,
          VAR_1,
          VAR_2);
  VAR_4->hw_data = (u32)VAR_4->data_mapping;
  if (FUNC_17(FUNC_13(VAR_3))) {
   FUNC_10(VAR_3->dev, "received packet:\n");
   FUNC_2(VAR_3->dev, VAR_6);
  }
 } else {
  if (FUNC_14(VAR_3) && FUNC_8())
   FUNC_11(VAR_3->dev,
        "low on skbs, dropping packet\n");

  VAR_3->dev->stats.rx_dropped++;
 }

 VAR_4->buflen = VAR_1;
 VAR_4->dataflags = VAR_0;

 return VAR_6;
}
