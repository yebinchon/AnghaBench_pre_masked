
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int entity; } ;
struct v4l2_fh {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;
struct camss_video {int lock; TYPE_1__* camss; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct v4l2_fh* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_fh*) ;
 int FUNC_5 (struct v4l2_fh*,struct video_device*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (int *,int) ;
 struct video_device* FUNC_8 (struct file*) ;
 struct camss_video* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2)
{
 struct video_device *VAR_3 = FUNC_8(VAR_2);
 struct camss_video *VAR_4 = FUNC_9(VAR_2);
 struct v4l2_fh *VAR_5;
 int VAR_6;

 FUNC_2(&VAR_4->lock);

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto error_alloc;
 }

 FUNC_5(VAR_5, VAR_3);
 FUNC_4(VAR_5);

 VAR_2->private_data = VAR_5;

 VAR_6 = FUNC_7(&VAR_3->entity, 1);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->camss->dev, "Failed to power up pipeline: %d\n",
   VAR_6);
  goto error_pm_use;
 }

 FUNC_3(&VAR_4->lock);

 return 0;

error_pm_use:
 FUNC_6(VAR_2);

error_alloc:
 FUNC_3(&VAR_4->lock);

 return VAR_6;
}
