
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int device_lock; } ;
struct vfio_device {int kref; struct vfio_group* group; } ;


 int FUNC_0 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct vfio_group*) ;

void FUNC_2(struct vfio_device *VAR_1)
{
 struct vfio_group *VAR_2 = VAR_1->group;
 FUNC_0(&VAR_1->kref, VAR_0, &VAR_2->device_lock);
 FUNC_1(VAR_2);
}
