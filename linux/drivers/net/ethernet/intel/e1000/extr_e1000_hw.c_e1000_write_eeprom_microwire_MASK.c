
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_eeprom_info {scalar_t__ opcode_bits; int address_bits; } ;
struct e1000_hw {struct e1000_eeprom_info eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_7, u16 VAR_8,
     u16 VAR_9, u16 *VAR_10)
{
 struct e1000_eeprom_info *VAR_11 = &VAR_7->eeprom;
 u32 VAR_12;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;







 FUNC_1(VAR_7, VAR_5,
    (u16)(VAR_11->opcode_bits + 2));

 FUNC_1(VAR_7, 0, (u16)(VAR_11->address_bits - 2));


 FUNC_2(VAR_7);

 while (VAR_13 < VAR_9) {

  FUNC_1(VAR_7, VAR_6,
     VAR_11->opcode_bits);

  FUNC_1(VAR_7, (u16)(VAR_8 + VAR_13),
     VAR_11->address_bits);


  FUNC_1(VAR_7, VAR_10[VAR_13], 16);




  FUNC_2(VAR_7);






  for (VAR_14 = 0; VAR_14 < 200; VAR_14++) {
   VAR_12 = FUNC_4(VAR_3);
   if (VAR_12 & VAR_0)
    break;
   FUNC_5(50);
  }
  if (VAR_14 == 200) {
   FUNC_3("EEPROM Write did not complete\n");
   return -VAR_1;
  }


  FUNC_2(VAR_7);
  FUNC_0();

  VAR_13++;
 }







 FUNC_1(VAR_7, VAR_4,
    (u16)(VAR_11->opcode_bits + 2));

 FUNC_1(VAR_7, 0, (u16)(VAR_11->address_bits - 2));

 return VAR_2;
}
