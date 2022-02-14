
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct ftgmac100_rxdes {void* rxdes0; void* rxdes3; } ;
struct ftgmac100 {int rx_q_entries; int rxdes0_edorr_mask; struct sk_buff** rx_skbs; int rx_scratch_dma; int dev; struct net_device* netdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 struct sk_buff* FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,char*) ;
 int FUNC_8 (struct net_device*,char*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct ftgmac100 *VAR_3, unsigned int VAR_4,
      struct ftgmac100_rxdes *VAR_5, gfp_t VAR_6)
{
 struct net_device *VAR_7 = VAR_3->netdev;
 struct sk_buff *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_6(VAR_7, VAR_2);
 if (FUNC_9(!VAR_8)) {
  if (FUNC_5())
   FUNC_8(VAR_7, "failed to allocate rx skb\n");
  VAR_10 = -VAR_1;
  VAR_9 = VAR_3->rx_scratch_dma;
 } else {
  VAR_9 = FUNC_2(VAR_3->dev, VAR_8->data, VAR_2,
         VAR_0);
  if (FUNC_9(FUNC_3(VAR_3->dev, VAR_9))) {
   if (FUNC_5())
    FUNC_7(VAR_7, "failed to map rx page\n");
   FUNC_1(VAR_8);
   VAR_9 = VAR_3->rx_scratch_dma;
   VAR_8 = ((void*)0);
   VAR_10 = -VAR_1;
  }
 }


 VAR_3->rx_skbs[VAR_4] = VAR_8;


 VAR_5->rxdes3 = FUNC_0(VAR_9);


 FUNC_4();


 if (VAR_4 == (VAR_3->rx_q_entries - 1))
  VAR_5->rxdes0 = FUNC_0(VAR_3->rxdes0_edorr_mask);
 else
  VAR_5->rxdes0 = 0;

 return VAR_10;
}
