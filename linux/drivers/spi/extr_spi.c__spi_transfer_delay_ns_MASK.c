
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(u32 VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0 <= 1000) {
  FUNC_1(VAR_0);
 } else {
  u32 VAR_1 = FUNC_0(VAR_0, 1000);

  if (VAR_1 <= 10)
   FUNC_2(VAR_1);
  else
   FUNC_3(VAR_1, VAR_1 + FUNC_0(VAR_1, 10));
 }
}
