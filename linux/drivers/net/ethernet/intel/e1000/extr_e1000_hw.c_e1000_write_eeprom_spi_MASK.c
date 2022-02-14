
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct e1000_eeprom_info {int opcode_bits; int address_bits; int page_size; } ;
struct e1000_hw {struct e1000_eeprom_info eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_5, u16 VAR_6, u16 VAR_7,
      u16 *VAR_8)
{
 struct e1000_eeprom_info *VAR_9 = &VAR_5->eeprom;
 u16 VAR_10 = 0;

 while (VAR_10 < VAR_7) {
  u8 VAR_11 = VAR_4;

  if (FUNC_2(VAR_5))
   return -VAR_0;

  FUNC_3(VAR_5);
  FUNC_0();


  FUNC_1(VAR_5, VAR_3,
     VAR_9->opcode_bits);

  FUNC_3(VAR_5);




  if ((VAR_9->address_bits == 8) && (VAR_6 >= 128))
   VAR_11 |= VAR_2;


  FUNC_1(VAR_5, VAR_11, VAR_9->opcode_bits);

  FUNC_1(VAR_5, (u16)((VAR_6 + VAR_10) * 2),
     VAR_9->address_bits);






  while (VAR_10 < VAR_7) {
   u16 VAR_12 = VAR_8[VAR_10];

   VAR_12 = (VAR_12 >> 8) | (VAR_12 << 8);
   FUNC_1(VAR_5, VAR_12, 16);
   VAR_10++;






   if ((((VAR_6 + VAR_10) * 2) % VAR_9->page_size) == 0) {
    FUNC_3(VAR_5);
    break;
   }
  }
 }

 return VAR_1;
}
