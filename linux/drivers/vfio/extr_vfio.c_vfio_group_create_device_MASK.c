
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_group {int device_lock; int device_list; } ;
struct vfio_device_ops {int dummy; } ;
struct vfio_device {int group_next; void* device_data; struct vfio_device_ops const* ops; struct vfio_group* group; struct device* dev; int kref; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct vfio_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct vfio_device*) ;
 int FUNC_2 (int *) ;
 struct vfio_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vfio_group*) ;

__attribute__((used)) static
struct vfio_device *FUNC_8(struct vfio_group *VAR_2,
          struct device *VAR_3,
          const struct vfio_device_ops *VAR_4,
          void *VAR_5)
{
 struct vfio_device *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_6->kref);
 VAR_6->dev = VAR_3;
 VAR_6->group = VAR_2;
 VAR_6->ops = VAR_4;
 VAR_6->device_data = VAR_5;
 FUNC_1(VAR_3, VAR_6);


 FUNC_7(VAR_2);

 FUNC_5(&VAR_2->device_lock);
 FUNC_4(&VAR_6->group_next, &VAR_2->device_list);
 FUNC_6(&VAR_2->device_lock);

 return VAR_6;
}
