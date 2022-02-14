
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_queue {int dummy; } ;
struct rx_queue {int rx_curr_desc; scalar_t__ rx_desc_dma; } ;
struct rx_desc {int dummy; } ;
struct net_device {int features; scalar_t__ phydev; } ;
struct mv643xx_eth_private {int txq_count; int rxq_count; struct rx_queue* rxq; struct net_device* dev; struct tx_queue* txq; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,struct ethtool_link_ksettings*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,struct ethtool_link_ksettings const*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct mv643xx_eth_private*,int ) ;
 int FUNC_8 (struct rx_queue*) ;
 int FUNC_9 (struct mv643xx_eth_private*,int,int) ;
 int FUNC_10 (struct tx_queue*) ;
 int FUNC_11 (struct tx_queue*) ;
 int FUNC_12 (struct tx_queue*,int,int) ;
 int FUNC_13 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_14(struct mv643xx_eth_private *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->dev;
 u32 VAR_7;
 int VAR_8;




 if (VAR_6->phydev) {
  struct ethtool_link_ksettings VAR_9;

  FUNC_1(VAR_6, &VAR_9);
  FUNC_5(VAR_6->phydev);
  FUNC_4(
   VAR_6, (const struct ethtool_link_ksettings *)&VAR_9);
  FUNC_6(VAR_6->phydev);
 }




 VAR_7 = FUNC_7(VAR_5, VAR_3);

 VAR_7 |= VAR_4;
 FUNC_13(VAR_5, VAR_3, VAR_7);

 VAR_7 |= VAR_0;
 if (!VAR_6->phydev)
  VAR_7 |= VAR_1;
 FUNC_13(VAR_5, VAR_3, VAR_7);




 FUNC_9(VAR_5, 1000000000, 16777216);
 for (VAR_8 = 0; VAR_8 < VAR_5->txq_count; VAR_8++) {
  struct tx_queue *VAR_10 = VAR_5->txq + VAR_8;

  FUNC_10(VAR_10);
  FUNC_12(VAR_10, 1000000000, 16777216);
  FUNC_11(VAR_10);
 }






 FUNC_3(VAR_5->dev, VAR_5->dev->features);




 FUNC_13(VAR_5, VAR_2, 0x00000000);




 FUNC_2(VAR_5->dev);




 for (VAR_8 = 0; VAR_8 < VAR_5->rxq_count; VAR_8++) {
  struct rx_queue *VAR_11 = VAR_5->rxq + VAR_8;
  u32 VAR_12;

  VAR_12 = (u32)VAR_11->rx_desc_dma;
  VAR_12 += VAR_11->rx_curr_desc * sizeof(struct rx_desc);
  FUNC_13(VAR_5, FUNC_0(VAR_8), VAR_12);

  FUNC_8(VAR_11);
 }
}
