
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dqid_t ;
typedef int uint ;
struct xfs_quotainfo {int dummy; } ;
struct xfs_mount {struct xfs_quotainfo* m_quotainfo; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct xfs_dquot {int dummy; } ;
struct radix_tree_root {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (struct xfs_dquot*) ;
 int FUNC_3 (struct xfs_dquot*) ;
 struct radix_tree_root* FUNC_4 (struct xfs_quotainfo*,int ) ;
 int FUNC_5 (struct xfs_inode*,int ) ;
 struct xfs_dquot* FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (struct xfs_inode*,int ) ;
 int FUNC_9 (struct xfs_dquot*) ;
 int FUNC_10 (struct xfs_mount*,struct xfs_quotainfo*,struct radix_tree_root*,int ,struct xfs_dquot*) ;
 struct xfs_dquot* FUNC_11 (struct xfs_mount*,struct xfs_quotainfo*,struct radix_tree_root*,int ) ;
 int FUNC_12 (struct xfs_mount*,int ) ;
 int FUNC_13 (struct xfs_mount*,int ,int ,int,struct xfs_dquot**) ;
 int FUNC_14 (struct xfs_inode*,int ) ;
 scalar_t__ FUNC_15 (struct xfs_mount*,int ) ;
 int VAR_2 ;

int
FUNC_16(
 struct xfs_inode *VAR_3,
 uint VAR_4,
 bool VAR_5,
 struct xfs_dquot **VAR_6)
{
 struct xfs_mount *VAR_7 = VAR_3->i_mount;
 struct xfs_quotainfo *VAR_8 = VAR_7->m_quotainfo;
 struct radix_tree_root *VAR_9 = FUNC_4(VAR_8, VAR_4);
 struct xfs_dquot *VAR_10;
 xfs_dqid_t VAR_11;
 int VAR_12;

 VAR_12 = FUNC_12(VAR_7, VAR_4);
 if (VAR_12)
  return VAR_12;

 FUNC_0(FUNC_7(VAR_3, VAR_1));
 FUNC_0(FUNC_6(VAR_3, VAR_4) == ((void*)0));

 VAR_11 = FUNC_14(VAR_3, VAR_4);

restart:
 VAR_10 = FUNC_11(VAR_7, VAR_8, VAR_9, VAR_11);
 if (VAR_10) {
  *VAR_6 = VAR_10;
  return 0;
 }
 FUNC_8(VAR_3, VAR_1);
 VAR_12 = FUNC_13(VAR_7, VAR_11, VAR_4, VAR_5, &VAR_10);
 FUNC_5(VAR_3, VAR_1);
 if (VAR_12)
  return VAR_12;





 if (FUNC_15(VAR_7, VAR_4)) {
  struct xfs_dquot *VAR_13;

  VAR_13 = FUNC_6(VAR_3, VAR_4);
  if (VAR_13) {
   FUNC_9(VAR_10);
   VAR_10 = VAR_13;
   FUNC_3(VAR_10);
   goto dqret;
  }
 } else {

  FUNC_9(VAR_10);
  return -VAR_0;
 }

 VAR_12 = FUNC_10(VAR_7, VAR_8, VAR_9, VAR_11, VAR_10);
 if (VAR_12) {




  FUNC_9(VAR_10);
  FUNC_1(VAR_7, VAR_2);
  goto restart;
 }

dqret:
 FUNC_0(FUNC_7(VAR_3, VAR_1));
 FUNC_2(VAR_10);
 *VAR_6 = VAR_10;
 return 0;
}
