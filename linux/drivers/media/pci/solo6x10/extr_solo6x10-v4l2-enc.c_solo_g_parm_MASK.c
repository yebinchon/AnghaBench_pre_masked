
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int denominator; int numerator; } ;
struct v4l2_captureparm {int readbuffers; scalar_t__ capturemode; TYPE_3__ timeperframe; int capability; } ;
struct TYPE_5__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct solo_enc_dev {TYPE_1__* solo_dev; int interval; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int fps; } ;


 int VAR_0 ;
 struct solo_enc_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
         struct v4l2_streamparm *VAR_3)
{
 struct solo_enc_dev *VAR_4 = FUNC_0(VAR_1);
 struct v4l2_captureparm *VAR_5 = &VAR_3->parm.capture;

 VAR_5->capability = VAR_0;
 VAR_5->timeperframe.numerator = VAR_4->interval;
 VAR_5->timeperframe.denominator = VAR_4->solo_dev->fps;
 VAR_5->capturemode = 0;

 VAR_5->readbuffers = 2;

 return 0;
}
