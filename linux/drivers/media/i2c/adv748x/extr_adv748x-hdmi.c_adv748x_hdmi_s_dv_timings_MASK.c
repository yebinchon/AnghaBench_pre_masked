
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ interlaced; } ;
struct v4l2_dv_timings {TYPE_1__ bt; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_hdmi {struct v4l2_dv_timings timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_dv_timings*) ;
 int FUNC_1 (struct adv748x_state*,struct v4l2_dv_timings*) ;
 int VAR_4 ;
 struct adv748x_state* FUNC_2 (struct adv748x_hdmi*) ;
 struct adv748x_hdmi* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct adv748x_state*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct v4l2_dv_timings*,struct v4l2_dv_timings*,int ,int) ;
 int FUNC_8 (struct v4l2_dv_timings*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_5,
         struct v4l2_dv_timings *VAR_6)
{
 struct adv748x_hdmi *VAR_7 = FUNC_3(VAR_5);
 struct adv748x_state *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;

 if (!VAR_6)
  return -VAR_2;

 if (FUNC_7(&VAR_7->timings, VAR_6, 0, 0))
  return 0;

 if (!FUNC_8(VAR_6, &VAR_4,
       ((void*)0), ((void*)0)))
  return -VAR_3;

 FUNC_0(VAR_6);

 FUNC_5(&VAR_8->mutex);

 VAR_9 = FUNC_1(VAR_8, VAR_6);
 if (VAR_9)
  goto error;

 VAR_7->timings = *VAR_6;

 FUNC_4(VAR_8, VAR_0, VAR_1,
    VAR_6->bt.interlaced ?
      VAR_1 : 0);

 FUNC_6(&VAR_8->mutex);

 return 0;

error:
 FUNC_6(&VAR_8->mutex);
 return VAR_9;
}
