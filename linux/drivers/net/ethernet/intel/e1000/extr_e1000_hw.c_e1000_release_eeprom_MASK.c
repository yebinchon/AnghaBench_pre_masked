
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; int delay_usec; } ;
struct e1000_hw {scalar_t__ mac_type; TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_4);

 if (VAR_8->eeprom.type == VAR_7) {
  VAR_9 |= VAR_0;
  VAR_9 &= ~VAR_3;

  FUNC_2(VAR_4, VAR_9);
  FUNC_0();

  FUNC_3(VAR_8->eeprom.delay_usec);
 } else if (VAR_8->eeprom.type == VAR_6) {



  VAR_9 &= ~(VAR_0 | VAR_1);

  FUNC_2(VAR_4, VAR_9);


  VAR_9 |= VAR_3;
  FUNC_2(VAR_4, VAR_9);
  FUNC_0();
  FUNC_3(VAR_8->eeprom.delay_usec);


  VAR_9 &= ~VAR_3;
  FUNC_2(VAR_4, VAR_9);
  FUNC_0();
  FUNC_3(VAR_8->eeprom.delay_usec);
 }


 if (VAR_8->mac_type > VAR_5) {
  VAR_9 &= ~VAR_2;
  FUNC_2(VAR_4, VAR_9);
 }
}
