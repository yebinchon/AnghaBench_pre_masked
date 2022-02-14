
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_channel {scalar_t__ band; int center_freq; } ;
struct ath5k_eeprom_info {int** ee_spur_chans; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {int ah_bwmode; TYPE_1__ ah_capabilities; } ;
typedef int s32 ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (struct ath5k_hw*,int ,int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath5k_hw*,int ,int ,int) ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_4 (struct ath5k_hw*,int ) ;
 int FUNC_5 (struct ath5k_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_6(struct ath5k_hw *VAR_34,
    struct ieee80211_channel *VAR_35)
{
 struct ath5k_eeprom_info *VAR_36 = &VAR_34->ah_capabilities.cap_eeprom;
 u32 VAR_37[4] = {0, 0, 0, 0};
 u32 VAR_38[2] = {0, 0};

 u16 VAR_39, VAR_40, VAR_41, VAR_42;
 s32 VAR_43, VAR_44;
 s32 VAR_45, VAR_46;
 u8 VAR_47, VAR_48, VAR_49;




 if (VAR_35->band == VAR_32) {
  VAR_40 = (VAR_35->center_freq - 2300) * 10;
  VAR_49 = VAR_0;
 } else {
  VAR_40 = (VAR_35->center_freq - 4900) * 10;
  VAR_49 = VAR_1;
 }



 VAR_39 = VAR_2;
 VAR_42 = VAR_30;

 if (VAR_34->ah_bwmode == 129)
  VAR_42 *= 2;

 for (VAR_48 = 0; VAR_48 < VAR_3; VAR_48++) {
  VAR_39 = VAR_36->ee_spur_chans[VAR_48][VAR_49];



  if (VAR_39 == VAR_2) {
   VAR_39 &= VAR_4;
   break;
  }

  if ((VAR_40 - VAR_42 <=
  (VAR_39 & VAR_4)) &&
  (VAR_40 + VAR_42 >=
  (VAR_39 & VAR_4))) {
   VAR_39 &= VAR_4;
   break;
  }
 }


 if (VAR_39) {
  VAR_45 = VAR_39 - VAR_40;






  switch (VAR_34->ah_bwmode) {
  case 129:

   VAR_43 = (VAR_45 << 16) / 25;
   VAR_44 = (VAR_43 >> 10);
   VAR_41 = VAR_31 * 2;
   break;
  case 130:

   VAR_43 = (VAR_45 << 18) / 25;
   VAR_44 = (VAR_43 >> 10);
   VAR_41 = VAR_31 / 2;
   break;
  case 128:

   VAR_43 = (VAR_45 << 19) / 25;
   VAR_44 = (VAR_43 >> 10);
   VAR_41 = VAR_31 / 4;
   break;
  default:
   if (VAR_35->band == VAR_33) {

    VAR_43 = (VAR_45 << 17) / 25;
    VAR_44 =
      (VAR_43 >> 10);
    VAR_41 =
     VAR_31;
   } else {


    VAR_43 = (VAR_45 << 17) / 25;
    VAR_44 =
      (VAR_45 << 8) / 55;
    VAR_41 =
     VAR_31;
   }
   break;
  }






  VAR_46 = ((VAR_45 * 1000) << 4) / VAR_41;


  if (!(VAR_46 & 0xF))

   VAR_47 = 3;
  else

   VAR_47 = 4;

  for (VAR_48 = 0; VAR_48 < VAR_47; VAR_48++) {


   s32 VAR_50 =
    (VAR_46 / 16) + VAR_48 + 25;






   u8 VAR_51 =
    (VAR_48 == 0 || VAR_48 == (VAR_47 - 1))
        ? 1 : 2;

   if (VAR_50 >= 0 && VAR_50 <= 32) {
    if (VAR_50 <= 25)
     VAR_38[0] |= 1 << VAR_50;
    else if (VAR_50 >= 27)
     VAR_38[0] |= 1 << (VAR_50 - 1);
   } else if (VAR_50 >= 33 && VAR_50 <= 52)
    VAR_38[1] |= 1 << (VAR_50 - 33);


   if (VAR_50 >= -1 && VAR_50 <= 14)
    VAR_37[0] |=
     VAR_51 << (VAR_50 + 1) * 2;
   else if (VAR_50 >= 15 && VAR_50 <= 30)
    VAR_37[1] |=
     VAR_51 << (VAR_50 - 15) * 2;
   else if (VAR_50 >= 31 && VAR_50 <= 46)
    VAR_37[2] |=
     VAR_51 << (VAR_50 - 31) * 2;
   else if (VAR_50 >= 47 && VAR_50 <= 53)
    VAR_37[3] |=
     VAR_51 << (VAR_50 - 47) * 2;

  }


  FUNC_3(VAR_34, VAR_13,
     VAR_15, 0xff);

  FUNC_1(VAR_34, VAR_16,
     VAR_18 |
     VAR_17 |
     VAR_19);


  FUNC_5(VAR_34,
    FUNC_2(VAR_43,
     VAR_23) |
    FUNC_2(VAR_44,
    VAR_24) |
    VAR_25,
    VAR_22);


  FUNC_5(VAR_34, VAR_38[0], VAR_26);
  FUNC_3(VAR_34, VAR_27,
     VAR_28,
     VAR_38[1]);

  FUNC_5(VAR_34, VAR_38[0], VAR_29);
  FUNC_3(VAR_34, VAR_20,
     VAR_21,
     VAR_38[1]);


  FUNC_5(VAR_34, VAR_37[0], VAR_10);
  FUNC_5(VAR_34, VAR_37[1], VAR_11);
  FUNC_5(VAR_34, VAR_37[2], VAR_12);
  FUNC_3(VAR_34, VAR_13,
     VAR_14,
     VAR_37[3]);

  FUNC_5(VAR_34, VAR_37[0], VAR_5);
  FUNC_5(VAR_34, VAR_37[1], VAR_6);
  FUNC_5(VAR_34, VAR_37[2], VAR_7);
  FUNC_3(VAR_34, VAR_8,
     VAR_9,
     VAR_37[3]);

 } else if (FUNC_4(VAR_34, VAR_16) &
 VAR_19) {

  FUNC_3(VAR_34, VAR_13,
     VAR_15, 0);
  FUNC_0(VAR_34, VAR_16,
     VAR_18 |
     VAR_17 |
     VAR_19);
  FUNC_5(VAR_34, 0, VAR_22);


  FUNC_5(VAR_34, 0, VAR_26);
  FUNC_3(VAR_34, VAR_27,
     VAR_28,
     0);

  FUNC_5(VAR_34, 0, VAR_29);
  FUNC_3(VAR_34, VAR_20,
     VAR_21,
     0);


  FUNC_5(VAR_34, 0, VAR_10);
  FUNC_5(VAR_34, 0, VAR_11);
  FUNC_5(VAR_34, 0, VAR_12);
  FUNC_3(VAR_34, VAR_13,
     VAR_14,
     0);

  FUNC_5(VAR_34, 0, VAR_5);
  FUNC_5(VAR_34, 0, VAR_6);
  FUNC_5(VAR_34, 0, VAR_7);
  FUNC_3(VAR_34, VAR_8,
     VAR_9,
     0);
 }
}
