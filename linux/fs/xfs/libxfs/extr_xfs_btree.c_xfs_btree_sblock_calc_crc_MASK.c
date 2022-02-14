
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int li_lsn; } ;
struct xfs_buf_log_item {TYPE_4__ bli_item; } ;
struct xfs_buf {TYPE_1__* b_mount; struct xfs_buf_log_item* b_log_item; } ;
struct TYPE_6__ {int bb_lsn; } ;
struct TYPE_7__ {TYPE_2__ s; } ;
struct xfs_btree_block {TYPE_3__ bb_u; } ;
struct TYPE_5__ {int m_sb; } ;


 int VAR_0 ;
 struct xfs_btree_block* FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(
 struct xfs_buf *VAR_1)
{
 struct xfs_btree_block *VAR_2 = FUNC_0(VAR_1);
 struct xfs_buf_log_item *VAR_3 = VAR_1->b_log_item;

 if (!FUNC_3(&VAR_1->b_mount->m_sb))
  return;
 if (VAR_3)
  VAR_2->bb_u.s.bb_lsn = FUNC_1(VAR_3->bli_item.li_lsn);
 FUNC_2(VAR_1, VAR_0);
}
