
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ql_adapter {int dummy; } ;


 int FUNC_0 (struct ql_adapter*) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_0, u64 *VAR_1)
{
 *VAR_1 = FUNC_1(VAR_0);
 if (*VAR_1)
  goto out;
 *VAR_1 = FUNC_0(VAR_0);
out:
 FUNC_2(VAR_0);
 return *VAR_1;
}
