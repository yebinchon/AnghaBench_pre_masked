
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_eeprom_info {scalar_t__ type; int semaphore_delay; int word_size; } ;
struct ixgbe_hw {struct ixgbe_eeprom_info eeprom; } ;
typedef int s32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,char*,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_5)
{
 struct ixgbe_eeprom_info *VAR_6 = &VAR_5->eeprom;
 u32 VAR_7;
 u16 VAR_8;

 if (VAR_6->type == VAR_3) {
  VAR_6->semaphore_delay = 10;
  VAR_6->type = VAR_4;

  VAR_7 = FUNC_2(VAR_5, FUNC_1(VAR_5));
  VAR_8 = (u16)((VAR_7 & VAR_0) >>
        VAR_1);
  VAR_6->word_size = FUNC_0(VAR_8 +
     VAR_2);

  FUNC_3(VAR_5, "Eeprom params: type = %d, size = %d\n",
         VAR_6->type, VAR_6->word_size);
 }

 return 0;
}
