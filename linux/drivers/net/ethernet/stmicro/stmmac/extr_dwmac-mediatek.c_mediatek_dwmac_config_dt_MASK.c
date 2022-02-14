
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mac_delay_struct {void* rx_inv; void* tx_inv; scalar_t__ rx_delay; scalar_t__ tx_delay; } ;
struct mediatek_dwmac_plat_data {scalar_t__ phy_mode; int np; void* rmii_rxc; int dev; TYPE_1__* variant; int peri_regmap; struct mac_delay_struct mac_delay; } ;
struct TYPE_2__ {scalar_t__ tx_delay_max; scalar_t__ rx_delay_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,scalar_t__*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct mediatek_dwmac_plat_data *VAR_1)
{
 struct mac_delay_struct *VAR_2 = &VAR_1->mac_delay;
 u32 VAR_3, VAR_4;

 VAR_1->peri_regmap = FUNC_6(VAR_1->np, "mediatek,pericfg");
 if (FUNC_0(VAR_1->peri_regmap)) {
  FUNC_2(VAR_1->dev, "Failed to get pericfg syscon\n");
  return FUNC_1(VAR_1->peri_regmap);
 }

 VAR_1->phy_mode = FUNC_3(VAR_1->np);
 if (VAR_1->phy_mode < 0) {
  FUNC_2(VAR_1->dev, "not find phy-mode\n");
  return -VAR_0;
 }

 if (!FUNC_5(VAR_1->np, "mediatek,tx-delay-ps", &VAR_3)) {
  if (VAR_3 < VAR_1->variant->tx_delay_max) {
   VAR_2->tx_delay = VAR_3;
  } else {
   FUNC_2(VAR_1->dev, "Invalid TX clock delay: %dps\n", VAR_3);
   return -VAR_0;
  }
 }

 if (!FUNC_5(VAR_1->np, "mediatek,rx-delay-ps", &VAR_4)) {
  if (VAR_4 < VAR_1->variant->rx_delay_max) {
   VAR_2->rx_delay = VAR_4;
  } else {
   FUNC_2(VAR_1->dev, "Invalid RX clock delay: %dps\n", VAR_4);
   return -VAR_0;
  }
 }

 VAR_2->tx_inv = FUNC_4(VAR_1->np, "mediatek,txc-inverse");
 VAR_2->rx_inv = FUNC_4(VAR_1->np, "mediatek,rxc-inverse");
 VAR_1->rmii_rxc = FUNC_4(VAR_1->np, "mediatek,rmii-rxc");

 return 0;
}
