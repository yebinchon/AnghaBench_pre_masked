
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bgmac_dma_ring {int dummy; } ;
struct bgmac {struct bgmac_dma_ring* tx_ring; } ;
typedef int netdev_tx_t ;


 int FUNC_0 (struct bgmac*,struct bgmac_dma_ring*,struct sk_buff*) ;
 struct bgmac* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_2(struct sk_buff *VAR_0,
        struct net_device *VAR_1)
{
 struct bgmac *VAR_2 = FUNC_1(VAR_1);
 struct bgmac_dma_ring *VAR_3;


 VAR_3 = &VAR_2->tx_ring[0];
 return FUNC_0(VAR_2, VAR_3, VAR_0);
}
