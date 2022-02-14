
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_frame_interval {int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct et8ek8_sensor {struct et8ek8_reglist* current_reglist; } ;
struct TYPE_2__ {scalar_t__ ext_clock; } ;
struct et8ek8_reglist {TYPE_1__ mode; } ;


 int VAR_0 ;
 struct et8ek8_reglist* FUNC_0 (int *,struct et8ek8_reglist*,int *) ;
 int FUNC_1 (struct et8ek8_sensor*) ;
 int VAR_1 ;
 struct et8ek8_sensor* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
         struct v4l2_subdev_frame_interval *VAR_3)
{
 struct et8ek8_sensor *VAR_4 = FUNC_2(VAR_2);
 struct et8ek8_reglist *VAR_5;

 VAR_5 = FUNC_0(&VAR_1,
      VAR_4->current_reglist,
      &VAR_3->interval);

 if (!VAR_5)
  return -VAR_0;

 if (VAR_4->current_reglist->mode.ext_clock != VAR_5->mode.ext_clock)
  return -VAR_0;

 VAR_4->current_reglist = VAR_5;
 FUNC_1(VAR_4);

 return 0;
}
