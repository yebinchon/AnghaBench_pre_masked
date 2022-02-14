
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath5k_eeprom_info {scalar_t__ ee_is_hb63; int ee_misc1; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {scalar_t__ ah_radio; int ah_mac_version; TYPE_1__ ah_capabilities; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct ath5k_hw*,int ,int ) ;
 int FUNC_3 (struct ath5k_hw*,int ,int ) ;
 int FUNC_4 (struct ath5k_hw*,int ,int ,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (struct ath5k_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_6(struct ath5k_hw *VAR_24, bool VAR_25)
{
 struct ath5k_eeprom_info *VAR_26 = &VAR_24->ah_capabilities.cap_eeprom;
 u32 VAR_27, VAR_28, VAR_29;



 if ((FUNC_0(VAR_26->ee_misc1) ||
 FUNC_1(VAR_26->ee_misc1)) &&
 VAR_25) {


  FUNC_4(VAR_24, VAR_23, VAR_22, 1);

  FUNC_4(VAR_24, VAR_20, VAR_21, 61);



  FUNC_5(VAR_24, 0x1f, VAR_9);

  if ((VAR_24->ah_radio == VAR_17) ||
  (VAR_24->ah_radio == VAR_18) ||
  (VAR_24->ah_radio == VAR_15) ||
  (VAR_24->ah_mac_version == (VAR_19 >> 4)))
   VAR_28 = 0x14;
  else
   VAR_28 = 0x18;
  FUNC_5(VAR_24, VAR_28, VAR_14);

  if ((VAR_24->ah_radio == VAR_17) ||
  (VAR_24->ah_radio == VAR_18) ||
  (VAR_24->ah_mac_version == (VAR_19 >> 4))) {
   FUNC_5(VAR_24, 0x26, VAR_12);
   FUNC_5(VAR_24, 0x0d, VAR_3);
   FUNC_5(VAR_24, 0x07, VAR_7);
   FUNC_5(VAR_24, 0x3f, VAR_10);
   FUNC_4(VAR_24, VAR_0,
    VAR_2, 0x02);
  } else {
   FUNC_5(VAR_24, 0x0a, VAR_12);
   FUNC_5(VAR_24, 0x0c, VAR_3);
   FUNC_5(VAR_24, 0x03, VAR_7);
   FUNC_5(VAR_24, 0x20, VAR_10);
   FUNC_4(VAR_24, VAR_0,
    VAR_2, 0x03);
  }


  FUNC_3(VAR_24, VAR_0,
    VAR_1);

 } else {



  FUNC_2(VAR_24, VAR_0,
    VAR_1);

  FUNC_4(VAR_24, VAR_0,
    VAR_2, 0);


  FUNC_5(VAR_24, 0x1f, VAR_9);
  FUNC_5(VAR_24, VAR_13, VAR_12);

  if (VAR_24->ah_mac_version == (VAR_19 >> 4))
   VAR_27 = VAR_5;
  else if (VAR_26->ee_is_hb63)
   VAR_27 = VAR_6;
  else
   VAR_27 = VAR_4;
  FUNC_5(VAR_24, VAR_27, VAR_3);

  FUNC_5(VAR_24, VAR_8, VAR_7);
  FUNC_5(VAR_24, VAR_11, VAR_10);

  if ((VAR_24->ah_radio == VAR_17) ||
  (VAR_24->ah_radio == VAR_18) ||
  (VAR_24->ah_radio == VAR_15) ||
  (VAR_24->ah_mac_version == (VAR_19 >> 4)))
   VAR_28 = 0x14;
  else
   VAR_28 = 0x18;
  FUNC_5(VAR_24, VAR_28, VAR_14);


  FUNC_4(VAR_24, VAR_20, VAR_21, 1);

  if ((VAR_24->ah_radio == VAR_17) ||
   (VAR_24->ah_radio == VAR_18) ||
   (VAR_24->ah_radio == VAR_15) ||
   (VAR_24->ah_radio == VAR_16))
   VAR_29 = 40 - 1;
  else
   VAR_29 = 32 - 1;
  FUNC_4(VAR_24, VAR_23, VAR_22, VAR_29);
 }
}
