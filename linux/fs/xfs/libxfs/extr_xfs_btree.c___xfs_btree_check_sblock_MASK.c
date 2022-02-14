
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef int xfs_btnum_t ;
struct TYPE_8__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_4__ m_sb; } ;
struct xfs_buf {int b_bn; } ;
struct xfs_btree_cur {TYPE_1__* bc_ops; int bc_btnum; struct xfs_mount* bc_mp; } ;
struct TYPE_6__ {scalar_t__ bb_blkno; scalar_t__ bb_leftsib; scalar_t__ bb_rightsib; int bb_uuid; } ;
struct TYPE_7__ {TYPE_2__ s; } ;
struct xfs_btree_block {scalar_t__ bb_magic; TYPE_3__ bb_u; int bb_numrecs; int bb_level; } ;
struct TYPE_5__ {int (* get_maxrecs ) (struct xfs_btree_cur*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_btree_cur*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct xfs_btree_cur*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_4__*) ;

xfs_failaddr_t
FUNC_9(
 struct xfs_btree_cur *VAR_3,
 struct xfs_btree_block *VAR_4,
 int VAR_5,
 struct xfs_buf *VAR_6)
{
 struct xfs_mount *VAR_7 = VAR_3->bc_mp;
 xfs_btnum_t VAR_8 = VAR_3->bc_btnum;
 int VAR_9 = FUNC_8(&VAR_7->m_sb);

 if (VAR_9) {
  if (!FUNC_5(&VAR_4->bb_u.s.bb_uuid, &VAR_7->m_sb.sb_meta_uuid))
   return VAR_2;
  if (VAR_4->bb_u.s.bb_blkno !=
      FUNC_3(VAR_6 ? VAR_6->b_bn : VAR_1))
   return VAR_2;
 }

 if (FUNC_1(VAR_4->bb_magic) != FUNC_7(VAR_9, VAR_8))
  return VAR_2;
 if (FUNC_0(VAR_4->bb_level) != VAR_5)
  return VAR_2;
 if (FUNC_0(VAR_4->bb_numrecs) >
     VAR_3->bc_ops->get_maxrecs(VAR_3, VAR_5))
  return VAR_2;
 if (VAR_4->bb_u.s.bb_leftsib != FUNC_2(VAR_0) &&
     !FUNC_6(VAR_3, FUNC_1(VAR_4->bb_u.s.bb_leftsib),
   VAR_5 + 1))
  return VAR_2;
 if (VAR_4->bb_u.s.bb_rightsib != FUNC_2(VAR_0) &&
     !FUNC_6(VAR_3, FUNC_1(VAR_4->bb_u.s.bb_rightsib),
   VAR_5 + 1))
  return VAR_2;

 return ((void*)0);
}
