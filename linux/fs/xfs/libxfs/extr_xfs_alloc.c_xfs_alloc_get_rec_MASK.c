
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef char* xfs_agblock_t ;
struct TYPE_6__ {int ar_blockcount; int ar_startblock; } ;
union xfs_btree_rec {TYPE_3__ alloc; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_4__ {scalar_t__ agno; } ;
struct TYPE_5__ {TYPE_1__ a; } ;
struct xfs_btree_cur {scalar_t__ bc_btnum; TYPE_2__ bc_private; struct xfs_mount* bc_mp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_btree_cur*,union xfs_btree_rec**,int*) ;
 int FUNC_2 (struct xfs_mount*,scalar_t__,char*) ;
 int FUNC_3 (struct xfs_mount*,char*,char*,scalar_t__) ;

int
FUNC_4(
 struct xfs_btree_cur *VAR_2,
 xfs_agblock_t *VAR_3,
 xfs_extlen_t *VAR_4,
 int *VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_2->bc_mp;
 xfs_agnumber_t VAR_7 = VAR_2->bc_private.a.agno;
 union xfs_btree_rec *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, &VAR_8, VAR_5);
 if (VAR_9 || !(*VAR_5))
  return VAR_9;

 *VAR_3 = FUNC_0(VAR_8->alloc.ar_startblock);
 *VAR_4 = FUNC_0(VAR_8->alloc.ar_blockcount);

 if (*VAR_4 == 0)
  goto out_bad_rec;


 if (!FUNC_2(VAR_6, VAR_7, *VAR_3))
  goto out_bad_rec;
 if (*VAR_3 > *VAR_3 + *VAR_4)
  goto out_bad_rec;
 if (!FUNC_2(VAR_6, VAR_7, *VAR_3 + *VAR_4 - 1))
  goto out_bad_rec;

 return 0;

out_bad_rec:
 FUNC_3(VAR_6,
  "%s Freespace BTree record corruption in AG %d detected!",
  VAR_2->bc_btnum == VAR_1 ? "Block" : "Size", VAR_7);
 FUNC_3(VAR_6,
  "start block 0x%x block count 0x%x", *VAR_3, *VAR_4);
 return -VAR_0;
}
