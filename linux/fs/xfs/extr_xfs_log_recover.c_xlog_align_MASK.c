
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_daddr_t ;
struct xlog {scalar_t__ l_sectBBsize; } ;


 unsigned int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int
FUNC_1(
 struct xlog *VAR_0,
 xfs_daddr_t VAR_1)
{
 return FUNC_0(VAR_1 & ((xfs_daddr_t)VAR_0->l_sectBBsize - 1));
}
