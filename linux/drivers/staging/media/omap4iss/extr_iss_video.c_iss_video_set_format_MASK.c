
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int dummy; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct iss_video_fh {struct v4l2_format format; } ;
struct iss_video {scalar_t__ type; int mutex; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iss_video*,struct v4l2_mbus_framefmt*,int *) ;
 int FUNC_1 (int *,struct v4l2_mbus_framefmt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct iss_video_fh* FUNC_4 (void*) ;
 struct iss_video* FUNC_5 (struct file*) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct iss_video_fh *VAR_4 = FUNC_4(VAR_2);
 struct iss_video *VAR_5 = FUNC_5(VAR_1);
 struct v4l2_mbus_framefmt VAR_6;

 if (VAR_3->type != VAR_5->type)
  return -VAR_0;

 FUNC_2(&VAR_5->mutex);





 FUNC_1(&VAR_3->fmt.pix, &VAR_6);
 FUNC_0(VAR_5, &VAR_6, &VAR_3->fmt.pix);

 VAR_4->format = *VAR_3;

 FUNC_3(&VAR_5->mutex);
 return 0;
}
