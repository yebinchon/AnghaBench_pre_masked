
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_def_quota {int dummy; } ;
struct xfs_quotainfo {struct xfs_def_quota qi_prj_default; struct xfs_def_quota qi_grp_default; struct xfs_def_quota qi_usr_default; } ;
struct xfs_dquot {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct xfs_dquot*) ;
 int FUNC_2 (struct xfs_dquot*) ;
 scalar_t__ FUNC_3 (struct xfs_dquot*) ;

__attribute__((used)) static inline struct xfs_def_quota *
FUNC_4(struct xfs_dquot *VAR_0, struct xfs_quotainfo *VAR_1)
{
 struct xfs_def_quota *VAR_2;

 if (FUNC_3(VAR_0))
  VAR_2 = &VAR_1->qi_usr_default;
 else if (FUNC_1(VAR_0))
  VAR_2 = &VAR_1->qi_grp_default;
 else {
  FUNC_0(FUNC_2(VAR_0));
  VAR_2 = &VAR_1->qi_prj_default;
 }
 return VAR_2;
}
