
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int readbuffers; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct mcam_camera {int sensor; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct v4l2_streamparm*) ;
 int FUNC_1 (struct file*) ;
 struct mcam_camera* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
  struct v4l2_streamparm *VAR_3)
{
 struct mcam_camera *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(FUNC_1(VAR_1), VAR_4->sensor, VAR_3);
 VAR_3->parm.capture.readbuffers = VAR_0;
 return VAR_5;
}
