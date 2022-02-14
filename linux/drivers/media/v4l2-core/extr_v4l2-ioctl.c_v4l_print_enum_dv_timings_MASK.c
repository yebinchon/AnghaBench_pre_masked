
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_enum_dv_timings {int timings; int index; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_enum_dv_timings *VAR_2 = VAR_0;

 FUNC_0("index=%u, ", VAR_2->index);
 FUNC_1(&VAR_2->timings, VAR_1);
}
