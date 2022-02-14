
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numerator; int denominator; } ;
struct v4l2_captureparm {int readbuffers; TYPE_1__ timeperframe; int capability; } ;
struct TYPE_4__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct tw686x_video_channel {int fps; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tw686x_video_channel* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    struct v4l2_streamparm *VAR_5)
{
 struct tw686x_video_channel *VAR_6 = FUNC_0(VAR_3);
 struct v4l2_captureparm *VAR_7 = &VAR_5->parm.capture;

 if (VAR_5->type != VAR_1)
  return -VAR_0;
 VAR_5->parm.capture.readbuffers = 3;

 VAR_7->capability = VAR_2;
 VAR_7->timeperframe.numerator = 1;
 VAR_7->timeperframe.denominator = VAR_6->fps;
 return 0;
}
