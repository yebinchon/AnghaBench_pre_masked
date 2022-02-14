
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_device_info {int flags; int num_irqs; scalar_t__ num_regions; } ;
struct vfio_ccw_private {scalar_t__ num_regions; } ;
struct mdev_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vfio_ccw_private* FUNC_0 (int ) ;
 int FUNC_1 (struct mdev_device*) ;

__attribute__((used)) static int FUNC_2(struct vfio_device_info *VAR_4,
      struct mdev_device *VAR_5)
{
 struct vfio_ccw_private *VAR_6;

 VAR_6 = FUNC_0(FUNC_1(VAR_5));
 VAR_4->flags = VAR_2 | VAR_3;
 VAR_4->num_regions = VAR_1 + VAR_6->num_regions;
 VAR_4->num_irqs = VAR_0;

 return 0;
}
