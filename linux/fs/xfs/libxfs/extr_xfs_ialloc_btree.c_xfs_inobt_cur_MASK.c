
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_btnum_t ;
typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_mount*,struct xfs_trans*,int ,struct xfs_buf**) ;
 struct xfs_btree_cur* FUNC_2 (struct xfs_mount*,struct xfs_trans*,struct xfs_buf*,int ,int ) ;
 int FUNC_3 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_4(
 struct xfs_mount *VAR_1,
 struct xfs_trans *VAR_2,
 xfs_agnumber_t VAR_3,
 xfs_btnum_t VAR_4,
 struct xfs_btree_cur **VAR_5,
 struct xfs_buf **VAR_6)
{
 struct xfs_btree_cur *VAR_7;
 int VAR_8;

 FUNC_0(*VAR_6 == ((void*)0));
 FUNC_0(*VAR_5 == ((void*)0));

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_2(VAR_1, VAR_2, *VAR_6, VAR_3, VAR_4);
 if (!VAR_7) {
  FUNC_3(VAR_2, *VAR_6);
  *VAR_6 = ((void*)0);
  return -VAR_0;
 }
 *VAR_5 = VAR_7;
 return 0;
}
