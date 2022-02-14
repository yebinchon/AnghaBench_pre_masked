
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int * ofdm_index; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_hal {scalar_t__ current_bandtype; scalar_t__ hw_type; } ;
struct rtl_dm {int swing_diff_2g; int swing_diff_5g; int default_ofdm_index; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;
typedef enum band_type { ____Placeholder_band_type } band_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,scalar_t__,size_t) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int) ;
 struct rtl_dm* FUNC_6 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct rtl_priv*,int ) ;
 int FUNC_10 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_11 (struct rtl_priv*,int ,int) ;
 int FUNC_12 (int) ;

void FUNC_13(struct ieee80211_hw *VAR_19, u8 VAR_20)
{
 struct rtl_priv *VAR_21 = FUNC_8(VAR_19);
 struct rtl_hal *VAR_22 = FUNC_7(FUNC_8(VAR_19));
 struct rtl_dm *VAR_23 = FUNC_6(VAR_21);
 u8 VAR_24 = VAR_22->current_bandtype;
 u32 VAR_25, VAR_26;
 s8 VAR_27;

 VAR_25 = FUNC_5(VAR_19, VAR_18, 0xf0);
 VAR_26 = FUNC_5(VAR_19, VAR_12, 0x0f000000);
 VAR_22->current_bandtype = (enum band_type) VAR_20;

 if (VAR_22->current_bandtype == VAR_0) {

  FUNC_10(VAR_19, VAR_17, VAR_2|VAR_1, 0x03);

  if (VAR_22->hw_type == VAR_8) {

   FUNC_10(VAR_19, VAR_9, 0xF000, 0x7);

   FUNC_10(VAR_19, VAR_9, 0xF0, 0x7);
  }

  if (VAR_22->hw_type == VAR_7) {

   FUNC_10(VAR_19, 0x834, 0x3, 0x1);
  }

  if (VAR_22->hw_type == VAR_8) {

   FUNC_10(VAR_19, VAR_10, 0xF00, 0);
  } else {

   FUNC_10(VAR_19, 0x82c, 0x3, 0);
  }

  if (VAR_22->hw_type == VAR_7)
   FUNC_1(VAR_19);

  FUNC_10(VAR_19, VAR_18, 0xf0, 0x1);
  FUNC_10(VAR_19, VAR_12, 0x0f000000, 0x1);

  FUNC_11(VAR_21, VAR_13, 0x0);
 } else {
  u16 VAR_28, VAR_29;

  if (VAR_22->hw_type == VAR_8) {

   FUNC_10(VAR_19, VAR_9, 0xF000, 0x5);

   FUNC_10(VAR_19, VAR_9, 0xF0, 0x4);
  }

  FUNC_11(VAR_21, VAR_13, 0x80);

  VAR_28 = 0;
  VAR_29 = FUNC_9(VAR_21, VAR_14);
  FUNC_0(VAR_21, VAR_4, VAR_5,
    "Reg41A value %d\n", VAR_29);
  VAR_29 &= 0x30;
  while ((VAR_29 != 0x30) && (VAR_28 < 50)) {
   FUNC_12(50);
   FUNC_0(VAR_21, VAR_4, VAR_5, "Delay 50us\n");

   VAR_29 = FUNC_9(VAR_21, VAR_14);
   VAR_29 &= 0x30;
   VAR_28++;
   FUNC_0(VAR_21, VAR_4, VAR_5,
     "Reg41A value %d\n", VAR_29);
  }
  if (VAR_28 != 0)
   FUNC_0(VAR_21, VAR_3, VAR_5,
     "PHY_SwitchWirelessBand8812(): Switch to 5G Band. Count = %d reg41A=0x%x\n",
     VAR_28, VAR_29);



  FUNC_10(VAR_19, VAR_17, VAR_2|VAR_1, 0x03);

  if (VAR_22->hw_type == VAR_7) {

   FUNC_10(VAR_19, 0x834, 0x3, 0x2);
  }

  if (VAR_22->hw_type == VAR_8) {


   FUNC_10(VAR_19, VAR_10, 0xF00, 1);
  } else

   FUNC_10(VAR_19, 0x82c, 0x3, 1);

  if (VAR_22->hw_type == VAR_7)
   FUNC_2(VAR_19);

  FUNC_10(VAR_19, VAR_18, 0xf0, 0);
  FUNC_10(VAR_19, VAR_12, 0x0f000000, 0xf);

  FUNC_0(VAR_21, VAR_4, VAR_5,
    "==>PHY_SwitchWirelessBand8812() BAND_ON_5G settings OFDM index 0x%x\n",
    VAR_21->dm.ofdm_index[VAR_15]);
 }

 if ((VAR_22->hw_type == VAR_8) ||
     (VAR_22->hw_type == VAR_7)) {

  FUNC_10(VAR_19, VAR_10, 0xFFE00000,
         FUNC_3(VAR_19, VAR_20, VAR_15));

  FUNC_10(VAR_19, VAR_11, 0xFFE00000,
         FUNC_3(VAR_19, VAR_20, VAR_16));





  if (VAR_20 != VAR_24) {
   VAR_27 =
    (VAR_23->swing_diff_2g - VAR_23->swing_diff_5g);
   VAR_27 = (VAR_20 == VAR_0) ?
      VAR_27 :
      (-1 * VAR_27);
   VAR_23->default_ofdm_index += VAR_27 * 2;
  }
  FUNC_4(VAR_19);
 }

 FUNC_0(VAR_21, VAR_4, VAR_6,
   "<==rtl8821ae_phy_switch_wirelessband():Switch Band OK.\n");
 return;
}
