
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_1)
{
 s32 VAR_2;
 u16 VAR_3 = 0;





 VAR_2 = FUNC_2(VAR_1, 0, &VAR_3);
 if (VAR_2) {
  FUNC_0(VAR_1, "EEPROM read failed\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = (u16)(VAR_2 & 0xffff);

 VAR_2 = FUNC_4(VAR_1, VAR_0,
         VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1);

 return VAR_2;
}
