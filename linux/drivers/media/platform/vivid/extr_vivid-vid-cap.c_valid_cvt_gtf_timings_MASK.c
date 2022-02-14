
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fract {int denominator; int numerator; } ;
struct v4l2_bt_timings {int standards; int interlaced; int polarities; int vsync; int height; int width; scalar_t__ pixelclock; } ;
struct v4l2_dv_timings {struct v4l2_bt_timings bt; } ;


 int FUNC_0 (struct v4l2_bt_timings*) ;
 int FUNC_1 (struct v4l2_bt_timings*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int ,int ,struct v4l2_dv_timings*) ;
 scalar_t__ FUNC_4 (int,int,int ,int ,int ,struct v4l2_fract,struct v4l2_dv_timings*) ;
 int FUNC_5 (struct v4l2_dv_timings*,int *,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_6(struct v4l2_dv_timings *VAR_3)
{
 struct v4l2_bt_timings *VAR_4 = &VAR_3->bt;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 if (!FUNC_5(VAR_3, &VAR_2,
    ((void*)0), ((void*)0)))
  return 0;

 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = FUNC_0(VAR_4);

 VAR_7 = (u32)VAR_4->pixelclock / VAR_5;

 if (VAR_4->standards == 0 || (VAR_4->standards & VAR_0)) {
  if (FUNC_3(VAR_6, VAR_7, VAR_4->vsync, VAR_4->width,
        VAR_4->polarities, VAR_4->interlaced, VAR_3))
   return 1;
 }

 if (VAR_4->standards == 0 || (VAR_4->standards & VAR_1)) {
  struct v4l2_fract VAR_8;

  FUNC_2(VAR_4->width, VAR_4->height,
      &VAR_8.numerator,
      &VAR_8.denominator);
  if (FUNC_4(VAR_6, VAR_7, VAR_4->vsync,
        VAR_4->polarities, VAR_4->interlaced,
        VAR_8, VAR_3))
   return 1;
 }
 return 0;
}
