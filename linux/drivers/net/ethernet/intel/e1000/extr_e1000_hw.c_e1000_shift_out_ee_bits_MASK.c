
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_eeprom_info {scalar_t__ type; int delay_usec; } ;
struct e1000_hw {struct e1000_eeprom_info eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int*) ;
 int FUNC_2 (struct e1000_hw*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct e1000_hw *VAR_5, u16 VAR_6, u16 VAR_7)
{
 struct e1000_eeprom_info *VAR_8 = &VAR_5->eeprom;
 u32 VAR_9;
 u32 VAR_10;





 VAR_10 = 0x01 << (VAR_7 - 1);
 VAR_9 = FUNC_3(VAR_2);
 if (VAR_8->type == VAR_3)
  VAR_9 &= ~VAR_1;
 else if (VAR_8->type == VAR_4)
  VAR_9 |= VAR_1;

 do {






  VAR_9 &= ~VAR_0;

  if (VAR_6 & VAR_10)
   VAR_9 |= VAR_0;

  FUNC_4(VAR_2, VAR_9);
  FUNC_0();

  FUNC_5(VAR_8->delay_usec);

  FUNC_2(VAR_5, &VAR_9);
  FUNC_1(VAR_5, &VAR_9);

  VAR_10 = VAR_10 >> 1;

 } while (VAR_10);


 VAR_9 &= ~VAR_0;
 FUNC_4(VAR_2, VAR_9);
}
