
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_check_dv_timings_fnc ;
typedef size_t u32 ;
struct TYPE_4__ {scalar_t__ width; } ;
struct TYPE_5__ {TYPE_1__ bt; } ;
struct v4l2_enum_dv_timings {scalar_t__ index; TYPE_2__ timings; int reserved; } ;
struct v4l2_dv_timings_cap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct v4l2_dv_timings_cap const*,int ,void*) ;

int FUNC_2(struct v4l2_enum_dv_timings *VAR_2,
        const struct v4l2_dv_timings_cap *VAR_3,
        v4l2_check_dv_timings_fnc VAR_4,
        void *VAR_5)
{
 u32 VAR_6, VAR_7;

 FUNC_0(VAR_2->reserved, 0, sizeof(VAR_2->reserved));
 for (VAR_6 = VAR_7 = 0; VAR_1[VAR_6].bt.width; VAR_6++) {
  if (FUNC_1(VAR_1 + VAR_6, VAR_3,
       VAR_4, VAR_5) &&
      VAR_7++ == VAR_2->index) {
   VAR_2->timings = VAR_1[VAR_6];
   return 0;
  }
 }
 return -VAR_0;
}
