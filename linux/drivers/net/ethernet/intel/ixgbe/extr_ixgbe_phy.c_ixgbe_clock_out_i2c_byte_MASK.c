
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_6 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_0, u8 VAR_1)
{
 s32 VAR_2;
 s32 VAR_3;
 u32 VAR_4;
 bool VAR_5 = 0;

 for (VAR_3 = 7; VAR_3 >= 0; VAR_3--) {
  VAR_5 = (VAR_1 >> VAR_3) & 0x1;
  VAR_2 = FUNC_6(VAR_0, VAR_5);

  if (VAR_2 != 0)
   break;
 }


 VAR_4 = FUNC_3(VAR_0, FUNC_0(VAR_0));
 VAR_4 |= FUNC_2(VAR_0);
 VAR_4 |= FUNC_1(VAR_0);
 FUNC_5(VAR_0, FUNC_0(VAR_0), VAR_4);
 FUNC_4(VAR_0);

 return VAR_2;
}
