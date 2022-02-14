
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dqid_t ;
typedef int uint ;
struct xfs_quotainfo {int dummy; } ;
struct xfs_mount {struct xfs_quotainfo* m_quotainfo; } ;
struct xfs_dquot {int dummy; } ;
struct radix_tree_root {int dummy; } ;


 int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_dquot*) ;
 struct radix_tree_root* FUNC_2 (struct xfs_quotainfo*,int ) ;
 int FUNC_3 (struct xfs_dquot*) ;
 int FUNC_4 (struct xfs_mount*,struct xfs_quotainfo*,struct radix_tree_root*,int ,struct xfs_dquot*) ;
 struct xfs_dquot* FUNC_5 (struct xfs_mount*,struct xfs_quotainfo*,struct radix_tree_root*,int ) ;
 int FUNC_6 (struct xfs_mount*,int ) ;
 int FUNC_7 (struct xfs_mount*,int ,int ,int,struct xfs_dquot**) ;
 int VAR_0 ;

int
FUNC_8(
 struct xfs_mount *VAR_1,
 xfs_dqid_t VAR_2,
 uint VAR_3,
 bool VAR_4,
 struct xfs_dquot **VAR_5)
{
 struct xfs_quotainfo *VAR_6 = VAR_1->m_quotainfo;
 struct radix_tree_root *VAR_7 = FUNC_2(VAR_6, VAR_3);
 struct xfs_dquot *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_1, VAR_3);
 if (VAR_9)
  return VAR_9;

restart:
 VAR_8 = FUNC_5(VAR_1, VAR_6, VAR_7, VAR_2);
 if (VAR_8) {
  *VAR_5 = VAR_8;
  return 0;
 }

 VAR_9 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_1, VAR_6, VAR_7, VAR_2, VAR_8);
 if (VAR_9) {




  FUNC_3(VAR_8);
  FUNC_0(VAR_1, VAR_0);
  goto restart;
 }

 FUNC_1(VAR_8);
 *VAR_5 = VAR_8;
 return 0;
}
