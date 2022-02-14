
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct xfs_quotainfo {struct radix_tree_root qi_pquota_tree; struct radix_tree_root qi_gquota_tree; struct radix_tree_root qi_uquota_tree; } ;


 int FUNC_0 (int ) ;




__attribute__((used)) static inline struct radix_tree_root *
FUNC_1(
 struct xfs_quotainfo *VAR_0,
 int VAR_1)
{
 switch (VAR_1) {
 case 128:
  return &VAR_0->qi_uquota_tree;
 case 130:
  return &VAR_0->qi_gquota_tree;
 case 129:
  return &VAR_0->qi_pquota_tree;
 default:
  FUNC_0(0);
 }
 return ((void*)0);
}
