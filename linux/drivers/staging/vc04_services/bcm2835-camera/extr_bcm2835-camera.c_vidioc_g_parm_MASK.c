
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int readbuffers; int timeperframe; int capability; } ;
struct TYPE_5__ {TYPE_3__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int timeperframe; } ;
struct bm2835_mmal_dev {TYPE_1__ capture; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct bm2835_mmal_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    struct v4l2_streamparm *VAR_5)
{
 struct bm2835_mmal_dev *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 VAR_5->parm.capture.capability = VAR_2;
 VAR_5->parm.capture.timeperframe = VAR_6->capture.timeperframe;
 VAR_5->parm.capture.readbuffers = 1;
 return 0;
}
