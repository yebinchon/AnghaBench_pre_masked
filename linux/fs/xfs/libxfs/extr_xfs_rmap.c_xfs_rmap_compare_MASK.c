
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_rmap_irec {scalar_t__ rm_startblock; scalar_t__ rm_owner; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ FUNC_0 (struct xfs_rmap_irec const*) ;

int
FUNC_1(
 const struct xfs_rmap_irec *VAR_0,
 const struct xfs_rmap_irec *VAR_1)
{
 __u64 VAR_2;
 __u64 VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);

 if (VAR_0->rm_startblock < VAR_1->rm_startblock)
  return -1;
 else if (VAR_0->rm_startblock > VAR_1->rm_startblock)
  return 1;
 else if (VAR_0->rm_owner < VAR_1->rm_owner)
  return -1;
 else if (VAR_0->rm_owner > VAR_1->rm_owner)
  return 1;
 else if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;
 else
  return 0;
}
