
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct e1000_hw *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5;


 if (VAR_3 == 0)
  return 0;


 for (VAR_5 = VAR_0; --VAR_5;) {
  VAR_4 = FUNC_1(FUNC_0(VAR_5));
  if ((VAR_4 & VAR_1) == VAR_3)
   break;
 }

 return VAR_5;
}
