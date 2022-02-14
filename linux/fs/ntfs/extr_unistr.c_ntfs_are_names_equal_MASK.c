
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int ntfschar ;
typedef scalar_t__ IGNORE_CASE_BOOL ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int const*,int const*,size_t,int const*,int const) ;
 int FUNC_1 (int const*,int const*,size_t) ;

bool FUNC_2(const ntfschar *VAR_1, size_t VAR_2,
  const ntfschar *VAR_3, size_t VAR_4, const IGNORE_CASE_BOOL VAR_5,
  const ntfschar *VAR_6, const u32 VAR_7)
{
 if (VAR_2 != VAR_4)
  return 0;
 if (VAR_5 == VAR_0)
  return !FUNC_1(VAR_1, VAR_3, VAR_2);
 return !FUNC_0(VAR_1, VAR_3, VAR_2, VAR_6, VAR_7);
}
