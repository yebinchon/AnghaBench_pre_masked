
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct bcm_enet_priv {int hw_mtu; int dma_maxburst; int rx_skb_size; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bcm_enet_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, int VAR_4)
{
 struct bcm_enet_priv *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = VAR_4;

 if (FUNC_2(VAR_3))
  return -VAR_0;


 VAR_6 += VAR_2;







 VAR_5->hw_mtu = VAR_6;





 VAR_5->rx_skb_size = FUNC_0(VAR_6 + VAR_1,
      VAR_5->dma_maxburst * 4);

 VAR_3->mtu = VAR_4;
 return 0;
}
