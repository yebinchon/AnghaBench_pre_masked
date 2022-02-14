
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_dv_timings {int dummy; } ;
struct TYPE_3__ {int reg_value; int format; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (struct v4l2_dv_timings*,int *,int ,int) ;

__attribute__((used)) static u16 FUNC_2(struct v4l2_dv_timings *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (FUNC_1(VAR_2, &VAR_1[VAR_3].format, 0,
       0))
   return VAR_1[VAR_3].reg_value | VAR_0;
 }

 return 0x0;
}
