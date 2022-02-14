
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numerator; int denominator; } ;
struct TYPE_5__ {TYPE_1__ timeperframe; int capability; int readbuffers; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct pwc_device {int vframes; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_streamparm*,int ,int) ;
 struct pwc_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
        struct v4l2_streamparm *VAR_6)
{
 struct pwc_device *VAR_7 = FUNC_1(VAR_4);

 if (VAR_6->type != VAR_2)
  return -VAR_0;

 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->type = VAR_2;
 VAR_6->parm.capture.readbuffers = VAR_1;
 VAR_6->parm.capture.capability |= VAR_3;
 VAR_6->parm.capture.timeperframe.denominator = VAR_7->vframes;
 VAR_6->parm.capture.timeperframe.numerator = 1;

 return 0;
}
