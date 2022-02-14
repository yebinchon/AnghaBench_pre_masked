
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_eeprom_info {scalar_t__ type; int delay_usec; } ;
struct e1000_hw {struct e1000_eeprom_info eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_5)
{
 struct e1000_eeprom_info *VAR_6 = &VAR_5->eeprom;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_2);

 if (VAR_6->type == VAR_3) {
  VAR_7 &= ~(VAR_0 | VAR_1);
  FUNC_2(VAR_2, VAR_7);
  FUNC_0();
  FUNC_3(VAR_6->delay_usec);


  VAR_7 |= VAR_1;
  FUNC_2(VAR_2, VAR_7);
  FUNC_0();
  FUNC_3(VAR_6->delay_usec);


  VAR_7 |= VAR_0;
  FUNC_2(VAR_2, VAR_7);
  FUNC_0();
  FUNC_3(VAR_6->delay_usec);


  VAR_7 &= ~VAR_1;
  FUNC_2(VAR_2, VAR_7);
  FUNC_0();
  FUNC_3(VAR_6->delay_usec);
 } else if (VAR_6->type == VAR_4) {

  VAR_7 |= VAR_0;
  FUNC_2(VAR_2, VAR_7);
  FUNC_0();
  FUNC_3(VAR_6->delay_usec);
  VAR_7 &= ~VAR_0;
  FUNC_2(VAR_2, VAR_7);
  FUNC_0();
  FUNC_3(VAR_6->delay_usec);
 }
}
