
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int rx_dma_failed; int alloc_rx_buff_failed; } ;
struct bcm_sysport_priv {TYPE_2__ mib; struct net_device* netdev; TYPE_1__* pdev; } ;
struct bcm_sysport_cb {int bd_addr; struct sk_buff* skb; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct bcm_sysport_priv*,int ,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct bcm_sysport_cb*,int ) ;
 int FUNC_5 (struct bcm_sysport_cb*,int ,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (struct bcm_sysport_priv*,int ,struct net_device*,char*) ;
 int FUNC_10 (struct bcm_sysport_priv*,int ,struct net_device*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct bcm_sysport_priv *VAR_5,
          struct bcm_sysport_cb *VAR_6)
{
 struct device *VAR_7 = &VAR_5->pdev->dev;
 struct net_device *VAR_8 = VAR_5->netdev;
 struct sk_buff *VAR_9, *VAR_10;
 dma_addr_t VAR_11;


 VAR_9 = FUNC_8(VAR_5->netdev, VAR_1);
 if (!VAR_9) {
  VAR_5->mib.alloc_rx_buff_failed++;
  FUNC_10(VAR_5, VAR_3, VAR_8, "SKB alloc failed\n");
  return ((void*)0);
 }

 VAR_11 = FUNC_2(VAR_7, VAR_9->data,
     VAR_1, VAR_0);
 if (FUNC_3(VAR_7, VAR_11)) {
  VAR_5->mib.rx_dma_failed++;
  FUNC_0(VAR_9);
  FUNC_10(VAR_5, VAR_3, VAR_8, "DMA mapping failure\n");
  return ((void*)0);
 }


 VAR_10 = VAR_6->skb;
 if (FUNC_7(VAR_10))
  FUNC_6(VAR_7, FUNC_4(VAR_6, VAR_2),
     VAR_1, VAR_0);


 VAR_6->skb = VAR_9;
 FUNC_5(VAR_6, VAR_2, VAR_11);
 FUNC_1(VAR_5, VAR_6->bd_addr, VAR_11);

 FUNC_9(VAR_5, VAR_4, VAR_8, "RX refill\n");


 return VAR_10;
}
