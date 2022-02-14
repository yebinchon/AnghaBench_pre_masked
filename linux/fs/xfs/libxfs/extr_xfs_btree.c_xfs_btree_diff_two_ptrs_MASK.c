
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union xfs_btree_ptr {int s; int l; } ;
struct xfs_btree_cur {int bc_flags; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int64_t
FUNC_2(
 struct xfs_btree_cur *VAR_1,
 const union xfs_btree_ptr *VAR_2,
 const union xfs_btree_ptr *VAR_3)
{
 if (VAR_1->bc_flags & VAR_0)
  return (int64_t)FUNC_1(VAR_2->l) - FUNC_1(VAR_3->l);
 return (int64_t)FUNC_0(VAR_2->s) - FUNC_0(VAR_3->s);
}
