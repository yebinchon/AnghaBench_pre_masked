
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ql_adapter*,int) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_0, u32 VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 10;

 while (VAR_5) {
  VAR_4 = FUNC_1(VAR_0, VAR_1);


  if (VAR_4 & VAR_3)
   return -1;
  else if (VAR_4 & VAR_2)
   return 0;
  FUNC_0(10);
  VAR_5--;
 }
 return -1;
}
