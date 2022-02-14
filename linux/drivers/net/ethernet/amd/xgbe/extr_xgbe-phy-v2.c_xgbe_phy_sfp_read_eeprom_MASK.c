
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct xgbe_sfp_eeprom {int * extd; int * base; } ;
struct xgbe_prv_data {int netdev; int dev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int sfp_changed; int sfp_eeprom; } ;
typedef int sfp_eeprom ;
typedef int eeprom_addr ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int *,struct xgbe_sfp_eeprom*,int) ;
 int FUNC_2 (int *,struct xgbe_sfp_eeprom*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*,int ,scalar_t__*,int,struct xgbe_sfp_eeprom*,int) ;
 int FUNC_7 (struct xgbe_prv_data*,struct xgbe_sfp_eeprom*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (int ,int *,int) ;

__attribute__((used)) static int FUNC_11(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_phy_data *VAR_5 = VAR_4->phy_data;
 struct xgbe_sfp_eeprom VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_8(VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "%s: I2C error setting SFP MUX\n",
        FUNC_3(VAR_4->netdev));
  return VAR_8;
 }


 VAR_7 = 0;
 VAR_8 = FUNC_6(VAR_4, VAR_3,
    &VAR_7, sizeof(VAR_7),
    &VAR_6, sizeof(VAR_6));
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "%s: I2C error reading SFP EEPROM\n",
        FUNC_3(VAR_4->netdev));
  goto put;
 }


 if (!FUNC_10(VAR_6.base[VAR_1],
     VAR_6.base,
     sizeof(VAR_6.base) - 1)) {
  VAR_8 = -VAR_0;
  goto put;
 }

 if (!FUNC_10(VAR_6.extd[VAR_2],
     VAR_6.extd,
     sizeof(VAR_6.extd) - 1)) {
  VAR_8 = -VAR_0;
  goto put;
 }


 if (FUNC_1(&VAR_5->sfp_eeprom, &VAR_6, sizeof(VAR_6))) {
  VAR_5->sfp_changed = 1;

  if (FUNC_4(VAR_4))
   FUNC_7(VAR_4, &VAR_6);

  FUNC_2(&VAR_5->sfp_eeprom, &VAR_6, sizeof(VAR_6));

  FUNC_5(VAR_4);
 } else {
  VAR_5->sfp_changed = 0;
 }

put:
 FUNC_9(VAR_4);

 return VAR_8;
}
