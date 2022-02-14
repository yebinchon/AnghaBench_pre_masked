
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alx_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct alx_hw*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct alx_hw *VAR_1, u32 VAR_2, u32 VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  if ((VAR_5 & VAR_3) == 0) {
   if (VAR_4)
    *VAR_4 = VAR_5;
   return 1;
  }
  FUNC_1(1);
 }

 return 0;
}
