
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agblock_t ;
struct xfs_refcount_irec {scalar_t__ rc_blockcount; scalar_t__ rc_startblock; } ;



__attribute__((used)) static inline xfs_agblock_t
FUNC_0(
 struct xfs_refcount_irec *VAR_0)
{
 return VAR_0->rc_startblock + VAR_0->rc_blockcount;
}
