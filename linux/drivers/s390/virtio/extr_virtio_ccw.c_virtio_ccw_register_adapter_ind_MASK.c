
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {int dummy; } ;
struct virtio_thinint_area {unsigned long summary_indicator; int isc; int indicator; int bit_nr; } ;
struct virtio_ccw_device {TYPE_1__* cdev; struct airq_info* airq_info; } ;
struct ccw1 {int count; scalar_t__ cda; int flags; int cmd_code; } ;
struct airq_info {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,struct virtio_thinint_area*,int) ;
 struct virtio_thinint_area* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct virtio_ccw_device*,struct ccw1*,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct virtqueue**,int,int *,struct airq_info**) ;
 scalar_t__ FUNC_5 (struct airq_info*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct virtio_ccw_device*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_8(struct virtio_ccw_device *VAR_8,
        struct virtqueue *VAR_9[], int VAR_10,
        struct ccw1 *VAR_11)
{
 int VAR_12;
 struct virtio_thinint_area *VAR_13 = ((void*)0);
 struct airq_info *VAR_14;

 VAR_13 = FUNC_1(VAR_8->cdev,
          sizeof(*VAR_13));
 if (!VAR_13) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_13->indicator = FUNC_4(VAR_9, VAR_10,
           &VAR_13->bit_nr,
           &VAR_8->airq_info);
 if (!VAR_13->indicator) {
  VAR_12 = -VAR_3;
  goto out;
 }
 VAR_14 = VAR_8->airq_info;
 VAR_13->summary_indicator =
  (unsigned long) FUNC_5(VAR_14);
 VAR_13->isc = VAR_5;
 VAR_11->cmd_code = VAR_0;
 VAR_11->flags = VAR_1;
 VAR_11->count = sizeof(*VAR_13);
 VAR_11->cda = (__u32)(unsigned long)VAR_13;
 VAR_12 = FUNC_2(VAR_8, VAR_11, VAR_6);
 if (VAR_12) {
  if (VAR_12 == -VAR_4) {




   VAR_7 = 0;
   FUNC_6("Adapter interrupts unsupported on host\n");
  } else
   FUNC_3(&VAR_8->cdev->dev,
     "enabling adapter interrupts = %d\n", VAR_12);
  FUNC_7(VAR_8);
 }
out:
 FUNC_0(VAR_8->cdev, VAR_13, sizeof(*VAR_13));
 return VAR_12;
}
