
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef int xfs_agblock_t ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {struct xfs_mount* b_mount; } ;
struct TYPE_3__ {scalar_t__ bb_leftsib; scalar_t__ bb_rightsib; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct xfs_btree_block {TYPE_2__ bb_u; int bb_numrecs; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_buf*) ;
 struct xfs_btree_block* FUNC_1 (struct xfs_buf*) ;
 int * VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct xfs_mount*,int ) ;
 int FUNC_6 (struct xfs_mount*,int ,int ) ;

xfs_failaddr_t
FUNC_7(
 struct xfs_buf *VAR_2,
 unsigned int VAR_3)
{
 struct xfs_mount *VAR_4 = VAR_2->b_mount;
 struct xfs_btree_block *VAR_5 = FUNC_1(VAR_2);
 xfs_agblock_t VAR_6;


 if (FUNC_2(VAR_5->bb_numrecs) > VAR_3)
  return VAR_1;


 VAR_6 = FUNC_5(VAR_4, FUNC_0(VAR_2));
 if (VAR_5->bb_u.s.bb_leftsib != FUNC_4(VAR_0) &&
     !FUNC_6(VAR_4, VAR_6, FUNC_3(VAR_5->bb_u.s.bb_leftsib)))
  return VAR_1;
 if (VAR_5->bb_u.s.bb_rightsib != FUNC_4(VAR_0) &&
     !FUNC_6(VAR_4, VAR_6, FUNC_3(VAR_5->bb_u.s.bb_rightsib)))
  return VAR_1;

 return ((void*)0);
}
