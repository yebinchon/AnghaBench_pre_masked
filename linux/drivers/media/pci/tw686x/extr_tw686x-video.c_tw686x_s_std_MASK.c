
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_format {int dummy; } ;
struct tw686x_video_channel {int fps; int vidq; int video_standard; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_2 (struct tw686x_video_channel*,int ) ;
 int FUNC_3 (struct tw686x_video_channel*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 struct tw686x_video_channel* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, void *VAR_2, v4l2_std_id VAR_3)
{
 struct tw686x_video_channel *VAR_4 = FUNC_5(VAR_1);
 struct v4l2_format VAR_5;
 int VAR_6;

 if (VAR_4->video_standard == VAR_3)
  return 0;

 if (FUNC_4(&VAR_4->vidq))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_6)
  return VAR_6;





 FUNC_0(VAR_1, VAR_2, &VAR_5);
 FUNC_1(VAR_1, VAR_2, &VAR_5);





 FUNC_2(VAR_4, VAR_4->fps);
 return 0;
}
