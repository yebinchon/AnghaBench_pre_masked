
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int api_version; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*,int*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_6, int VAR_7)
{
 u32 VAR_8[2];
 s32 VAR_9;

 switch (VAR_6->api_version) {
 case 130:

  if (VAR_7 == VAR_2)
   return -VAR_0;

 case 128:
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_8[0] = VAR_3;
 VAR_8[1] = VAR_7;

 VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_8,
      FUNC_0(VAR_8));
 if (VAR_9)
  return VAR_9;

 VAR_8[0] &= ~VAR_4;
 if (VAR_8[0] == (VAR_3 | VAR_5))
  return -VAR_1;

 return 0;
}
