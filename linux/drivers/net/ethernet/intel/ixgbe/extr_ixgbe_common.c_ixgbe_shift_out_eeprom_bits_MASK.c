
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_hw {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_5 (struct ixgbe_hw*,scalar_t__*) ;
 int FUNC_6 (struct ixgbe_hw*,scalar_t__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_hw *VAR_1, u16 VAR_2,
     u16 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_2(VAR_1, FUNC_1(VAR_1));





 VAR_5 = FUNC_0(VAR_3 - 1);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {







  if (VAR_2 & VAR_5)
   VAR_4 |= VAR_0;
  else
   VAR_4 &= ~VAR_0;

  FUNC_4(VAR_1, FUNC_1(VAR_1), VAR_4);
  FUNC_3(VAR_1);

  FUNC_7(1);

  FUNC_6(VAR_1, &VAR_4);
  FUNC_5(VAR_1, &VAR_4);





  VAR_5 = VAR_5 >> 1;
 }


 VAR_4 &= ~VAR_0;
 FUNC_4(VAR_1, FUNC_1(VAR_1), VAR_4);
 FUNC_3(VAR_1);
}
