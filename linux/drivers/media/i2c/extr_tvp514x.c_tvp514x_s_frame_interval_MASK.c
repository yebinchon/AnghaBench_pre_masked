
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fract {int dummy; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {int current_std; TYPE_2__* std_list; } ;
typedef enum tvp514x_std { ____Placeholder_tvp514x_std } tvp514x_std ;
struct TYPE_3__ {struct v4l2_fract frameperiod; } ;
struct TYPE_4__ {TYPE_1__ standard; } ;


 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int
FUNC_1(struct v4l2_subdev *VAR_0,
    struct v4l2_subdev_frame_interval *VAR_1)
{
 struct tvp514x_decoder *VAR_2 = FUNC_0(VAR_0);
 struct v4l2_fract *VAR_3;
 enum tvp514x_std VAR_4;


 VAR_3 = &VAR_1->interval;


 VAR_4 = VAR_2->current_std;

 *VAR_3 =
     VAR_2->std_list[VAR_4].standard.frameperiod;

 return 0;
}
