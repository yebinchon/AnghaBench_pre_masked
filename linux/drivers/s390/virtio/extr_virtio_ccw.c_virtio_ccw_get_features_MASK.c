
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct virtio_feature_desc {int index; int count; int features; void* cda; scalar_t__ flags; void* cmd_code; } ;
struct virtio_device {int dummy; } ;
struct virtio_ccw_device {scalar_t__ revision; int cdev; } ;
struct ccw1 {int index; int count; int features; void* cda; scalar_t__ flags; void* cmd_code; } ;
typedef void* __u32 ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct virtio_feature_desc*,int) ;
 struct virtio_feature_desc* FUNC_1 (int ,int) ;
 int FUNC_2 (struct virtio_ccw_device*,struct virtio_feature_desc*,int ) ;
 int FUNC_3 (int ) ;
 struct virtio_ccw_device* FUNC_4 (struct virtio_device*) ;

__attribute__((used)) static u64 FUNC_5(struct virtio_device *VAR_2)
{
 struct virtio_ccw_device *VAR_3 = FUNC_4(VAR_2);
 struct virtio_feature_desc *VAR_4;
 int VAR_5;
 u64 VAR_6;
 struct ccw1 *VAR_7;

 VAR_7 = FUNC_1(VAR_3->cdev, sizeof(*VAR_7));
 if (!VAR_7)
  return 0;

 VAR_4 = FUNC_1(VAR_3->cdev, sizeof(*VAR_4));
 if (!VAR_4) {
  VAR_6 = 0;
  goto out_free;
 }

 VAR_4->index = 0;
 VAR_7->cmd_code = VAR_0;
 VAR_7->flags = 0;
 VAR_7->count = sizeof(*VAR_4);
 VAR_7->cda = (__u32)(unsigned long)VAR_4;
 VAR_5 = FUNC_2(VAR_3, VAR_7, VAR_1);
 if (VAR_5) {
  VAR_6 = 0;
  goto out_free;
 }

 VAR_6 = FUNC_3(VAR_4->features);

 if (VAR_3->revision == 0)
  goto out_free;


 VAR_4->index = 1;
 VAR_7->cmd_code = VAR_0;
 VAR_7->flags = 0;
 VAR_7->count = sizeof(*VAR_4);
 VAR_7->cda = (__u32)(unsigned long)VAR_4;
 VAR_5 = FUNC_2(VAR_3, VAR_7, VAR_1);
 if (VAR_5 == 0)
  VAR_6 |= (u64)FUNC_3(VAR_4->features) << 32;

out_free:
 FUNC_0(VAR_3->cdev, VAR_4, sizeof(*VAR_4));
 FUNC_0(VAR_3->cdev, VAR_7, sizeof(*VAR_7));
 return VAR_6;
}
