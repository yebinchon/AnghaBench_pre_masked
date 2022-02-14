
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_3, u32 VAR_4, bool VAR_5)
{
 s32 VAR_6, VAR_7;
 u32 VAR_8;


 if (VAR_4 == 0)
  return 0;





 VAR_7 = VAR_5 ? -VAR_0 : 0;






 for (VAR_6 = VAR_1; --VAR_6 > 0;) {
  VAR_8 = FUNC_1(FUNC_0(VAR_6)) & VAR_2;
  if (VAR_8 == VAR_4)
   return VAR_6;
  if (!VAR_7 && !VAR_8)
   VAR_7 = VAR_6;
 }

 return VAR_7 ? : -VAR_0;
}
