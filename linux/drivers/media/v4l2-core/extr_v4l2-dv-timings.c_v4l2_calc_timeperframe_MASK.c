
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct v4l2_fract {int member_0; int member_1; unsigned long numerator; unsigned long denominator; } ;
struct v4l2_bt_timings {unsigned long long pixelclock; int flags; } ;
struct v4l2_dv_timings {scalar_t__ type; struct v4l2_bt_timings bt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct v4l2_bt_timings const*) ;
 int FUNC_1 (struct v4l2_bt_timings const*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int,int,unsigned long*,unsigned long*) ;

struct v4l2_fract FUNC_4(const struct v4l2_dv_timings *VAR_3)
{
 const struct v4l2_bt_timings *VAR_4 = &VAR_3->bt;
 struct v4l2_fract VAR_5 = { 1, 1 };
 unsigned long VAR_6, VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 u64 VAR_11;

 if (VAR_3->type != VAR_0)
  return VAR_5;

 VAR_8 = FUNC_1(VAR_4);
 VAR_9 = FUNC_0(VAR_4);
 VAR_11 = VAR_4->pixelclock;

 if ((VAR_4->flags & VAR_1) &&
     (VAR_4->flags & VAR_2))
  VAR_11 = FUNC_2(VAR_11 * 1000ULL, 1001);

 VAR_10 = (VAR_8 * VAR_9) > 0 ? FUNC_2((100 * VAR_11), (VAR_8 * VAR_9)) : 0;
 if (!VAR_10)
  return VAR_5;

 FUNC_3(VAR_10, 100, VAR_10, 100, &VAR_6, &VAR_7);

 VAR_5.numerator = VAR_7;
 VAR_5.denominator = VAR_6;
 return VAR_5;
}
