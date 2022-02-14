
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_eeprom_info {scalar_t__ word_size; scalar_t__ type; int address_bits; int opcode_bits; } ;
struct e1000_hw {scalar_t__ mac_type; struct e1000_eeprom_info eeprom; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int) ;
 int FUNC_5 (struct e1000_hw*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_9, u16 VAR_10, u16 VAR_11,
    u16 *VAR_12)
{
 struct e1000_eeprom_info *VAR_13 = &VAR_9->eeprom;
 u32 VAR_14 = 0;

 if (VAR_9->mac_type == VAR_6) {
  FUNC_0(VAR_5, VAR_10, VAR_11,
          VAR_12);
  return VAR_1;
 }




 if ((VAR_10 >= VAR_13->word_size) ||
     (VAR_11 > VAR_13->word_size - VAR_10) ||
     (VAR_11 == 0)) {
  FUNC_8("\"words\" parameter out of bounds. Words = %d,"
        "size = %d\n", VAR_10, VAR_13->word_size);
  return -VAR_0;
 }






 if (FUNC_2(VAR_9) != VAR_1)
  return -VAR_0;




 if (VAR_13->type == VAR_8) {
  u16 VAR_15;
  u8 VAR_16 = VAR_4;

  if (FUNC_6(VAR_9)) {
   FUNC_3(VAR_9);
   return -VAR_0;
  }

  FUNC_7(VAR_9);




  if ((VAR_13->address_bits == 8) && (VAR_10 >= 128))
   VAR_16 |= VAR_2;


  FUNC_5(VAR_9, VAR_16, VAR_13->opcode_bits);
  FUNC_5(VAR_9, (u16)(VAR_10 * 2),
     VAR_13->address_bits);
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
   VAR_15 = FUNC_4(VAR_9, 16);
   VAR_12[VAR_14] = (VAR_15 >> 8) | (VAR_15 << 8);
  }
 } else if (VAR_13->type == VAR_7) {
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {

   FUNC_5(VAR_9,
      VAR_3,
      VAR_13->opcode_bits);
   FUNC_5(VAR_9, (u16)(VAR_10 + VAR_14),
      VAR_13->address_bits);




   VAR_12[VAR_14] = FUNC_4(VAR_9, 16);
   FUNC_7(VAR_9);
   FUNC_1();
  }
 }


 FUNC_3(VAR_9);

 return VAR_1;
}
