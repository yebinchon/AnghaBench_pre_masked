
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int vid_input; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct cx18*,int ,int ) ;
 struct cx18_av_state* FUNC_1 (struct v4l2_subdev*) ;
 struct cx18* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
       u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct cx18_av_state *VAR_4 = FUNC_1(VAR_0);
 struct cx18 *VAR_5 = FUNC_2(VAR_0);
 return FUNC_0(VAR_5, VAR_4->vid_input, VAR_1);
}
