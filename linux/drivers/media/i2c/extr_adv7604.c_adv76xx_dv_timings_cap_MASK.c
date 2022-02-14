
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings_cap {unsigned int pad; } ;
struct adv76xx_state {unsigned int source_pad; } ;


 int VAR_0 ;
 struct v4l2_dv_timings_cap* FUNC_0 (struct v4l2_subdev*,unsigned int) ;
 struct adv76xx_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
   struct v4l2_dv_timings_cap *VAR_2)
{
 struct adv76xx_state *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = VAR_2->pad;

 if (VAR_2->pad >= VAR_3->source_pad)
  return -VAR_0;

 *VAR_2 = *FUNC_0(VAR_1, VAR_4);
 VAR_2->pad = VAR_4;

 return 0;
}
