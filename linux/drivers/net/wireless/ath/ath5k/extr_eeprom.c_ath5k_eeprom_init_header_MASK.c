
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ath5k_eeprom_info {scalar_t__ ee_version; int** ee_ob; int** ee_db; int ee_is_hb63; int ee_rfkill_pol; int ee_serdes; scalar_t__ ee_rfkill_pin; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {scalar_t__ ah_ee_version; int ah_mac_version; TYPE_1__ ah_capabilities; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
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
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ FUNC_4 (int,int ) ;
 int VAR_34 ;
 int FUNC_5 (struct ath5k_hw*,char*,int,int,...) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;

__attribute__((used)) static int
FUNC_6(struct ath5k_hw *VAR_49)
{
 struct ath5k_eeprom_info *VAR_50 = &VAR_49->ah_capabilities.cap_eeprom;
 u16 VAR_51;
 u32 VAR_52, VAR_53, VAR_54 = VAR_3;




 FUNC_3(VAR_5, VAR_38);
 FUNC_3(VAR_19, VAR_46);
 FUNC_3(VAR_20, VAR_47);
 FUNC_3(VAR_28, VAR_48);
 FUNC_3(VAR_0, VAR_37);


 if (VAR_49->ah_ee_version < VAR_29)
  return 0;





 FUNC_2(VAR_26, VAR_51);
 if (VAR_51) {
  VAR_54 = (VAR_51 & VAR_27) <<
      VAR_24;
  FUNC_2(VAR_25, VAR_51);
  VAR_54 = (VAR_54 | VAR_51) - VAR_1;






  if (VAR_54 > (3 * VAR_3)) {
   FUNC_5(VAR_49, "Invalid max custom EEPROM size: "
      "%d (0x%04x) max expected: %d (0x%04x)\n",
      VAR_54, VAR_54,
      3 * VAR_3,
      3 * VAR_3);
   return -VAR_35;
  }
 }

 for (VAR_52 = 0, VAR_53 = 0; VAR_53 < VAR_54; VAR_53++) {
  FUNC_2(FUNC_1(VAR_53), VAR_51);
  VAR_52 ^= VAR_51;
 }
 if (VAR_52 != VAR_2) {
  FUNC_5(VAR_49, "Invalid EEPROM "
     "checksum: 0x%04x eep_max: 0x%04x (%s)\n",
     VAR_52, VAR_54,
     VAR_54 == VAR_3 ?
    "default size" : "custom size");
  return -VAR_35;
 }

 FUNC_3(FUNC_0(VAR_49->ah_ee_version),
     VAR_36);

 if (VAR_49->ah_ee_version >= VAR_31) {
  FUNC_3(VAR_6, VAR_39);
  FUNC_3(VAR_7, VAR_40);


  FUNC_3(VAR_8, VAR_41);

  if (VAR_50->ee_version >= VAR_32)
   FUNC_3(VAR_9, VAR_42);

  if (VAR_50->ee_version >= VAR_33) {
   FUNC_3(VAR_10, VAR_43);
   FUNC_3(VAR_11, VAR_44);
   FUNC_3(VAR_12, VAR_45);
  }
 }

 if (VAR_49->ah_ee_version < VAR_30) {
  FUNC_2(VAR_15, VAR_51);
  VAR_50->ee_ob[VAR_13][0] = VAR_51 & 0x7;
  VAR_50->ee_db[VAR_13][0] = (VAR_51 >> 3) & 0x7;

  FUNC_2(VAR_16, VAR_51);
  VAR_50->ee_ob[VAR_14][0] = VAR_51 & 0x7;
  VAR_50->ee_db[VAR_14][0] = (VAR_51 >> 3) & 0x7;
 }

 FUNC_2(VAR_4, VAR_51);

 if ((VAR_49->ah_mac_version == (VAR_34 >> 4)) && VAR_51)
  VAR_50->ee_is_hb63 = 1;
 else
  VAR_50->ee_is_hb63 = 0;

 FUNC_2(VAR_21, VAR_51);
 VAR_50->ee_rfkill_pin = (u8) FUNC_4(VAR_51, VAR_22);
 VAR_50->ee_rfkill_pol = VAR_51 & VAR_23 ? 1 : 0;







 FUNC_2(VAR_17, VAR_51);
 VAR_50->ee_serdes = (VAR_51 == VAR_18) ?
       1 : 0;

 return 0;
}
