
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int device_caps; int num; int name; int * ioctl_ops; int vfl_dir; int * v4l2_dev; int * lock; int release; int * fops; } ;
struct of_device_id {char* compatible; } ;
struct hantro_func {unsigned int id; struct video_device vdev; } ;
struct hantro_dev {int v4l2_dev; struct hantro_func* decoder; struct hantro_func* encoder; int vpu_mutex; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hantro_func* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (struct hantro_dev*,struct hantro_func*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct of_device_id* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,char*,char*,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 int VAR_10 ;
 int FUNC_6 (struct video_device*,int ,int) ;
 int FUNC_7 (struct video_device*,struct hantro_dev*) ;
 int FUNC_8 (struct video_device*) ;

__attribute__((used)) static int FUNC_9(struct hantro_dev *VAR_11, unsigned int VAR_12)
{
 const struct of_device_id *VAR_13;
 struct hantro_func *VAR_14;
 struct video_device *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_2(VAR_9, VAR_11->dev->of_node);
 VAR_14 = FUNC_0(VAR_11->dev, sizeof(*VAR_14), VAR_1);
 if (!VAR_14) {
  FUNC_4(&VAR_11->v4l2_dev, "Failed to allocate video device\n");
  return -VAR_0;
 }

 VAR_14->id = VAR_12;

 VAR_15 = &VAR_14->vdev;
 VAR_15->fops = &VAR_7;
 VAR_15->release = VAR_10;
 VAR_15->lock = &VAR_11->vpu_mutex;
 VAR_15->v4l2_dev = &VAR_11->v4l2_dev;
 VAR_15->vfl_dir = VAR_5;
 VAR_15->device_caps = VAR_3 | VAR_4;
 VAR_15->ioctl_ops = &VAR_8;
 FUNC_3(VAR_15->name, sizeof(VAR_15->name), "%s-%s", VAR_13->compatible,
   VAR_12 == VAR_2 ? "enc" : "dec");

 if (VAR_12 == VAR_2)
  VAR_11->encoder = VAR_14;
 else
  VAR_11->decoder = VAR_14;

 FUNC_7(VAR_15, VAR_11);

 VAR_16 = FUNC_6(VAR_15, VAR_6, -1);
 if (VAR_16) {
  FUNC_4(&VAR_11->v4l2_dev, "Failed to register video device\n");
  return VAR_16;
 }

 VAR_16 = FUNC_1(VAR_11, VAR_14);
 if (VAR_16) {
  FUNC_4(&VAR_11->v4l2_dev,
    "Failed to attach functionality to the media device\n");
  goto err_unreg_dev;
 }

 FUNC_5(&VAR_11->v4l2_dev, "registered %s as /dev/video%d\n", VAR_15->name,
    VAR_15->num);

 return 0;

err_unreg_dev:
 FUNC_8(VAR_15);
 return VAR_16;
}
