
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct xgbe_sfp_eeprom {int dummy; } ;
struct xgbe_prv_data {int netdev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ port_mode; scalar_t__ sfp_mod_absent; } ;
struct ethtool_eeprom {unsigned int len; int offset; } ;
typedef int eeprom_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct xgbe_sfp_eeprom*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*,int ,scalar_t__*,int,scalar_t__*,int) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_8(struct xgbe_prv_data *VAR_9,
      struct ethtool_eeprom *VAR_10, u8 *VAR_11)
{
 struct xgbe_phy_data *VAR_12 = VAR_9->phy_data;
 u8 VAR_13, VAR_14[VAR_7];
 struct xgbe_sfp_eeprom *VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 int VAR_19;

 VAR_18 = VAR_10->len;

 if (!VAR_10->len) {
  VAR_19 = -VAR_0;
  goto done;
 }

 if ((VAR_10->offset + VAR_10->len) > VAR_7) {
  VAR_19 = -VAR_0;
  goto done;
 }

 if (VAR_12->port_mode != VAR_3) {
  VAR_19 = -VAR_2;
  goto done;
 }

 if (!FUNC_2(VAR_9->netdev)) {
  VAR_19 = -VAR_1;
  goto done;
 }

 if (VAR_12->sfp_mod_absent) {
  VAR_19 = -VAR_1;
  goto done;
 }

 VAR_19 = FUNC_3(VAR_9);
 if (VAR_19) {
  VAR_19 = -VAR_1;
  goto done;
 }

 VAR_19 = FUNC_6(VAR_9);
 if (VAR_19) {
  FUNC_1(VAR_9->netdev, "I2C error setting SFP MUX\n");
  VAR_19 = -VAR_1;
  goto put_own;
 }


 VAR_13 = 0;
 VAR_19 = FUNC_4(VAR_9, VAR_8,
    &VAR_13, sizeof(VAR_13),
    VAR_14, VAR_5);
 if (VAR_19) {
  FUNC_1(VAR_9->netdev,
      "I2C error reading SFP EEPROM\n");
  VAR_19 = -VAR_1;
  goto put_mux;
 }

 VAR_15 = (struct xgbe_sfp_eeprom *)VAR_14;

 if (FUNC_0(VAR_15)) {

  VAR_13 = 0;
  VAR_19 = FUNC_4(VAR_9, VAR_4,
     &VAR_13, sizeof(VAR_13),
     VAR_14 + VAR_5,
     VAR_6);
  if (VAR_19) {
   FUNC_1(VAR_9->netdev,
       "I2C error reading SFP DIAGS\n");
   VAR_19 = -VAR_1;
   goto put_mux;
  }
 }

 for (VAR_16 = 0, VAR_17 = VAR_10->offset; VAR_16 < VAR_10->len; VAR_16++, VAR_17++) {
  if ((VAR_17 >= VAR_5) &&
      !FUNC_0(VAR_15))
   break;

  VAR_11[VAR_16] = VAR_14[VAR_17];
  VAR_18--;
 }

put_mux:
 FUNC_7(VAR_9);

put_own:
 FUNC_5(VAR_9);

done:
 VAR_10->len -= VAR_18;

 return VAR_19;
}
