
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_mount {int m_sb; } ;
struct xfs_buf {struct xfs_mount* b_mount; } ;
struct TYPE_3__ {int bb_lsn; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct xfs_btree_block {TYPE_2__ bb_u; } ;


 int VAR_0 ;
 struct xfs_btree_block* FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_4 (int *) ;

bool
FUNC_5(
 struct xfs_buf *VAR_1)
{
 struct xfs_btree_block *VAR_2 = FUNC_0(VAR_1);
 struct xfs_mount *VAR_3 = VAR_1->b_mount;

 if (FUNC_4(&VAR_3->m_sb)) {
  if (!FUNC_3(VAR_3, FUNC_1(VAR_2->bb_u.s.bb_lsn)))
   return 0;
  return FUNC_2(VAR_1, VAR_0);
 }

 return 1;
}
