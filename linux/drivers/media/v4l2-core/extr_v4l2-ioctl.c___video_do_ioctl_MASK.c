
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dev_debug; int prio; int * valid_ioctls; TYPE_2__* v4l2_dev; int flags; struct v4l2_ioctl_ops* ioctl_ops; } ;
struct v4l2_ioctl_ops {long (* vidioc_default ) (struct file*,void*,int,unsigned int,void*) ;} ;
typedef struct v4l2_ioctl_info {int flags; unsigned int ioctl; long (* func ) (struct v4l2_ioctl_ops const*,struct file*,void*,void*) ;int (* debug ) (void*,int) ;} const v4l2_ioctl_info ;
struct v4l2_fh {int prio; scalar_t__ ctrl_handler; } ;
struct mutex {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_4__ {TYPE_1__* mdev; } ;
struct TYPE_3__ {struct mutex req_queue_mutex; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_13 ;
 size_t FUNC_1 (unsigned int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int ) ;
 long FUNC_6 (struct v4l2_ioctl_ops const*,struct file*,void*,void*) ;
 long FUNC_7 (struct file*,void*,int,unsigned int,void*) ;
 int FUNC_8 (void*,int) ;
 int FUNC_9 (void*,int) ;
 scalar_t__ FUNC_10 (size_t,int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 struct mutex* FUNC_12 (struct video_device*,struct v4l2_fh*,unsigned int,void*) ;
 struct v4l2_ioctl_info const* VAR_15 ;
 scalar_t__ FUNC_13 (unsigned int) ;
 long FUNC_14 (int ,int ) ;
 int FUNC_15 (void*,int) ;
 int FUNC_16 (int ,unsigned int) ;
 struct video_device* FUNC_17 (struct file*) ;
 int FUNC_18 (struct video_device*) ;
 int FUNC_19 (struct video_device*) ;

__attribute__((used)) static long FUNC_20(struct file *VAR_16,
  unsigned int VAR_17, void *VAR_18)
{
 struct video_device *VAR_19 = FUNC_17(VAR_16);
 struct mutex *VAR_20 = ((void*)0);
 struct mutex *VAR_21;
 const struct v4l2_ioctl_ops *VAR_22 = VAR_19->ioctl_ops;
 bool VAR_23 = 0;
 struct v4l2_ioctl_info VAR_24;
 const struct v4l2_ioctl_info *VAR_25;
 void *VAR_26 = VAR_16->private_data;
 struct v4l2_fh *VAR_27 = ((void*)0);
 int VAR_28 = VAR_19->dev_debug;
 long VAR_29 = -VAR_1;

 if (VAR_22 == ((void*)0)) {
  FUNC_5("%s: has no ioctl_ops.\n",
    FUNC_18(VAR_19));
  return VAR_29;
 }

 if (FUNC_10(VAR_8, &VAR_19->flags))
  VAR_27 = VAR_16->private_data;







 if (FUNC_11(VAR_19->v4l2_dev) &&
     (VAR_17 == VAR_12 || VAR_17 == VAR_11)) {
  VAR_20 = &VAR_19->v4l2_dev->mdev->req_queue_mutex;

  if (FUNC_2(VAR_20))
   return -VAR_2;
 }

 VAR_21 = FUNC_12(VAR_19, VAR_27, VAR_17, VAR_18);

 if (VAR_21 && FUNC_2(VAR_21)) {
  if (VAR_20)
   FUNC_3(VAR_20);
  return -VAR_2;
 }

 if (!FUNC_19(VAR_19)) {
  VAR_29 = -VAR_0;
  goto unlock;
 }

 if (FUNC_13(VAR_17)) {
  VAR_25 = &VAR_15[FUNC_1(VAR_17)];

  if (!FUNC_10(FUNC_1(VAR_17), VAR_19->valid_ioctls) &&
      !((VAR_25->flags & VAR_3) && VAR_27 && VAR_27->ctrl_handler))
   goto done;

  if (VAR_27 && (VAR_25->flags & VAR_4)) {
   VAR_29 = FUNC_14(VAR_19->prio, VAR_27->prio);
   if (VAR_29)
    goto done;
  }
 } else {
  VAR_24.ioctl = VAR_17;
  VAR_24.flags = 0;
  VAR_24.debug = FUNC_15;
  VAR_25 = &VAR_24;
 }

 VAR_23 = FUNC_0(VAR_17) == VAR_14;
 if (VAR_25 != &VAR_24) {
  VAR_29 = VAR_25->func(VAR_22, VAR_16, VAR_26, VAR_18);
 } else if (!VAR_22->vidioc_default) {
  VAR_29 = -VAR_1;
 } else {
  VAR_29 = VAR_22->vidioc_default(VAR_16, VAR_26,
   VAR_27 ? FUNC_14(VAR_19->prio, VAR_27->prio) >= 0 : 0,
   VAR_17, VAR_18);
 }

done:
 if (VAR_28 & (VAR_5 | VAR_6)) {
  if (!(VAR_28 & VAR_7) &&
      (VAR_17 == VAR_10 || VAR_17 == VAR_9))
   goto unlock;

  FUNC_16(FUNC_18(VAR_19), VAR_17);
  if (VAR_29 < 0)
   FUNC_4(": error %ld", VAR_29);
  if (!(VAR_28 & VAR_6))
   FUNC_4("\n");
  else if (FUNC_0(VAR_17) == VAR_13)
   VAR_25->debug(VAR_18, VAR_23);
  else {
   FUNC_4(": ");
   VAR_25->debug(VAR_18, VAR_23);
  }
 }

unlock:
 if (VAR_21)
  FUNC_3(VAR_21);
 if (VAR_20)
  FUNC_3(VAR_20);
 return VAR_29;
}
