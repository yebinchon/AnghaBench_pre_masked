
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_dv_timings {int dummy; } ;
struct TYPE_3__ {int reg_value; struct v4l2_dv_timings format; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(u16 VAR_3, struct v4l2_dv_timings *VAR_4)
{
 int VAR_5 = (VAR_3 & VAR_1) >> 5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_2[VAR_6].reg_value == VAR_5) {
   *VAR_4 = VAR_2[VAR_6].format;
   return 0;
  }
 }

 return -VAR_0;
}
