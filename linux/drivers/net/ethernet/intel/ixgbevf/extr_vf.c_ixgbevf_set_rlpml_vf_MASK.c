
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*,int*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_3, u16 VAR_4)
{
 u32 VAR_5[2];
 s32 VAR_6;

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_4;

 VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_5,
          FUNC_0(VAR_5));
 if (VAR_6)
  return VAR_6;
 if ((VAR_5[0] & VAR_1) &&
     (VAR_5[0] & VAR_2))
  return VAR_0;

 return 0;
}
