
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_captureparm {int timeperframe; int readbuffers; int capability; } ;
struct TYPE_8__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ frame_rate; } ;
struct TYPE_7__ {TYPE_1__ vp_params; } ;
struct camera_data {TYPE_2__ params; int num_frames; } ;
struct TYPE_9__ {scalar_t__ value; int period; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 struct camera_data* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5, struct v4l2_streamparm *VAR_6)
{
 struct camera_data *VAR_7 = FUNC_1(VAR_4);
 struct v4l2_captureparm *VAR_8 = &VAR_6->parm.capture;
 int VAR_9;

 if (VAR_6->type != VAR_1)
  return -VAR_0;

 VAR_8->capability = VAR_2;
 VAR_8->readbuffers = VAR_7->num_frames;
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++)
  if (VAR_7->params.vp_params.frame_rate == VAR_3[VAR_9].value) {
   VAR_8->timeperframe = VAR_3[VAR_9].period;
   break;
  }
 return 0;
}
