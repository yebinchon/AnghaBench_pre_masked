
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct virtio_feature_desc {int index; int count; void* cda; scalar_t__ flags; void* cmd_code; void* features; } ;
struct virtio_device {int features; int dev; } ;
struct virtio_ccw_device {int revision; int cdev; } ;
struct ccw1 {int index; int count; void* cda; scalar_t__ flags; void* cmd_code; void* features; } ;
typedef void* __u32 ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct virtio_device*,int ) ;
 int FUNC_1 (int ,struct virtio_feature_desc*,int) ;
 struct virtio_feature_desc* FUNC_2 (int ,int) ;
 int FUNC_3 (struct virtio_ccw_device*,struct virtio_feature_desc*,int ) ;
 int FUNC_4 (struct virtio_device*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *,char*) ;
 struct virtio_ccw_device* FUNC_7 (struct virtio_device*) ;
 int FUNC_8 (struct virtio_device*) ;

__attribute__((used)) static int FUNC_9(struct virtio_device *VAR_5)
{
 struct virtio_ccw_device *VAR_6 = FUNC_7(VAR_5);
 struct virtio_feature_desc *VAR_7;
 struct ccw1 *VAR_8;
 int VAR_9;

 if (VAR_6->revision >= 1 &&
     !FUNC_0(VAR_5, VAR_4)) {
  FUNC_6(&VAR_5->dev, "virtio: device uses revision 1 "
   "but does not have VIRTIO_F_VERSION_1\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_2(VAR_6->cdev, sizeof(*VAR_8));
 if (!VAR_8)
  return -VAR_2;

 VAR_7 = FUNC_2(VAR_6->cdev, sizeof(*VAR_7));
 if (!VAR_7) {
  VAR_9 = -VAR_2;
  goto out_free;
 }

 FUNC_8(VAR_5);


 FUNC_4(VAR_5);

 VAR_7->index = 0;
 VAR_7->features = FUNC_5((u32)VAR_5->features);

 VAR_8->cmd_code = VAR_0;
 VAR_8->flags = 0;
 VAR_8->count = sizeof(*VAR_7);
 VAR_8->cda = (__u32)(unsigned long)VAR_7;
 VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_3);
 if (VAR_9)
  goto out_free;

 if (VAR_6->revision == 0)
  goto out_free;

 VAR_7->index = 1;
 VAR_7->features = FUNC_5(VAR_5->features >> 32);

 VAR_8->cmd_code = VAR_0;
 VAR_8->flags = 0;
 VAR_8->count = sizeof(*VAR_7);
 VAR_8->cda = (__u32)(unsigned long)VAR_7;
 VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_3);

out_free:
 FUNC_1(VAR_6->cdev, VAR_7, sizeof(*VAR_7));
 FUNC_1(VAR_6->cdev, VAR_8, sizeof(*VAR_8));

 return VAR_9;
}
