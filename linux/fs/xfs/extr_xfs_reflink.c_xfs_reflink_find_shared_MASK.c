
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_extlen_t ;
typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,struct xfs_trans*,int ,int ,struct xfs_buf**) ;
 int FUNC_1 (struct xfs_btree_cur*,int) ;
 int FUNC_2 (struct xfs_btree_cur*,int ,int ,int *,int *,int) ;
 struct xfs_btree_cur* FUNC_3 (struct xfs_mount*,struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_5(
 struct xfs_mount *VAR_1,
 struct xfs_trans *VAR_2,
 xfs_agnumber_t VAR_3,
 xfs_agblock_t VAR_4,
 xfs_extlen_t VAR_5,
 xfs_agblock_t *VAR_6,
 xfs_extlen_t *VAR_7,
 bool VAR_8)
{
 struct xfs_buf *VAR_9;
 struct xfs_btree_cur *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_1, VAR_2, VAR_3, 0, &VAR_9);
 if (VAR_11)
  return VAR_11;
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_9, VAR_3);

 VAR_11 = FUNC_2(VAR_10, VAR_4, VAR_5, VAR_6, VAR_7,
   VAR_8);

 FUNC_1(VAR_10, VAR_11);

 FUNC_4(VAR_2, VAR_9);
 return VAR_11;
}
