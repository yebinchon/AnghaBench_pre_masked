
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ag_resv {int dummy; } ;
struct xfs_perag {struct xfs_ag_resv pag_rmapbt_resv; struct xfs_ag_resv pag_meta_resv; } ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;





__attribute__((used)) static inline struct xfs_ag_resv *
FUNC_0(
 struct xfs_perag *VAR_0,
 enum xfs_ag_resv_type VAR_1)
{
 switch (VAR_1) {
 case 129:
  return &VAR_0->pag_meta_resv;
 case 128:
  return &VAR_0->pag_rmapbt_resv;
 default:
  return ((void*)0);
 }
}
