
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numerator; int denominator; } ;
struct TYPE_5__ {TYPE_1__ timeperframe; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct pwc_device {int pixfmt; int height; int width; int vb_queue; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct file*,void*,struct v4l2_streamparm*) ;
 int FUNC_1 (struct pwc_device*,int ,int ,int ,int,int*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct pwc_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
        struct v4l2_streamparm *VAR_5)
{
 struct pwc_device *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = 0;
 int VAR_8, VAR_9;

 if (VAR_5->type != VAR_2)
  return -VAR_1;




 if (VAR_5->parm.capture.timeperframe.numerator == 0 ||
     VAR_5->parm.capture.timeperframe.denominator == 0)
  VAR_9 = 30;
 else
  VAR_9 = VAR_5->parm.capture.timeperframe.denominator /
        VAR_5->parm.capture.timeperframe.numerator;

 if (FUNC_2(&VAR_6->vb_queue))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_6, VAR_6->width, VAR_6->height, VAR_6->pixfmt,
     VAR_9, &VAR_7, 0);

 FUNC_0(VAR_3, VAR_4, VAR_5);

 return VAR_8;
}
