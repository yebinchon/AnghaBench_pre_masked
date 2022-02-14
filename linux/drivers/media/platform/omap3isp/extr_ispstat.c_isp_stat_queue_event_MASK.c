
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct v4l2_event {int type; TYPE_2__ u; } ;
struct omap3isp_stat_event_status {int buf_err; int config_counter; int frame_number; } ;
struct TYPE_3__ {struct video_device* devnode; } ;
struct ispstat {int event_type; int config_counter; int frame_number; TYPE_1__ subdev; } ;
typedef int event ;


 int FUNC_0 (struct v4l2_event*,int ,int) ;
 int FUNC_1 (struct video_device*,struct v4l2_event*) ;

__attribute__((used)) static void FUNC_2(struct ispstat *VAR_0, int VAR_1)
{
 struct video_device *VAR_2 = VAR_0->subdev.devnode;
 struct v4l2_event VAR_3;
 struct omap3isp_stat_event_status *VAR_4 = (void *)VAR_3.u.data;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 if (!VAR_1) {
  VAR_4->frame_number = VAR_0->frame_number;
  VAR_4->config_counter = VAR_0->config_counter;
 } else {
  VAR_4->buf_err = 1;
 }
 VAR_3.type = VAR_0->event_type;
 FUNC_1(VAR_2, &VAR_3);
}
