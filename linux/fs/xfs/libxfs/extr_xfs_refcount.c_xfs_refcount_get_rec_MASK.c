
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
typedef union xfs_btree_rec {int dummy; } xfs_btree_rec ;
struct xfs_refcount_irec {int rc_blockcount; int rc_startblock; int rc_refcount; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_3__ {int agno; } ;
struct TYPE_4__ {TYPE_1__ a; } ;
struct xfs_btree_cur {TYPE_2__ bc_private; struct xfs_mount* bc_mp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xfs_mount*,int ,struct xfs_refcount_irec*) ;
 int FUNC_1 (struct xfs_btree_cur*,union xfs_btree_rec**,int*) ;
 int FUNC_2 (union xfs_btree_rec*,struct xfs_refcount_irec*) ;
 int FUNC_3 (struct xfs_mount*,int ,int) ;
 int FUNC_4 (struct xfs_mount*,char*,int,...) ;

int
FUNC_5(
 struct xfs_btree_cur *VAR_4,
 struct xfs_refcount_irec *VAR_5,
 int *VAR_6)
{
 struct xfs_mount *VAR_7 = VAR_4->bc_mp;
 xfs_agnumber_t VAR_8 = VAR_4->bc_private.a.agno;
 union xfs_btree_rec *VAR_9;
 int VAR_10;
 xfs_agblock_t VAR_11;

 VAR_10 = FUNC_1(VAR_4, &VAR_9, VAR_6);
 if (VAR_10 || !*VAR_6)
  return VAR_10;

 FUNC_2(VAR_9, VAR_5);

 VAR_8 = VAR_4->bc_private.a.agno;
 if (VAR_5->rc_blockcount == 0 || VAR_5->rc_blockcount > VAR_1)
  goto out_bad_rec;


 VAR_11 = VAR_5->rc_startblock;
 if (VAR_11 & VAR_3) {
  if (VAR_5->rc_refcount != 1)
   goto out_bad_rec;
  VAR_11 &= ~VAR_3;
 } else if (VAR_5->rc_refcount < 2) {
  goto out_bad_rec;
 }


 if (!FUNC_3(VAR_7, VAR_8, VAR_11))
  goto out_bad_rec;
 if (VAR_11 > VAR_11 + VAR_5->rc_blockcount)
  goto out_bad_rec;
 if (!FUNC_3(VAR_7, VAR_8, VAR_11 + VAR_5->rc_blockcount - 1))
  goto out_bad_rec;

 if (VAR_5->rc_refcount == 0 || VAR_5->rc_refcount > VAR_2)
  goto out_bad_rec;

 FUNC_0(VAR_4->bc_mp, VAR_4->bc_private.a.agno, VAR_5);
 return 0;

out_bad_rec:
 FUNC_4(VAR_7,
  "Refcount BTree record corruption in AG %d detected!", VAR_8);
 FUNC_4(VAR_7,
  "Start block 0x%x, block count 0x%x, references 0x%x",
  VAR_5->rc_startblock, VAR_5->rc_blockcount, VAR_5->rc_refcount);
 return -VAR_0;
}
