
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct xfs_perag {scalar_t__ pag_agno; } ;
struct TYPE_6__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_3__ m_sb; } ;
struct xfs_buf {int b_bn; struct xfs_perag* b_pag; struct xfs_mount* b_mount; } ;
struct TYPE_4__ {scalar_t__ bb_blkno; int bb_owner; int bb_uuid; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct xfs_btree_block {TYPE_2__ bb_u; } ;


 struct xfs_btree_block* FUNC_0 (struct xfs_buf*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;

xfs_failaddr_t
FUNC_5(
 struct xfs_buf *VAR_1)
{
 struct xfs_mount *VAR_2 = VAR_1->b_mount;
 struct xfs_btree_block *VAR_3 = FUNC_0(VAR_1);
 struct xfs_perag *VAR_4 = VAR_1->b_pag;

 if (!FUNC_4(&VAR_2->m_sb))
  return VAR_0;
 if (!FUNC_3(&VAR_3->bb_u.s.bb_uuid, &VAR_2->m_sb.sb_meta_uuid))
  return VAR_0;
 if (VAR_3->bb_u.s.bb_blkno != FUNC_2(VAR_1->b_bn))
  return VAR_0;
 if (VAR_4 && FUNC_1(VAR_3->bb_u.s.bb_owner) != VAR_4->pag_agno)
  return VAR_0;
 return ((void*)0);
}
