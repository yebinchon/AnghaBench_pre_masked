
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct noon010_info {TYPE_2__* curr_fmt; TYPE_1__* curr_win; } ;
struct TYPE_4__ {int ispctl1_reg; } ;
struct TYPE_3__ {int vid_ctl1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 struct noon010_info* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0)
{
 struct noon010_info *VAR_1 = FUNC_3(VAR_0);

 int VAR_2 = FUNC_2(VAR_0, FUNC_1(0),
    VAR_1->curr_win->vid_ctl1);
 if (VAR_2)
  return VAR_2;
 return FUNC_2(VAR_0, FUNC_0(0),
        VAR_1->curr_fmt->ispctl1_reg);
}
