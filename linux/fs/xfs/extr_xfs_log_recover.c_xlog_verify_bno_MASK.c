
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_daddr_t ;
struct xlog {scalar_t__ l_logBBsize; } ;



__attribute__((used)) static inline bool
FUNC_0(
 struct xlog *VAR_0,
 xfs_daddr_t VAR_1,
 int VAR_2)
{
 if (VAR_1 < 0 || VAR_1 >= VAR_0->l_logBBsize)
  return 0;
 if (VAR_2 <= 0 || (VAR_1 + VAR_2) > VAR_0->l_logBBsize)
  return 0;
 return 1;
}
