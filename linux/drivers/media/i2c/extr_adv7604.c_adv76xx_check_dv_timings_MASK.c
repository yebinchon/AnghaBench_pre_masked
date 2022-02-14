
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_dv_timings {int dummy; } ;
struct TYPE_4__ {scalar_t__ width; } ;
struct TYPE_5__ {TYPE_1__ bt; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_dv_timings const*,TYPE_2__*,int ,int) ;

__attribute__((used)) static bool FUNC_1(const struct v4l2_dv_timings *VAR_1, void *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].bt.width; VAR_3++)
  if (FUNC_0(VAR_1, VAR_0 + VAR_3, 0, 0))
   return 0;
 return 1;
}
