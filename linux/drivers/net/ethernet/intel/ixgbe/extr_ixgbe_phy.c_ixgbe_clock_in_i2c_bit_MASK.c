
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*,int*) ;
 int FUNC_7 (struct ixgbe_hw*,int*) ;
 int FUNC_8 (struct ixgbe_hw*,int*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static s32 FUNC_10(struct ixgbe_hw *VAR_2, bool *VAR_3)
{
 u32 VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_2));
 u32 VAR_5 = FUNC_1(VAR_2);

 if (VAR_5) {
  VAR_4 |= FUNC_2(VAR_2);
  VAR_4 |= VAR_5;
  FUNC_5(VAR_2, FUNC_0(VAR_2), VAR_4);
  FUNC_4(VAR_2);
 }
 FUNC_8(VAR_2, &VAR_4);


 FUNC_9(VAR_0);

 VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_2));
 *VAR_3 = FUNC_6(VAR_2, &VAR_4);

 FUNC_7(VAR_2, &VAR_4);


 FUNC_9(VAR_1);

 return 0;
}
