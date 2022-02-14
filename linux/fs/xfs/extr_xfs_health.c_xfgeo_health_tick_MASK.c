
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_fsop_geom {int sick; int checked; } ;
struct ioctl_sick_map {unsigned int sick_mask; int ioctl_mask; } ;



__attribute__((used)) static inline void
FUNC_0(
 struct xfs_fsop_geom *VAR_0,
 unsigned int VAR_1,
 unsigned int VAR_2,
 const struct ioctl_sick_map *VAR_3)
{
 if (VAR_2 & VAR_3->sick_mask)
  VAR_0->checked |= VAR_3->ioctl_mask;
 if (VAR_1 & VAR_3->sick_mask)
  VAR_0->sick |= VAR_3->ioctl_mask;
}
