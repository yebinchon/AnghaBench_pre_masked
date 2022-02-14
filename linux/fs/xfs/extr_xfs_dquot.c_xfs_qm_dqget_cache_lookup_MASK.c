
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dqid_t ;
struct xfs_quotainfo {int qi_tree_lock; } ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int dq_flags; int q_nrefs; } ;
struct radix_tree_root {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct xfs_dquot* FUNC_4 (struct radix_tree_root*,int ) ;
 int FUNC_5 (struct xfs_dquot*) ;
 int FUNC_6 (struct xfs_dquot*) ;
 int FUNC_7 (struct xfs_dquot*) ;
 int FUNC_8 (struct xfs_dquot*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct xfs_dquot *
FUNC_9(
 struct xfs_mount *VAR_3,
 struct xfs_quotainfo *VAR_4,
 struct radix_tree_root *VAR_5,
 xfs_dqid_t VAR_6)
{
 struct xfs_dquot *VAR_7;

restart:
 FUNC_2(&VAR_4->qi_tree_lock);
 VAR_7 = FUNC_4(VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_3(&VAR_4->qi_tree_lock);
  FUNC_0(VAR_3, VAR_2);
  return ((void*)0);
 }

 FUNC_7(VAR_7);
 if (VAR_7->dq_flags & VAR_0) {
  FUNC_8(VAR_7);
  FUNC_3(&VAR_4->qi_tree_lock);
  FUNC_5(VAR_7);
  FUNC_1(1);
  goto restart;
 }

 VAR_7->q_nrefs++;
 FUNC_3(&VAR_4->qi_tree_lock);

 FUNC_6(VAR_7);
 FUNC_0(VAR_3, VAR_1);
 return VAR_7;
}
