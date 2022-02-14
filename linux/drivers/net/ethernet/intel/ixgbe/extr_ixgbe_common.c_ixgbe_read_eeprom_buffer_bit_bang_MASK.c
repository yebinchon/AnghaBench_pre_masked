
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int address_bits; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int) ;
 int FUNC_4 (struct ixgbe_hw*,int,int) ;
 int FUNC_5 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_4, u16 VAR_5,
          u16 VAR_6, u16 *VAR_7)
{
 s32 VAR_8;
 u16 VAR_9;
 u8 VAR_10 = VAR_2;
 u16 VAR_11;


 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8)
  return VAR_8;

 if (FUNC_1(VAR_4) != 0) {
  FUNC_2(VAR_4);
  return VAR_3;
 }

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  FUNC_5(VAR_4);



  if ((VAR_4->eeprom.address_bits == 8) &&
      ((VAR_5 + VAR_11) >= 128))
   VAR_10 |= VAR_0;


  FUNC_4(VAR_4, VAR_10,
         VAR_1);
  FUNC_4(VAR_4, (u16)((VAR_5 + VAR_11) * 2),
         VAR_4->eeprom.address_bits);


  VAR_9 = FUNC_3(VAR_4, 16);
  VAR_7[VAR_11] = (VAR_9 >> 8) | (VAR_9 << 8);
 }


 FUNC_2(VAR_4);

 return 0;
}
