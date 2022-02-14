
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlme_priv {int dummy; } ;
struct eeprom_priv {scalar_t__ CustomerID; } ;
struct adapter {scalar_t__ in_cta_test; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 struct eeprom_priv* FUNC_0 (struct adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct mlme_priv*,int) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int) ;
 int FUNC_5 (struct adapter*,int ,int) ;
 int FUNC_6 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct adapter *VAR_13, u8 VAR_14, u8 *VAR_15)
{
 u8 VAR_16;
 u16 VAR_17;
 u32 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 struct mlme_priv *VAR_21;
 struct eeprom_priv *VAR_22;


 VAR_19 = 0x30;
 VAR_20 = *(u8 *)VAR_15;
 VAR_21 = &VAR_13->mlmepriv;
 VAR_22 = FUNC_0(VAR_13);

 if (VAR_20 == 0) {


  FUNC_4(VAR_13, VAR_6, 0xFFFF);

  VAR_18 = FUNC_2(VAR_13, VAR_4);
  if (VAR_13->in_cta_test)
   VAR_18 &= ~(VAR_2 | VAR_1);
  else
   VAR_18 |= VAR_2|VAR_1;
  FUNC_5(VAR_13, VAR_4, VAR_18);

  if (FUNC_1(VAR_21, VAR_12) == 1)
   VAR_19 = (VAR_22->CustomerID == VAR_9) ? 7 : 48;
  else
   VAR_19 = 0x7;
 } else if (VAR_20 == 1)
  FUNC_4(VAR_13, VAR_6, 0x00);
 else if (VAR_20 == 2) {

  VAR_16 = FUNC_3(VAR_13, VAR_3);
  VAR_16 &= ~VAR_0;
  FUNC_6(VAR_13, VAR_3, VAR_16);

  if (FUNC_1(VAR_21, VAR_11|VAR_10))
   VAR_19 = 0x7;
 }

 VAR_17 = (VAR_19 << VAR_8) | (VAR_19 << VAR_7);
 FUNC_4(VAR_13, VAR_5, VAR_17);
}
