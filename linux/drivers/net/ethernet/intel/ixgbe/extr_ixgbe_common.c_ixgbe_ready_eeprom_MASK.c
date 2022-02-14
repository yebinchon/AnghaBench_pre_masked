
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_5)
{
 u16 VAR_6;
 u8 VAR_7;







 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += 5) {
  FUNC_2(VAR_5, VAR_2,
         VAR_1);
  VAR_7 = (u8)FUNC_1(VAR_5, 8);
  if (!(VAR_7 & VAR_3))
   break;

  FUNC_4(5);
  FUNC_3(VAR_5);
 }





 if (VAR_6 >= VAR_0) {
  FUNC_0(VAR_5, "SPI EEPROM Status error\n");
  return VAR_4;
 }

 return 0;
}
