
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_delay_struct {int tx_delay; int rx_delay; } ;
struct mediatek_dwmac_plat_data {int phy_mode; int dev; struct mac_delay_struct mac_delay; } ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct mediatek_dwmac_plat_data *VAR_0)
{
 struct mac_delay_struct *VAR_1 = &VAR_0->mac_delay;

 switch (VAR_0->phy_mode) {
 case 133:
 case 128:

  VAR_1->tx_delay /= 550;
  VAR_1->rx_delay /= 550;
  break;
 case 132:
 case 129:
 case 130:
 case 131:

  VAR_1->tx_delay /= 170;
  VAR_1->rx_delay /= 170;
  break;
 default:
  FUNC_0(VAR_0->dev, "phy interface not supported\n");
  break;
 }
}
