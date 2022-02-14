
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int low_rssi_thresh; int fast_div_bias; } ;
struct ath_softc {int driver_data; TYPE_2__ ant_comb; struct ath_hw* sc_ah; } ;
struct TYPE_6__ {int xlna_gpio; int xatten_margin_cfg; int alt_mingainidx; int ant_ctrl_comm2g_switch_enable; int pcie_waen; int pll_pwrsave; int led_active_high; } ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {TYPE_3__ config; struct ath9k_hw_capabilities caps; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct TYPE_4__ {scalar_t__ ath_bus_type; } ;


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
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_common*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct ath_softc *VAR_15)
{
 struct ath_hw *VAR_16 = VAR_15->sc_ah;
 struct ath9k_hw_capabilities *VAR_17 = &VAR_16->caps;
 struct ath_common *VAR_18 = FUNC_1(VAR_16);

 if (!FUNC_0(VAR_14))
  return;

 if (VAR_18->bus_ops->ath_bus_type != VAR_13)
  return;

 if (VAR_15->driver_data & (VAR_5 |
          VAR_7)) {
  VAR_16->config.xlna_gpio = 9;
  VAR_16->config.xatten_margin_cfg = 1;
  VAR_16->config.alt_mingainidx = 1;
  VAR_16->config.ant_ctrl_comm2g_switch_enable = 0x000BBB88;
  VAR_15->ant_comb.low_rssi_thresh = 20;
  VAR_15->ant_comb.fast_div_bias = 3;

  FUNC_2(VAR_18, "Set parameters for %s\n",
    (VAR_15->driver_data & VAR_5) ?
    "CUS198" : "CUS230");
 }

 if (VAR_15->driver_data & VAR_6)
  FUNC_2(VAR_18, "CUS217 card detected\n");

 if (VAR_15->driver_data & VAR_8)
  FUNC_2(VAR_18, "CUS252 card detected\n");

 if (VAR_15->driver_data & VAR_2)
  FUNC_2(VAR_18, "WB335 1-ANT card detected\n");

 if (VAR_15->driver_data & VAR_3)
  FUNC_2(VAR_18, "WB335 2-ANT card detected\n");

 if (VAR_15->driver_data & VAR_10)
  FUNC_2(VAR_18, "Killer Wireless card detected\n");







 if (VAR_15->driver_data & (VAR_2 | VAR_3)) {
  if (!(VAR_15->driver_data & VAR_4))
   VAR_17->hw_caps &= ~VAR_0;
 }

 if (VAR_15->driver_data & VAR_4) {
  VAR_17->hw_caps |= VAR_1;
  FUNC_2(VAR_18, "Set BT/WLAN RX diversity capability\n");
 }

 if (VAR_15->driver_data & VAR_9) {
  VAR_16->config.pcie_waen = 0x0040473b;
  FUNC_2(VAR_18, "Enable WAR for ASPM D3/L1\n");
 }






 VAR_16->config.pll_pwrsave = 1;

 if (VAR_15->driver_data & VAR_12) {
  VAR_16->config.pll_pwrsave = 0;
  FUNC_2(VAR_18, "Disable PLL PowerSave\n");
 }

 if (VAR_15->driver_data & VAR_11)
  VAR_16->config.led_active_high = 1;
}
