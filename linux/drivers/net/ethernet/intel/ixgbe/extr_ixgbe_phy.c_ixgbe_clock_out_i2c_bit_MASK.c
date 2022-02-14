
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,char*,int) ;
 int FUNC_3 (struct ixgbe_hw*,int *) ;
 int FUNC_4 (struct ixgbe_hw*,int *) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int *,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_3, bool VAR_4)
{
 s32 VAR_5;
 u32 VAR_6 = FUNC_1(VAR_3, FUNC_0(VAR_3));

 VAR_5 = FUNC_5(VAR_3, &VAR_6, VAR_4);
 if (VAR_5 == 0) {
  FUNC_4(VAR_3, &VAR_6);


  FUNC_6(VAR_1);

  FUNC_3(VAR_3, &VAR_6);




  FUNC_6(VAR_2);
 } else {
  FUNC_2(VAR_3, "I2C data was not set to %X\n", VAR_4);
  return VAR_0;
 }

 return 0;
}
