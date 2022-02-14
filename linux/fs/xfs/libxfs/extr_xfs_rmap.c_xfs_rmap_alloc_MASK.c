
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_extlen_t ;
typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct xfs_owner_info {int dummy; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;


 int FUNC_0 (struct xfs_btree_cur*,int) ;
 int FUNC_1 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info const*) ;
 struct xfs_btree_cur* FUNC_2 (struct xfs_mount*,struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(
 struct xfs_trans *VAR_0,
 struct xfs_buf *VAR_1,
 xfs_agnumber_t VAR_2,
 xfs_agblock_t VAR_3,
 xfs_extlen_t VAR_4,
 const struct xfs_owner_info *VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_0->t_mountp;
 struct xfs_btree_cur *VAR_7;
 int VAR_8;

 if (!FUNC_3(&VAR_6->m_sb))
  return 0;

 VAR_7 = FUNC_2(VAR_6, VAR_0, VAR_1, VAR_2);
 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, 0, VAR_5);

 FUNC_0(VAR_7, VAR_8);
 return VAR_8;
}
