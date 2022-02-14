
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int tx_bytes; int tx_packets; } ;
struct net_device {int dev; TYPE_1__ stats; } ;
struct cpmac_priv {int lock; int regs; struct cpmac_desc* desc_ring; } ;
struct cpmac_desc {TYPE_2__* skb; int data_mapping; scalar_t__ mapping; } ;
struct TYPE_6__ {scalar_t__ len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct net_device*,char*,TYPE_2__*,scalar_t__) ;
 struct cpmac_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*) ;
 int FUNC_10 (struct cpmac_priv*) ;
 scalar_t__ FUNC_11 (struct cpmac_priv*) ;
 int FUNC_12 (struct net_device*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct net_device *VAR_1, int VAR_2)
{
 struct cpmac_desc *VAR_3;
 struct cpmac_priv *VAR_4 = FUNC_8(VAR_1);

 VAR_3 = &VAR_4->desc_ring[VAR_2];
 FUNC_2(VAR_4->regs, FUNC_0(VAR_2), (u32)VAR_3->mapping);
 if (FUNC_5(VAR_3->skb)) {
  FUNC_13(&VAR_4->lock);
  VAR_1->stats.tx_packets++;
  VAR_1->stats.tx_bytes += VAR_3->skb->len;
  FUNC_14(&VAR_4->lock);
  FUNC_4(&VAR_1->dev, VAR_3->data_mapping, VAR_3->skb->len,
     VAR_0);

  if (FUNC_15(FUNC_10(VAR_4)))
   FUNC_7(VAR_1, "sent 0x%p, len=%d\n",
       VAR_3->skb, VAR_3->skb->len);

  FUNC_3(VAR_3->skb);
  VAR_3->skb = ((void*)0);
  if (FUNC_1(VAR_1, VAR_2))
   FUNC_12(VAR_1, VAR_2);
 } else {
  if (FUNC_11(VAR_4) && FUNC_6())
   FUNC_9(VAR_1, "end_xmit: spurious interrupt\n");
  if (FUNC_1(VAR_1, VAR_2))
   FUNC_12(VAR_1, VAR_2);
 }
}
