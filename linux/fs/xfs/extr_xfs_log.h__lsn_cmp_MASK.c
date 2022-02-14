
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_lsn_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline xfs_lsn_t FUNC_2(xfs_lsn_t VAR_0, xfs_lsn_t VAR_1)
{
 if (FUNC_1(VAR_0) != FUNC_1(VAR_1))
  return (FUNC_1(VAR_0)<FUNC_1(VAR_1))? -999 : 999;

 if (FUNC_0(VAR_0) != FUNC_0(VAR_1))
  return (FUNC_0(VAR_0)<FUNC_0(VAR_1))? -999 : 999;

 return 0;
}
