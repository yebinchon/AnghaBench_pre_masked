
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_perag {int dummy; } ;
struct xfs_ag_geometry {int ag_sick; int ag_checked; } ;
struct ioctl_sick_map {int sick_mask; int ioctl_mask; } ;


 struct ioctl_sick_map* VAR_0 ;
 int FUNC_0 (struct xfs_perag*,unsigned int*,unsigned int*) ;

void
FUNC_1(
 struct xfs_perag *VAR_1,
 struct xfs_ag_geometry *VAR_2)
{
 const struct ioctl_sick_map *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_2->ag_sick = 0;
 VAR_2->ag_checked = 0;

 FUNC_0(VAR_1, &VAR_4, &VAR_5);
 for (VAR_3 = VAR_0; VAR_3->sick_mask; VAR_3++) {
  if (VAR_5 & VAR_3->sick_mask)
   VAR_2->ag_checked |= VAR_3->ioctl_mask;
  if (VAR_4 & VAR_3->sick_mask)
   VAR_2->ag_sick |= VAR_3->ioctl_mask;
 }
}
