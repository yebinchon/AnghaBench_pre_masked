
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ word_size; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_1, u16 VAR_2,
       u16 VAR_3, u16 *VAR_4, u16 *VAR_5,
       u32 VAR_6)
{
 u16 VAR_7[256];
 s32 VAR_8;
 u16 VAR_9, VAR_10, VAR_11, VAR_12;
 u16 *VAR_13;

 VAR_10 = FUNC_0(VAR_7);


 if (!VAR_5) {
  VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_10, VAR_7);
  if (VAR_8) {
   FUNC_1(VAR_1, "Failed to read EEPROM image\n");
   return VAR_8;
  }
  VAR_13 = VAR_7;
 } else {
  if (VAR_6 < VAR_2)
   return VAR_0;
  VAR_13 = &VAR_5[VAR_2];
 }

 if (VAR_3) {
  VAR_12 = 0;
  VAR_9 = VAR_3;
 } else {
  VAR_12 = 1;
  VAR_9 = VAR_13[0];


  if (VAR_9 == 0xFFFF || VAR_9 == 0 ||
      (VAR_2 + VAR_9) >= VAR_1->eeprom.word_size)
   return 0;
 }

 if (VAR_5 && ((u32)VAR_12 + (u32)VAR_9 > VAR_6))
  return VAR_0;

 for (VAR_11 = VAR_12; VAR_9; VAR_11++, VAR_9--) {
  if (VAR_11 == VAR_10 && !VAR_5) {
   VAR_2 += VAR_10;
   VAR_11 = 0;
   if (VAR_9 < VAR_10)
    VAR_10 = VAR_9;


   VAR_8 = FUNC_2(VAR_1, VAR_2,
          VAR_10, VAR_7);
   if (VAR_8) {
    FUNC_1(VAR_1, "Failed to read EEPROM image\n");
    return VAR_8;
   }
  }
  *VAR_4 += VAR_13[VAR_11];
 }
 return 0;
}
