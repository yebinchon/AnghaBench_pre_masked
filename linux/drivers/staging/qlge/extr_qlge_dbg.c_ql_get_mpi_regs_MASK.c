
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int FUNC_0 (struct ql_adapter*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct ql_adapter *VAR_0, u32 *VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_1++) {
  VAR_5 = FUNC_0(VAR_0, VAR_2 + VAR_4, VAR_1);
  if (VAR_5)
   return VAR_5;
 }
 return VAR_5;
}
