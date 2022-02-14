
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tx_desc {int dummy; } ;
struct rx_desc {int dummy; } ;
struct pxa168_eth_private {int tx_curr_desc_q; int rx_curr_desc_q; scalar_t__ rx_desc_dma; scalar_t__ tx_desc_dma; } ;
struct net_device {int phydev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 struct pxa168_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct pxa168_eth_private*,int ) ;
 int FUNC_3 (struct pxa168_eth_private*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_10)
{
 unsigned int VAR_11 = 0;
 struct pxa168_eth_private *VAR_12 = FUNC_0(VAR_10);
 int VAR_13, VAR_14;

 FUNC_1(VAR_10->phydev);


 VAR_13 = VAR_12->tx_curr_desc_q;
 FUNC_3(VAR_12, VAR_2,
     (u32) (VAR_12->tx_desc_dma + VAR_13 * sizeof(struct tx_desc)));


 VAR_14 = VAR_12->rx_curr_desc_q;
 FUNC_3(VAR_12, VAR_1,
     (u32) (VAR_12->rx_desc_dma + VAR_14 * sizeof(struct rx_desc)));

 FUNC_3(VAR_12, VAR_3,
     (u32) (VAR_12->rx_desc_dma + VAR_14 * sizeof(struct rx_desc)));


 FUNC_3(VAR_12, VAR_4, 0);


 FUNC_3(VAR_12, VAR_5, VAR_0);

 VAR_11 = FUNC_2(VAR_12, VAR_7);
 VAR_11 |= VAR_6;
 FUNC_3(VAR_12, VAR_7, VAR_11);


 VAR_11 = FUNC_2(VAR_12, VAR_8);
 VAR_11 |= VAR_9;
 FUNC_3(VAR_12, VAR_8, VAR_11);
}
