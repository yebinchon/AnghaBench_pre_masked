
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xfs_fsop_geom {int checked; int sick; } ;
struct ioctl_sick_map {scalar_t__ sick_mask; } ;


 struct ioctl_sick_map* VAR_0 ;
 struct ioctl_sick_map* VAR_1 ;
 int FUNC_0 (struct xfs_fsop_geom*,unsigned int,unsigned int,struct ioctl_sick_map const*) ;
 int FUNC_1 (struct xfs_mount*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct xfs_mount*,unsigned int*,unsigned int*) ;

void
FUNC_3(
 struct xfs_mount *VAR_2,
 struct xfs_fsop_geom *VAR_3)
{
 const struct ioctl_sick_map *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;

 VAR_3->sick = 0;
 VAR_3->checked = 0;

 FUNC_1(VAR_2, &VAR_5, &VAR_6);
 for (VAR_4 = VAR_0; VAR_4->sick_mask; VAR_4++)
  FUNC_0(VAR_3, VAR_5, VAR_6, VAR_4);

 FUNC_2(VAR_2, &VAR_5, &VAR_6);
 for (VAR_4 = VAR_1; VAR_4->sick_mask; VAR_4++)
  FUNC_0(VAR_3, VAR_5, VAR_6, VAR_4);
}
