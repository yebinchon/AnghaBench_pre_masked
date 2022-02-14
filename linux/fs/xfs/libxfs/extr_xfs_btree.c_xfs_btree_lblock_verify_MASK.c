
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {struct xfs_mount* b_mount; } ;
struct TYPE_3__ {scalar_t__ bb_leftsib; scalar_t__ bb_rightsib; } ;
struct TYPE_4__ {TYPE_1__ l; } ;
struct xfs_btree_block {TYPE_2__ bb_u; int bb_numrecs; } ;


 int VAR_0 ;
 struct xfs_btree_block* FUNC_0 (struct xfs_buf*) ;
 int * VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_mount*,int ) ;

xfs_failaddr_t
FUNC_5(
 struct xfs_buf *VAR_2,
 unsigned int VAR_3)
{
 struct xfs_mount *VAR_4 = VAR_2->b_mount;
 struct xfs_btree_block *VAR_5 = FUNC_0(VAR_2);


 if (FUNC_1(VAR_5->bb_numrecs) > VAR_3)
  return VAR_1;


 if (VAR_5->bb_u.l.bb_leftsib != FUNC_3(VAR_0) &&
     !FUNC_4(VAR_4, FUNC_2(VAR_5->bb_u.l.bb_leftsib)))
  return VAR_1;
 if (VAR_5->bb_u.l.bb_rightsib != FUNC_3(VAR_0) &&
     !FUNC_4(VAR_4, FUNC_2(VAR_5->bb_u.l.bb_rightsib)))
  return VAR_1;

 return ((void*)0);
}
