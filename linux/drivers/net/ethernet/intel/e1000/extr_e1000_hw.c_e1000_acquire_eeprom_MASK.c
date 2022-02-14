
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_eeprom_info {scalar_t__ type; } ;
struct e1000_hw {scalar_t__ mac_type; struct e1000_eeprom_info eeprom; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_12)
{
 struct e1000_eeprom_info *VAR_13 = &VAR_12->eeprom;
 u32 VAR_14, VAR_15 = 0;

 VAR_14 = FUNC_2(VAR_8);


 if (VAR_12->mac_type > VAR_9) {
  VAR_14 |= VAR_3;
  FUNC_3(VAR_8, VAR_14);
  VAR_14 = FUNC_2(VAR_8);
  while ((!(VAR_14 & VAR_2)) &&
         (VAR_15 < VAR_5)) {
   VAR_15++;
   FUNC_4(5);
   VAR_14 = FUNC_2(VAR_8);
  }
  if (!(VAR_14 & VAR_2)) {
   VAR_14 &= ~VAR_3;
   FUNC_3(VAR_8, VAR_14);
   FUNC_1("Could not acquire EEPROM grant\n");
   return -VAR_6;
  }
 }



 if (VAR_13->type == VAR_10) {

  VAR_14 &= ~(VAR_1 | VAR_4);
  FUNC_3(VAR_8, VAR_14);


  VAR_14 |= VAR_0;
  FUNC_3(VAR_8, VAR_14);
 } else if (VAR_13->type == VAR_11) {

  VAR_14 &= ~(VAR_0 | VAR_4);
  FUNC_3(VAR_8, VAR_14);
  FUNC_0();
  FUNC_4(1);
 }

 return VAR_7;
}
