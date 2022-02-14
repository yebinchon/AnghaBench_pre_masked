
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
struct xfs_perag {scalar_t__ pagf_freeblks; } ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_perag*,int ) ;
 scalar_t__ FUNC_1 (struct xfs_perag*,int) ;

bool
FUNC_2(
 struct xfs_perag *VAR_2,
 xfs_extlen_t VAR_3,
 enum xfs_ag_resv_type VAR_4)
{
 return !FUNC_0(VAR_2, VAR_1) &&
  !FUNC_0(VAR_2, VAR_0) &&
  VAR_2->pagf_freeblks > FUNC_1(VAR_2, VAR_4) + VAR_3;
}
