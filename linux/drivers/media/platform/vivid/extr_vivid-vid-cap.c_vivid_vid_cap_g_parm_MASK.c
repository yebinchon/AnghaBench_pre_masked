
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vivid_dev {int timeperframe_vid_cap; scalar_t__ multiplanar; } ;
struct TYPE_4__ {int readbuffers; int timeperframe; int capability; } ;
struct TYPE_3__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_1__ parm; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_4, void *VAR_5,
     struct v4l2_streamparm *VAR_6)
{
 struct vivid_dev *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6->type != (VAR_7->multiplanar ?
      VAR_2 :
      VAR_1))
  return -VAR_0;

 VAR_6->parm.capture.capability = VAR_3;
 VAR_6->parm.capture.timeperframe = VAR_7->timeperframe_vid_cap;
 VAR_6->parm.capture.readbuffers = 1;
 return 0;
}
