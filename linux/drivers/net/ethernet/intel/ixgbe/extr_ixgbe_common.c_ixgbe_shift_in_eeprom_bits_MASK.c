
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__*) ;
 int FUNC_3 (struct ixgbe_hw*,scalar_t__*) ;

__attribute__((used)) static u16 FUNC_4(struct ixgbe_hw *VAR_2, u16 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u16 VAR_6 = 0;
 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_2));

 VAR_4 &= ~(VAR_1 | VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = VAR_6 << 1;
  FUNC_3(VAR_2, &VAR_4);

  VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_2));

  VAR_4 &= ~(VAR_0);
  if (VAR_4 & VAR_1)
   VAR_6 |= 1;

  FUNC_2(VAR_2, &VAR_4);
 }

 return VAR_6;
}
