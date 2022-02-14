
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_daddr_t ;
struct xlog {scalar_t__ l_logBBsize; } ;



__attribute__((used)) static inline int
FUNC_0(
 struct xlog *VAR_0,
 xfs_daddr_t VAR_1,
 xfs_daddr_t VAR_2)
{
 if (VAR_1 < VAR_2)
  return VAR_2 - VAR_1;

 return VAR_2 + (VAR_0->l_logBBsize - VAR_1);
}
