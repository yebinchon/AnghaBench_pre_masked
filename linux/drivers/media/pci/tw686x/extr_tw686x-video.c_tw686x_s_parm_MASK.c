
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int denominator; unsigned int numerator; } ;
struct v4l2_captureparm {TYPE_2__ timeperframe; } ;
struct TYPE_3__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_1__ parm; } ;
struct tw686x_video_channel {unsigned int fps; int vidq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,struct v4l2_streamparm*) ;
 int FUNC_1 (struct tw686x_video_channel*,unsigned int) ;
 scalar_t__ FUNC_2 (int *) ;
 struct tw686x_video_channel* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
    struct v4l2_streamparm *VAR_3)
{
 struct tw686x_video_channel *VAR_4 = FUNC_3(VAR_1);
 struct v4l2_captureparm *VAR_5 = &VAR_3->parm.capture;
 unsigned int VAR_6 = VAR_5->timeperframe.denominator;
 unsigned int VAR_7 = VAR_5->timeperframe.numerator;
 unsigned int VAR_8;

 if (FUNC_2(&VAR_4->vidq))
  return -VAR_0;

 VAR_8 = (!VAR_7 || !VAR_6) ? 0 : VAR_6 / VAR_7;
 if (VAR_4->fps != VAR_8)
  FUNC_1(VAR_4, VAR_8);
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
