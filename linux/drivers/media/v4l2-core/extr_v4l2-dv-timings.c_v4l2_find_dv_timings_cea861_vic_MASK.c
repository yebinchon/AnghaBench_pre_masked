
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct v4l2_bt_timings {unsigned int width; int flags; scalar_t__ cea861_vic; } ;
struct v4l2_dv_timings {struct v4l2_bt_timings bt; } ;


 int VAR_0 ;
 struct v4l2_dv_timings* VAR_1 ;

bool FUNC_0(struct v4l2_dv_timings *VAR_2, u8 VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1[VAR_4].bt.width; VAR_4++) {
  const struct v4l2_bt_timings *VAR_5 =
   &VAR_1[VAR_4].bt;

  if ((VAR_5->flags & VAR_0) &&
      VAR_5->cea861_vic == VAR_3) {
   *VAR_2 = VAR_1[VAR_4];
   return 1;
  }
 }
 return 0;
}
