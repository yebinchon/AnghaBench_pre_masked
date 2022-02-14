
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ql_adapter*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_6, u32 VAR_7)
{
 int VAR_8 = VAR_4;
 u32 VAR_9;

 while (VAR_8) {
  VAR_9 = FUNC_0(VAR_6, VAR_0);
  if (VAR_9 & VAR_1)
   return -VAR_2;
  if (!(VAR_9 & VAR_7))
   return 0;
  FUNC_1(VAR_5);
  VAR_8--;
 }
 return -VAR_3;
}
