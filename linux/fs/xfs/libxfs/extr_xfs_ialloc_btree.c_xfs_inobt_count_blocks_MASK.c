
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_extlen_t ;
typedef int xfs_btnum_t ;
typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;


 int FUNC_0 (struct xfs_btree_cur*,int *) ;
 int FUNC_1 (struct xfs_btree_cur*,int) ;
 int FUNC_2 (struct xfs_mount*,struct xfs_trans*,int ,int ,struct xfs_btree_cur**,struct xfs_buf**) ;
 int FUNC_3 (struct xfs_trans*,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_mount *VAR_0,
 struct xfs_trans *VAR_1,
 xfs_agnumber_t VAR_2,
 xfs_btnum_t VAR_3,
 xfs_extlen_t *VAR_4)
{
 struct xfs_buf *VAR_5 = ((void*)0);
 struct xfs_btree_cur *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 FUNC_1(VAR_6, VAR_7);
 FUNC_3(VAR_1, VAR_5);

 return VAR_7;
}
