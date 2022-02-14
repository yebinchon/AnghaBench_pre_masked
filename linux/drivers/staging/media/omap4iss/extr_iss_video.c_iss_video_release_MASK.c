
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {int dummy; } ;
struct iss_video_fh {int queue; } ;
struct TYPE_2__ {int entity; } ;
struct iss_video {int iss; TYPE_1__ video; int type; } ;
struct file {struct v4l2_fh* private_data; } ;


 int FUNC_0 (struct file*,struct v4l2_fh*,int ) ;
 int FUNC_1 (struct iss_video_fh*) ;
 int FUNC_2 (int ) ;
 struct iss_video_fh* FUNC_3 (struct v4l2_fh*) ;
 int FUNC_4 (struct v4l2_fh*) ;
 int FUNC_5 (struct v4l2_fh*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 struct iss_video* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_0)
{
 struct iss_video *VAR_1 = FUNC_8(VAR_0);
 struct v4l2_fh *VAR_2 = VAR_0->private_data;
 struct iss_video_fh *VAR_3 = FUNC_3(VAR_2);


 FUNC_0(VAR_0, VAR_2, VAR_1->type);

 FUNC_6(&VAR_1->video.entity, 0);


 FUNC_7(&VAR_3->queue);

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(VAR_3);
 VAR_0->private_data = ((void*)0);

 FUNC_2(VAR_1->iss);

 return 0;
}
