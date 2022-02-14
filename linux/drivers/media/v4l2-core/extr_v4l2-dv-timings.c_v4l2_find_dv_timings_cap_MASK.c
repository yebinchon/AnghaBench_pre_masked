
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_check_dv_timings_fnc ;
typedef int u32 ;
struct v4l2_dv_timings_cap {int dummy; } ;
struct TYPE_2__ {int width; int flags; } ;
struct v4l2_dv_timings {TYPE_1__ bt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct v4l2_dv_timings* VAR_1 ;
 scalar_t__ FUNC_1 (struct v4l2_dv_timings*,struct v4l2_dv_timings*,unsigned int,int) ;
 scalar_t__ FUNC_2 (struct v4l2_dv_timings*,struct v4l2_dv_timings_cap const*,int ,void*) ;

bool FUNC_3(struct v4l2_dv_timings *VAR_2,
         const struct v4l2_dv_timings_cap *VAR_3,
         unsigned VAR_4,
         v4l2_check_dv_timings_fnc VAR_5,
         void *VAR_6)
{
 int VAR_7;

 if (!FUNC_2(VAR_2, VAR_3, VAR_5, VAR_6))
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_1[VAR_7].bt.width; VAR_7++) {
  if (FUNC_2(VAR_1 + VAR_7, VAR_3,
       VAR_5, VAR_6) &&
      FUNC_1(VAR_2, VAR_1 + VAR_7,
       VAR_4, 0)) {
   u32 VAR_8 = VAR_2->bt.flags & VAR_0;

   *VAR_2 = VAR_1[VAR_7];
   if (FUNC_0(&VAR_2->bt))
    VAR_2->bt.flags |= VAR_8;

   return 1;
  }
 }
 return 0;
}
