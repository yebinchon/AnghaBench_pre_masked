
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_refcount_irec {scalar_t__ rc_startblock; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(
 struct xfs_refcount_irec *VAR_1)
{
 return VAR_1->rc_startblock != VAR_0;
}
