
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_bt_timings {int width; int standards; } ;
struct v4l2_dv_timings {scalar_t__ type; struct v4l2_bt_timings bt; } ;
struct tvp7002 {TYPE_2__* current_timings; } ;
struct TYPE_3__ {struct v4l2_bt_timings bt; } ;
struct TYPE_4__ {int p_settings; TYPE_1__ timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_bt_timings const*,struct v4l2_bt_timings const*,int) ;
 struct tvp7002* FUNC_1 (struct v4l2_subdev*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4,
     struct v4l2_dv_timings *VAR_5)
{
 struct tvp7002 *VAR_6 = FUNC_1(VAR_4);
 const struct v4l2_bt_timings *VAR_7 = &VAR_5->bt;
 int VAR_8;

 if (VAR_5->type != VAR_2)
  return -VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  const struct v4l2_bt_timings *VAR_9 = &VAR_3[VAR_8].timings.bt;

  if (!FUNC_0(VAR_7, VAR_9, &VAR_7->standards - &VAR_7->width)) {
   VAR_6->current_timings = &VAR_3[VAR_8];
   return FUNC_2(VAR_4, VAR_3[VAR_8].p_settings);
  }
 }
 return -VAR_0;
}
