
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_fract {int denominator; int numerator; } ;
struct TYPE_4__ {struct v4l2_fract timeperframe; } ;
struct TYPE_5__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct solo_enc_dev {int interval; int vidq; TYPE_3__* solo_dev; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int fps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct file*,void*,struct v4l2_streamparm*) ;
 int FUNC_2 (struct solo_enc_dev*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct solo_enc_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
         struct v4l2_streamparm *VAR_3)
{
 struct solo_enc_dev *VAR_4 = FUNC_4(VAR_1);
 struct v4l2_fract *VAR_5 = &VAR_3->parm.capture.timeperframe;
 u8 VAR_6 = VAR_4->solo_dev->fps;

 if (FUNC_3(&VAR_4->vidq))
  return -VAR_0;

 VAR_4->interval = FUNC_0(VAR_6, VAR_5->numerator, VAR_5->denominator);
 FUNC_2(VAR_4);
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
