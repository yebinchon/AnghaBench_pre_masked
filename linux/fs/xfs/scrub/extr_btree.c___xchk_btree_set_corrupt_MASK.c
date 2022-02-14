
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_scrub {TYPE_1__* sm; } ;
struct xfs_btree_cur {int bc_flags; } ;
typedef int __u32 ;
struct TYPE_2__ {int sm_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_scrub*,struct xfs_btree_cur*,int,void*) ;
 int FUNC_1 (struct xfs_scrub*,struct xfs_btree_cur*,int,void*) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_scrub *VAR_1,
 struct xfs_btree_cur *VAR_2,
 int VAR_3,
 __u32 VAR_4,
 void *VAR_5)
{
 VAR_1->sm->sm_flags |= VAR_4;

 if (VAR_2->bc_flags & VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_3,
    VAR_5);
 else
  FUNC_0(VAR_1, VAR_2, VAR_3,
    VAR_5);
}
