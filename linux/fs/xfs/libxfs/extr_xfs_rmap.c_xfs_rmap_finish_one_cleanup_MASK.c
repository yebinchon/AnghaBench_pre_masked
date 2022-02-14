
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_3__ {struct xfs_buf* agbp; } ;
struct TYPE_4__ {TYPE_1__ a; } ;
struct xfs_btree_cur {TYPE_2__ bc_private; } ;


 int FUNC_0 (struct xfs_btree_cur*,int) ;
 int FUNC_1 (struct xfs_trans*,struct xfs_buf*) ;

void
FUNC_2(
 struct xfs_trans *VAR_0,
 struct xfs_btree_cur *VAR_1,
 int VAR_2)
{
 struct xfs_buf *VAR_3;

 if (VAR_1 == ((void*)0))
  return;
 VAR_3 = VAR_1->bc_private.a.agbp;
 FUNC_0(VAR_1, VAR_2);
 if (VAR_2)
  FUNC_1(VAR_0, VAR_3);
}
