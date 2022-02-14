
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_eeprom_info {scalar_t__ type; int semaphore_delay; int address_bits; int word_size; scalar_t__ word_page_size; } ;
struct ixgbe_hw {struct ixgbe_eeprom_info eeprom; } ;
typedef int s32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,char*,scalar_t__,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

s32 FUNC_4(struct ixgbe_hw *VAR_8)
{
 struct ixgbe_eeprom_info *VAR_9 = &VAR_8->eeprom;
 u32 VAR_10;
 u16 VAR_11;

 if (VAR_9->type == VAR_7) {
  VAR_9->type = VAR_5;


  VAR_9->semaphore_delay = 10;

  VAR_9->word_page_size = 0;





  VAR_10 = FUNC_2(VAR_8, FUNC_1(VAR_8));
  if (VAR_10 & VAR_1) {
   VAR_9->type = VAR_6;





   VAR_11 = (u16)((VAR_10 & VAR_2) >>
         VAR_3);
   VAR_9->word_size = FUNC_0(VAR_11 +
       VAR_4);
  }

  if (VAR_10 & VAR_0)
   VAR_9->address_bits = 16;
  else
   VAR_9->address_bits = 8;
  FUNC_3(VAR_8, "Eeprom params: type = %d, size = %d, address bits: %d\n",
         VAR_9->type, VAR_9->word_size, VAR_9->address_bits);
 }

 return 0;
}
