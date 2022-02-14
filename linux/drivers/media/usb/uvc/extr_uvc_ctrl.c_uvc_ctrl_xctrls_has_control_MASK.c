
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_ext_control {scalar_t__ id; } ;



__attribute__((used)) static bool FUNC_0(const struct v4l2_ext_control *VAR_0,
     unsigned int VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_0[VAR_3].id == VAR_2)
   return 1;
 }

 return 0;
}
