
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_pgoff; int vm_end; int vm_start; int vm_flags; struct vfio_platform_device* vm_private_data; } ;
struct vfio_platform_device {unsigned int num_regions; TYPE_1__* regions; } ;
struct TYPE_2__ {int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(void *VAR_12, struct vm_area_struct *VAR_13)
{
 struct vfio_platform_device *VAR_14 = VAR_12;
 unsigned int VAR_15;

 VAR_15 = VAR_13->vm_pgoff >> (VAR_3 - VAR_2);

 if (VAR_13->vm_end < VAR_13->vm_start)
  return -VAR_0;
 if (!(VAR_13->vm_flags & VAR_10))
  return -VAR_0;
 if (VAR_15 >= VAR_14->num_regions)
  return -VAR_0;
 if (VAR_13->vm_start & ~VAR_1)
  return -VAR_0;
 if (VAR_13->vm_end & ~VAR_1)
  return -VAR_0;

 if (!(VAR_14->regions[VAR_15].flags & VAR_6))
  return -VAR_0;

 if (!(VAR_14->regions[VAR_15].flags & VAR_7)
   && (VAR_13->vm_flags & VAR_9))
  return -VAR_0;

 if (!(VAR_14->regions[VAR_15].flags & VAR_8)
   && (VAR_13->vm_flags & VAR_11))
  return -VAR_0;

 VAR_13->vm_private_data = VAR_14;

 if (VAR_14->regions[VAR_15].type & VAR_4)
  return FUNC_0(VAR_14->regions[VAR_15], VAR_13);

 else if (VAR_14->regions[VAR_15].type & VAR_5)
  return -VAR_0;

 return -VAR_0;
}
