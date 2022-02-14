
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_3__ m_sb; } ;
struct xfs_buf {int b_bn; struct xfs_mount* b_mount; } ;
struct TYPE_5__ {scalar_t__ bb_blkno; int bb_owner; int bb_uuid; } ;
struct TYPE_4__ {TYPE_2__ l; } ;
struct xfs_btree_block {TYPE_1__ bb_u; } ;


 struct xfs_btree_block* FUNC_0 (struct xfs_buf*) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;

xfs_failaddr_t
FUNC_5(
 struct xfs_buf *VAR_2,
 uint64_t VAR_3)
{
 struct xfs_mount *VAR_4 = VAR_2->b_mount;
 struct xfs_btree_block *VAR_5 = FUNC_0(VAR_2);

 if (!FUNC_4(&VAR_4->m_sb))
  return VAR_1;
 if (!FUNC_3(&VAR_5->bb_u.l.bb_uuid, &VAR_4->m_sb.sb_meta_uuid))
  return VAR_1;
 if (VAR_5->bb_u.l.bb_blkno != FUNC_2(VAR_2->b_bn))
  return VAR_1;
 if (VAR_3 != VAR_0 &&
     FUNC_1(VAR_5->bb_u.l.bb_owner) != VAR_3)
  return VAR_1;
 return ((void*)0);
}
