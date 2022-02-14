
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wm8775_state {int input; int vol; int mute; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 struct wm8775_state* FUNC_0 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;
 int FUNC_3 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
       u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct wm8775_state *VAR_5 = FUNC_0(VAR_1);






 if (VAR_2 > 15) {
  FUNC_2(VAR_1, "Invalid input %d.\n", VAR_2);
  return -VAR_0;
 }
 VAR_5->input = VAR_2;
 if (FUNC_1(VAR_5->mute))
  return 0;
 if (!FUNC_1(VAR_5->vol))
  return 0;
 FUNC_3(VAR_1, 1);
 return 0;
}
