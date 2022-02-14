
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_eeprom_info {scalar_t__ word_size; scalar_t__ type; } ;
struct e1000_hw {scalar_t__ mac_type; struct e1000_eeprom_info eeprom; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_5, u16 VAR_6, u16 VAR_7,
     u16 *VAR_8)
{
 struct e1000_eeprom_info *VAR_9 = &VAR_5->eeprom;
 s32 VAR_10 = 0;

 if (VAR_5->mac_type == VAR_3) {
  FUNC_0(VAR_2, VAR_6, VAR_7,
           VAR_8);
  return VAR_1;
 }




 if ((VAR_6 >= VAR_9->word_size) ||
     (VAR_7 > VAR_9->word_size - VAR_6) ||
     (VAR_7 == 0)) {
  FUNC_5("\"words\" parameter out of bounds\n");
  return -VAR_0;
 }


 if (FUNC_1(VAR_5) != VAR_1)
  return -VAR_0;

 if (VAR_9->type == VAR_4) {
  VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
 } else {
  VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
  FUNC_6(10);
 }


 FUNC_2(VAR_5);

 return VAR_10;
}
