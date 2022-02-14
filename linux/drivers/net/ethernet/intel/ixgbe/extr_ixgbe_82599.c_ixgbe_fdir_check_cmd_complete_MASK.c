
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_4, u32 *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  *VAR_5 = FUNC_0(VAR_4, VAR_1);
  if (!(*VAR_5 & VAR_2))
   return 0;
  FUNC_1(10);
 }

 return VAR_0;
}
