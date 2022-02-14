
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgb_hw*,int ) ;
 int FUNC_2 (struct ixgb_hw*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool
FUNC_4(struct ixgb_hw *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;




 FUNC_2(VAR_2);





 for (VAR_4 = 0; VAR_4 < 200; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);

  if (VAR_3 & VAR_1)
   return 1;

  FUNC_3(50);
 }
 FUNC_0(0);
 return 0;
}
