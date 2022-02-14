
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
typedef scalar_t__ xfs_agblock_t ;
struct xfs_refcount_irec {scalar_t__ rc_startblock; scalar_t__ rc_blockcount; } ;
struct TYPE_3__ {int agno; } ;
struct TYPE_4__ {TYPE_1__ a; } ;
struct xfs_btree_cur {TYPE_2__ bc_private; int bc_mp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct xfs_btree_cur*,int ,int*) ;
 int FUNC_6 (struct xfs_btree_cur*,struct xfs_refcount_irec*,int*) ;
 int FUNC_7 (struct xfs_btree_cur*,scalar_t__,int*) ;

int
FUNC_8(
 struct xfs_btree_cur *VAR_3,
 xfs_agblock_t VAR_4,
 xfs_extlen_t VAR_5,
 xfs_agblock_t *VAR_6,
 xfs_extlen_t *VAR_7,
 bool VAR_8)
{
 struct xfs_refcount_irec VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_2(VAR_3->bc_mp, VAR_3->bc_private.a.agno,
   VAR_4, VAR_5);


 *VAR_6 = VAR_0;
 *VAR_7 = 0;


 VAR_12 = FUNC_7(VAR_3, VAR_4, &VAR_11);
 if (VAR_12)
  goto out_error;
 if (!VAR_11) {

  VAR_12 = FUNC_5(VAR_3, 0, &VAR_11);
  if (VAR_12)
   goto out_error;
  if (!VAR_11)
   goto done;
 }
 VAR_12 = FUNC_6(VAR_3, &VAR_9, &VAR_10);
 if (VAR_12)
  goto out_error;
 FUNC_0(VAR_3->bc_mp, VAR_10 == 1, VAR_2);


 if (VAR_9.rc_startblock + VAR_9.rc_blockcount <= VAR_4) {
  VAR_12 = FUNC_5(VAR_3, 0, &VAR_11);
  if (VAR_12)
   goto out_error;
  if (!VAR_11)
   goto done;
  VAR_12 = FUNC_6(VAR_3, &VAR_9, &VAR_10);
  if (VAR_12)
   goto out_error;
  FUNC_0(VAR_3->bc_mp, VAR_10 == 1, VAR_2);
 }


 if (VAR_9.rc_startblock >= VAR_4 + VAR_5)
  goto done;


 if (VAR_9.rc_startblock < VAR_4) {
  VAR_9.rc_blockcount -= (VAR_4 - VAR_9.rc_startblock);
  VAR_9.rc_startblock = VAR_4;
 }

 *VAR_6 = VAR_9.rc_startblock;
 *VAR_7 = FUNC_1(VAR_9.rc_blockcount, VAR_4 + VAR_5 - *VAR_6);
 if (!VAR_8)
  goto done;


 while (*VAR_6 + *VAR_7 < VAR_4 + VAR_5) {
  VAR_12 = FUNC_5(VAR_3, 0, &VAR_11);
  if (VAR_12)
   goto out_error;
  if (!VAR_11)
   break;
  VAR_12 = FUNC_6(VAR_3, &VAR_9, &VAR_10);
  if (VAR_12)
   goto out_error;
  FUNC_0(VAR_3->bc_mp, VAR_10 == 1, VAR_2);
  if (VAR_9.rc_startblock >= VAR_4 + VAR_5 ||
      VAR_9.rc_startblock != *VAR_6 + *VAR_7)
   break;
  *VAR_7 = FUNC_1(*VAR_7 + VAR_9.rc_blockcount, VAR_4 + VAR_5 - *VAR_6);
 }

done:
 FUNC_4(VAR_3->bc_mp,
   VAR_3->bc_private.a.agno, *VAR_6, *VAR_7);

out_error:
 if (VAR_12)
  FUNC_3(VAR_3->bc_mp,
    VAR_3->bc_private.a.agno, VAR_12, VAR_1);
 return VAR_12;
}
