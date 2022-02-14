
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mac_delay_struct {int tx_delay; int tx_inv; int rx_delay; int rx_inv; } ;
struct mediatek_dwmac_plat_data {int phy_mode; int peri_regmap; int dev; int rmii_rxc; struct mac_delay_struct mac_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int) ;
 int VAR_13 ;
 int VAR_14 ;






 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mediatek_dwmac_plat_data*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mediatek_dwmac_plat_data *VAR_15)
{
 struct mac_delay_struct *VAR_16 = &VAR_15->mac_delay;
 u32 VAR_17 = 0, VAR_18 = 0;

 FUNC_2(VAR_15);

 switch (VAR_15->phy_mode) {
 case 133:
  VAR_17 |= FUNC_0(VAR_7, !!VAR_16->tx_delay);
  VAR_17 |= FUNC_0(VAR_9, VAR_16->tx_delay);
  VAR_17 |= FUNC_0(VAR_8, VAR_16->tx_inv);

  VAR_17 |= FUNC_0(VAR_4, !!VAR_16->rx_delay);
  VAR_17 |= FUNC_0(VAR_6, VAR_16->rx_delay);
  VAR_17 |= FUNC_0(VAR_5, VAR_16->rx_inv);
  break;
 case 128:






  if (VAR_15->rmii_rxc) {




   VAR_17 |= FUNC_0(VAR_4, !!VAR_16->rx_delay);
   VAR_17 |= FUNC_0(VAR_6, VAR_16->rx_delay);
   VAR_17 |= FUNC_0(VAR_5, VAR_16->rx_inv);
  } else {




   VAR_17 |= FUNC_0(VAR_7, !!VAR_16->rx_delay);
   VAR_17 |= FUNC_0(VAR_9, VAR_16->rx_delay);
   VAR_17 |= FUNC_0(VAR_8, VAR_16->rx_inv);
  }




  if (VAR_16->tx_inv)
   VAR_18 = VAR_12;
  break;
 case 132:
 case 129:
 case 130:
 case 131:
  VAR_18 = VAR_10 | VAR_11;

  VAR_17 |= FUNC_0(VAR_1, !!VAR_16->tx_delay);
  VAR_17 |= FUNC_0(VAR_3, VAR_16->tx_delay);
  VAR_17 |= FUNC_0(VAR_2, VAR_16->tx_inv);

  VAR_17 |= FUNC_0(VAR_4, !!VAR_16->rx_delay);
  VAR_17 |= FUNC_0(VAR_6, VAR_16->rx_delay);
  VAR_17 |= FUNC_0(VAR_5, VAR_16->rx_inv);
  break;
 default:
  FUNC_1(VAR_15->dev, "phy interface not supported\n");
  return -VAR_0;
 }
 FUNC_3(VAR_15->peri_regmap, VAR_13, VAR_17);
 FUNC_3(VAR_15->peri_regmap, VAR_14, VAR_18);

 return 0;
}
