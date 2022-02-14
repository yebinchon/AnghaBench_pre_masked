
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
struct xfs_trans {int dummy; } ;
struct xfs_owner_info {int dummy; } ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;


 int FUNC_0 (struct xfs_trans*,int ,int ,struct xfs_owner_info const*,int,int) ;

__attribute__((used)) static inline int
FUNC_1(
 struct xfs_trans *VAR_0,
 xfs_fsblock_t VAR_1,
 xfs_extlen_t VAR_2,
 const struct xfs_owner_info *VAR_3,
 enum xfs_ag_resv_type VAR_4)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
}
