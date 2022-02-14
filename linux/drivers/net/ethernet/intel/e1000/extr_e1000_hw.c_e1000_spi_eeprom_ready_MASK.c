
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int opcode_bits; } ;
struct e1000_hw {TYPE_1__ eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int) ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_5)
{
 u16 VAR_6 = 0;
 u8 VAR_7;






 VAR_6 = 0;
 do {
  FUNC_1(VAR_5, VAR_3,
     VAR_5->eeprom.opcode_bits);
  VAR_7 = (u8)FUNC_0(VAR_5, 8);
  if (!(VAR_7 & VAR_4))
   break;

  FUNC_4(5);
  VAR_6 += 5;

  FUNC_2(VAR_5);
 } while (VAR_6 < VAR_2);




 if (VAR_6 >= VAR_2) {
  FUNC_3("SPI EEPROM Status error\n");
  return -VAR_0;
 }

 return VAR_1;
}
