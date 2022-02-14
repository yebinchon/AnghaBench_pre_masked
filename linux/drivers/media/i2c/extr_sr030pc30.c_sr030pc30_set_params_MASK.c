
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct sr030pc30_info {TYPE_2__* curr_fmt; TYPE_1__* curr_win; } ;
struct TYPE_4__ {int ispctl1_reg; } ;
struct TYPE_3__ {int vid_ctl1; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 struct sr030pc30_info* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2)
{
 struct sr030pc30_info *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 if (!VAR_3->curr_win)
  return -VAR_0;


 VAR_4 = FUNC_1(VAR_2, VAR_1,
       VAR_3->curr_win->vid_ctl1);

 if (!VAR_4 && VAR_3->curr_fmt)
  VAR_4 = FUNC_1(VAR_2, FUNC_0(0),
    VAR_3->curr_fmt->ispctl1_reg);
 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_2);

 return VAR_4;
}
