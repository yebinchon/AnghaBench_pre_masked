
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_4__ {int frame_sequence; } ;
struct TYPE_5__ {TYPE_1__ frame_sync; } ;
struct v4l2_event {TYPE_2__ u; int type; } ;
struct isp_pipeline {int frame_number; } ;
struct TYPE_6__ {struct video_device* devnode; int entity; } ;
struct isp_ccdc_device {TYPE_3__ subdev; } ;
typedef int event ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_event*,int ,int) ;
 struct isp_pipeline* FUNC_3 (int *) ;
 int FUNC_4 (struct video_device*,struct v4l2_event*) ;

__attribute__((used)) static void FUNC_5(struct isp_ccdc_device *VAR_1)
{
 struct isp_pipeline *VAR_2 = FUNC_3(&VAR_1->subdev.entity);
 struct video_device *VAR_3 = VAR_1->subdev.devnode;
 struct v4l2_event VAR_4;


 FUNC_0(&VAR_2->frame_number);

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_0;
 VAR_4.u.frame_sync.frame_sequence = FUNC_1(&VAR_2->frame_number);

 FUNC_4(VAR_3, &VAR_4);
}
