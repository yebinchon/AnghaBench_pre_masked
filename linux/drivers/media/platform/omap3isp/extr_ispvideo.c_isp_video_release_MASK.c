
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {int dummy; } ;
struct isp_video_fh {int queue; } ;
struct TYPE_2__ {int entity; } ;
struct isp_video {int isp; TYPE_1__ video; int queue_lock; int type; } ;
struct file {struct v4l2_fh* private_data; } ;


 int FUNC_0 (struct file*,struct v4l2_fh*,int ) ;
 int FUNC_1 (struct isp_video_fh*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct isp_video_fh* FUNC_5 (struct v4l2_fh*) ;
 int FUNC_6 (struct v4l2_fh*) ;
 int FUNC_7 (struct v4l2_fh*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 struct isp_video* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_0)
{
 struct isp_video *VAR_1 = FUNC_10(VAR_0);
 struct v4l2_fh *VAR_2 = VAR_0->private_data;
 struct isp_video_fh *VAR_3 = FUNC_5(VAR_2);


 FUNC_0(VAR_0, VAR_2, VAR_1->type);

 FUNC_2(&VAR_1->queue_lock);
 FUNC_9(&VAR_3->queue);
 FUNC_3(&VAR_1->queue_lock);

 FUNC_8(&VAR_1->video.entity, 0);


 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 FUNC_1(VAR_3);
 VAR_0->private_data = ((void*)0);

 FUNC_4(VAR_1->isp);

 return 0;
}
