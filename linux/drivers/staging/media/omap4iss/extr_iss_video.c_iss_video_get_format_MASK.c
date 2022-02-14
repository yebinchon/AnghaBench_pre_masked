
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {scalar_t__ type; } ;
struct iss_video_fh {struct v4l2_format format; } ;
struct iss_video {scalar_t__ type; int mutex; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct iss_video_fh* FUNC_2 (void*) ;
 struct iss_video* FUNC_3 (struct file*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct iss_video_fh *VAR_4 = FUNC_2(VAR_2);
 struct iss_video *VAR_5 = FUNC_3(VAR_1);

 if (VAR_3->type != VAR_5->type)
  return -VAR_0;

 FUNC_0(&VAR_5->mutex);
 *VAR_3 = VAR_4->format;
 FUNC_1(&VAR_5->mutex);

 return 0;
}
