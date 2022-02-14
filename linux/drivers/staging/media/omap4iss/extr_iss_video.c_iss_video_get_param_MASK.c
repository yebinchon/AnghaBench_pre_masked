
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeperframe; int capability; } ;
struct TYPE_4__ {TYPE_1__ output; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct iss_video_fh {int timeperframe; } ;
struct iss_video {scalar_t__ type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_streamparm*,int ,int) ;
 struct iss_video_fh* FUNC_1 (void*) ;
 struct iss_video* FUNC_2 (struct file*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_3, void *VAR_4, struct v4l2_streamparm *VAR_5)
{
 struct iss_video_fh *VAR_6 = FUNC_1(VAR_4);
 struct iss_video *VAR_7 = FUNC_2(VAR_3);

 if (VAR_7->type != VAR_1 ||
     VAR_7->type != VAR_5->type)
  return -VAR_0;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->type = VAR_1;
 VAR_5->parm.output.capability = VAR_2;
 VAR_5->parm.output.timeperframe = VAR_6->timeperframe;

 return 0;
}
