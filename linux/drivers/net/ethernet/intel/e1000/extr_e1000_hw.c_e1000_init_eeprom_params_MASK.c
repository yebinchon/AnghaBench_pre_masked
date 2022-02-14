
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_eeprom_info {scalar_t__ type; int word_size; int opcode_bits; int address_bits; int delay_usec; int page_size; } ;
struct e1000_hw {int mac_type; struct e1000_eeprom_info eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_1 (int ) ;

s32 FUNC_2(struct e1000_hw *VAR_11)
{
 struct e1000_eeprom_info *VAR_12 = &VAR_11->eeprom;
 u32 VAR_13 = FUNC_1(VAR_4);
 s32 VAR_14 = VAR_3;
 u16 VAR_15;

 switch (VAR_11->mac_type) {
 case 137:
 case 136:
 case 135:
 case 134:
  VAR_12->type = VAR_9;
  VAR_12->word_size = 64;
  VAR_12->opcode_bits = 3;
  VAR_12->address_bits = 6;
  VAR_12->delay_usec = 50;
  break;
 case 140:
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_12->type = VAR_9;
  VAR_12->opcode_bits = 3;
  VAR_12->delay_usec = 50;
  if (VAR_13 & VAR_1) {
   VAR_12->word_size = 256;
   VAR_12->address_bits = 8;
  } else {
   VAR_12->word_size = 64;
   VAR_12->address_bits = 6;
  }
  break;
 case 139:
 case 138:
 case 129:
 case 128:
  if (VAR_13 & VAR_2) {
   VAR_12->type = VAR_10;
   VAR_12->opcode_bits = 8;
   VAR_12->delay_usec = 1;
   if (VAR_13 & VAR_0) {
    VAR_12->page_size = 32;
    VAR_12->address_bits = 16;
   } else {
    VAR_12->page_size = 8;
    VAR_12->address_bits = 8;
   }
  } else {
   VAR_12->type = VAR_9;
   VAR_12->opcode_bits = 3;
   VAR_12->delay_usec = 50;
   if (VAR_13 & VAR_0) {
    VAR_12->word_size = 256;
    VAR_12->address_bits = 8;
   } else {
    VAR_12->word_size = 64;
    VAR_12->address_bits = 6;
   }
  }
  break;
 default:
  break;
 }

 if (VAR_12->type == VAR_10) {




  VAR_12->word_size = 64;
  VAR_14 = FUNC_0(VAR_11, VAR_5, 1, &VAR_15);
  if (VAR_14)
   return VAR_14;
  VAR_15 =
      (VAR_15 & VAR_6) >> VAR_7;




  if (VAR_15)
   VAR_15++;

  VAR_12->word_size = 1 << (VAR_15 + VAR_8);
 }
 return VAR_14;
}
