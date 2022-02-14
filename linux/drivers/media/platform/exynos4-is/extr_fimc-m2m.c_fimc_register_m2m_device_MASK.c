
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int minor; int device_caps; int entity; int name; int flags; int vfl_dir; int * lock; int release; struct v4l2_device* v4l2_dev; int * ioctl_ops; int * fops; } ;
struct v4l2_device {int dummy; } ;
struct TYPE_2__ {int m2m_dev; struct video_device vfd; } ;
struct fimc_dev {int id; TYPE_1__ m2m; int lock; struct v4l2_device* v4l2_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (struct video_device*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int,char*,int) ;
 int FUNC_7 (struct v4l2_device*,char*) ;
 int FUNC_8 (struct v4l2_device*,char*,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct video_device*) ;
 int VAR_8 ;
 int FUNC_12 (struct video_device*,int ,int) ;
 int FUNC_13 (struct video_device*,struct fimc_dev*) ;

int FUNC_14(struct fimc_dev *VAR_9,
        struct v4l2_device *VAR_10)
{
 struct video_device *VAR_11 = &VAR_9->m2m.vfd;
 int VAR_12;

 VAR_9->v4l2_dev = VAR_10;

 FUNC_4(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->fops = &VAR_5;
 VAR_11->ioctl_ops = &VAR_6;
 VAR_11->v4l2_dev = VAR_10;
 VAR_11->minor = -1;
 VAR_11->release = VAR_8;
 VAR_11->lock = &VAR_9->lock;
 VAR_11->vfl_dir = VAR_3;
 VAR_11->device_caps = VAR_0 | VAR_1;
 FUNC_5(VAR_2, &VAR_11->flags);

 FUNC_6(VAR_11->name, sizeof(VAR_11->name), "fimc.%d.m2m", VAR_9->id);
 FUNC_13(VAR_11, VAR_9);

 VAR_9->m2m.m2m_dev = FUNC_9(&VAR_7);
 if (FUNC_0(VAR_9->m2m.m2m_dev)) {
  FUNC_7(VAR_10, "failed to initialize v4l2-m2m device\n");
  return FUNC_1(VAR_9->m2m.m2m_dev);
 }

 VAR_12 = FUNC_3(&VAR_11->entity, 0, ((void*)0));
 if (VAR_12)
  goto err_me;

 VAR_12 = FUNC_12(VAR_11, VAR_4, -1);
 if (VAR_12)
  goto err_vd;

 FUNC_8(VAR_10, "Registered %s as /dev/%s\n",
    VAR_11->name, FUNC_11(VAR_11));
 return 0;

err_vd:
 FUNC_2(&VAR_11->entity);
err_me:
 FUNC_10(VAR_9->m2m.m2m_dev);
 return VAR_12;
}
