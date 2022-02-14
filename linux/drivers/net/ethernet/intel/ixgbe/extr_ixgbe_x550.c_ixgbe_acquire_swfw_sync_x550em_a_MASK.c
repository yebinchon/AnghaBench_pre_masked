
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_5 & ~VAR_3;
 int VAR_7 = VAR_1;
 s32 VAR_8;

 while (--VAR_7) {
  VAR_8 = 0;
  if (VAR_6)
   VAR_8 = FUNC_0(VAR_4, VAR_6);
  if (VAR_8)
   return VAR_8;
  if (!(VAR_5 & VAR_3))
   return 0;

  VAR_8 = FUNC_1(VAR_4);
  if (!VAR_8)
   return 0;
  if (VAR_6)
   FUNC_2(VAR_4, VAR_6);
  if (VAR_8 != VAR_2)
   return VAR_8;
  FUNC_3(VAR_0);
 }

 return VAR_8;
}
