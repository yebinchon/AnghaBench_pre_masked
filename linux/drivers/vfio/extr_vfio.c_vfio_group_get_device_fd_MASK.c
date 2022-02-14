
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfio_group {scalar_t__ noiommu; int container_users; TYPE_1__* container; } ;
struct vfio_device {int dev; int device_data; TYPE_2__* ops; } ;
struct file {int f_mode; } ;
struct TYPE_7__ {int comm; } ;
struct TYPE_6__ {int (* open ) (int ) ;int (* release ) (int ) ;} ;
struct TYPE_5__ {int iommu_driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (char*,int *,struct vfio_device*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 TYPE_3__* VAR_9 ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int,struct file*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int VAR_10 ;
 struct vfio_device* FUNC_14 (struct vfio_group*,char*) ;
 int FUNC_15 (struct vfio_device*) ;
 int FUNC_16 (struct vfio_group*) ;

__attribute__((used)) static int FUNC_17(struct vfio_group *VAR_11, char *VAR_12)
{
 struct vfio_device *VAR_13;
 struct file *VAR_14;
 int VAR_15;

 if (0 == FUNC_4(&VAR_11->container_users) ||
     !VAR_11->container->iommu_driver || !FUNC_16(VAR_11))
  return -VAR_1;

 if (VAR_11->noiommu && !FUNC_5(VAR_0))
  return -VAR_3;

 VAR_13 = FUNC_14(VAR_11, VAR_12);
 if (!VAR_13)
  return -VAR_2;

 VAR_15 = VAR_13->ops->open(VAR_13->device_data);
 if (VAR_15) {
  FUNC_15(VAR_13);
  return VAR_15;
 }





 VAR_15 = FUNC_8(VAR_7);
 if (VAR_15 < 0) {
  VAR_13->ops->release(VAR_13->device_data);
  FUNC_15(VAR_13);
  return VAR_15;
 }

 VAR_14 = FUNC_2("[vfio-device]", &VAR_10,
       VAR_13, VAR_8);
 if (FUNC_0(VAR_14)) {
  FUNC_9(VAR_15);
  VAR_15 = FUNC_1(VAR_14);
  VAR_13->ops->release(VAR_13->device_data);
  FUNC_15(VAR_13);
  return VAR_15;
 }






 VAR_14->f_mode |= (VAR_4 | VAR_5 | VAR_6);

 FUNC_3(&VAR_11->container_users);

 FUNC_7(VAR_15, VAR_14);

 if (VAR_11->noiommu)
  FUNC_6(VAR_13->dev, "vfio-noiommu device opened by user "
    "(%s:%d)\n", VAR_9->comm, FUNC_13(VAR_9));

 return VAR_15;
}
