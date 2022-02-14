
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wm8739_state {int clock_freq; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm8739_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, u32 VAR_3)
{
 struct wm8739_state *VAR_4 = FUNC_0(VAR_2);

 VAR_4->clock_freq = VAR_3;

 FUNC_1(VAR_2, VAR_1, 0x000);
 switch (VAR_3) {
 case 44100:

  FUNC_1(VAR_2, VAR_0, 0x020);
  break;
 case 48000:

  FUNC_1(VAR_2, VAR_0, 0x000);
  break;
 case 32000:

  FUNC_1(VAR_2, VAR_0, 0x018);
  break;
 default:
  break;
 }

 FUNC_1(VAR_2, VAR_1, 0x001);
 return 0;
}
