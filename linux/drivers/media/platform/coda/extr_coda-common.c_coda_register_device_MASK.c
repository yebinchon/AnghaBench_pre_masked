
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int device_caps; int vfl_dir; int * v4l2_dev; int * lock; int release; int * ioctl_ops; int * fops; int name; } ;
struct coda_dev {int v4l2_dev; int dev_mutex; TYPE_2__* devtype; struct video_device* vfd; } ;
typedef enum coda_inst_type { ____Placeholder_coda_inst_type } coda_inst_type ;
struct TYPE_4__ {int num_vdevs; TYPE_1__** vdevs; } ;
struct TYPE_3__ {int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct video_device*,int ) ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (struct video_device*) ;
 int VAR_11 ;
 int FUNC_4 (struct video_device*,int ,int ) ;
 int FUNC_5 (struct video_device*,struct coda_dev*) ;

__attribute__((used)) static int FUNC_6(struct coda_dev *VAR_12, int VAR_13)
{
 struct video_device *VAR_14 = &VAR_12->vfd[VAR_13];
 enum coda_inst_type VAR_15;
 int VAR_16;

 if (VAR_13 >= VAR_12->devtype->num_vdevs)
  return -VAR_1;
 VAR_15 = VAR_12->devtype->vdevs[VAR_13]->type;

 FUNC_0(VAR_14->name, VAR_12->devtype->vdevs[VAR_13]->name, sizeof(VAR_14->name));
 VAR_14->fops = &VAR_9;
 VAR_14->ioctl_ops = &VAR_10;
 VAR_14->release = VAR_11,
 VAR_14->lock = &VAR_12->dev_mutex;
 VAR_14->v4l2_dev = &VAR_12->v4l2_dev;
 VAR_14->vfl_dir = VAR_4;
 VAR_14->device_caps = VAR_3 | VAR_2;
 FUNC_5(VAR_14, VAR_12);


 FUNC_1(VAR_14, VAR_6);
 FUNC_1(VAR_14, VAR_7);
 FUNC_1(VAR_14, VAR_8);

 VAR_16 = FUNC_4(VAR_14, VAR_5, 0);
 if (!VAR_16)
  FUNC_2(&VAR_12->v4l2_dev, "%s registered as %s\n",
     VAR_15 == VAR_0 ? "encoder" : "decoder",
     FUNC_3(VAR_14));
 return VAR_16;
}
