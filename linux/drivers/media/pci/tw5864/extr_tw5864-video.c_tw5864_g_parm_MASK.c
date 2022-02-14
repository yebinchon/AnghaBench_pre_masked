
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numerator; } ;
struct v4l2_captureparm {int readbuffers; scalar_t__ capturemode; TYPE_2__ timeperframe; int capability; } ;
struct TYPE_3__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_1__ parm; } ;
struct tw5864_input {int frame_interval; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tw5864_input*,TYPE_2__*) ;
 struct tw5864_input* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_streamparm *VAR_3)
{
 struct tw5864_input *VAR_4 = FUNC_1(VAR_1);
 struct v4l2_captureparm *VAR_5 = &VAR_3->parm.capture;
 int VAR_6;

 VAR_5->capability = VAR_0;

 VAR_6 = FUNC_0(VAR_4, &VAR_5->timeperframe);
 VAR_5->timeperframe.numerator *= VAR_4->frame_interval;
 VAR_5->capturemode = 0;
 VAR_5->readbuffers = 2;

 return VAR_6;
}
