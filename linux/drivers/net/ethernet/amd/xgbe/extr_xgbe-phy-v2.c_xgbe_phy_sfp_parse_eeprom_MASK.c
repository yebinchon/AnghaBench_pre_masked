
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xgbe_sfp_eeprom {int* base; } ;
struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ sfp_cable; int sfp_cable_len; int sfp_base; int sfp_speed; int sfp_rx_los; int sfp_tx_fault; struct xgbe_sfp_eeprom sfp_eeprom; } ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct xgbe_phy_data*) ;
 int FUNC_1 (struct xgbe_phy_data*) ;
 scalar_t__ FUNC_2 (struct xgbe_sfp_eeprom*,int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_22)
{
 struct xgbe_phy_data *VAR_23 = VAR_22->phy_data;
 struct xgbe_sfp_eeprom *VAR_24 = &VAR_23->sfp_eeprom;
 u8 *VAR_25;

 VAR_25 = VAR_24->base;

 if (VAR_25[VAR_14] != VAR_18)
  return;

 if (VAR_25[VAR_13] != VAR_17)
  return;


 VAR_23->sfp_tx_fault = FUNC_1(VAR_23);
 VAR_23->sfp_rx_los = FUNC_0(VAR_23);


 if (VAR_25[VAR_10] & VAR_11) {
  VAR_23->sfp_cable = VAR_16;
  VAR_23->sfp_cable_len = VAR_25[VAR_12];
 } else {
  VAR_23->sfp_cable = VAR_15;
 }


 if (VAR_25[VAR_0] & VAR_4)
  VAR_23->sfp_base = 132;
 else if (VAR_25[VAR_0] & VAR_2)
  VAR_23->sfp_base = 134;
 else if (VAR_25[VAR_0] & VAR_3)
  VAR_23->sfp_base = 133;
 else if (VAR_25[VAR_0] & VAR_1)
  VAR_23->sfp_base = 135;
 else if (VAR_25[VAR_5] & VAR_8)
  VAR_23->sfp_base = 129;
 else if (VAR_25[VAR_5] & VAR_7)
  VAR_23->sfp_base = 130;
 else if (VAR_25[VAR_5] & VAR_6)
  VAR_23->sfp_base = 131;
 else if (VAR_25[VAR_5] & VAR_9)
  VAR_23->sfp_base = 128;
 else if ((VAR_23->sfp_cable == VAR_16) &&
   FUNC_2(VAR_24, VAR_20))
  VAR_23->sfp_base = 136;

 switch (VAR_23->sfp_base) {
 case 128:
  VAR_23->sfp_speed = VAR_21;
  break;
 case 129:
 case 130:
 case 131:
  VAR_23->sfp_speed = VAR_19;
  break;
 case 132:
 case 134:
 case 133:
 case 135:
 case 136:
  VAR_23->sfp_speed = VAR_20;
  break;
 default:
  break;
 }
}
