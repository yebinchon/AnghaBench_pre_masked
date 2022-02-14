
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dqid_t ;
struct xfs_quotainfo {int qi_tree_lock; int qi_dquots; } ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int q_nrefs; } ;
struct radix_tree_root {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radix_tree_root*,int ,struct xfs_dquot*) ;
 int FUNC_4 (struct xfs_dquot*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct xfs_dquot*) ;

__attribute__((used)) static int
FUNC_7(
 struct xfs_mount *VAR_1,
 struct xfs_quotainfo *VAR_2,
 struct radix_tree_root *VAR_3,
 xfs_dqid_t VAR_4,
 struct xfs_dquot *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_2->qi_tree_lock);
 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (FUNC_5(VAR_6)) {

  FUNC_0(VAR_6 != -VAR_0);
  FUNC_2(&VAR_2->qi_tree_lock);
  FUNC_4(VAR_5);
  return VAR_6;
 }


 FUNC_6(VAR_5);
 VAR_5->q_nrefs = 1;

 VAR_2->qi_dquots++;
 FUNC_2(&VAR_2->qi_tree_lock);

 return 0;
}
