
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct display_timings {int dummy; } ;
struct display_timing {int dummy; } ;


 int VAR_0 ;
 struct display_timing* FUNC_0 (struct display_timings const*,unsigned int) ;
 int FUNC_1 (struct display_timing*,struct videomode*) ;

int FUNC_2(const struct display_timings *VAR_1,
     struct videomode *VAR_2, unsigned int VAR_3)
{
 struct display_timing *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_2);

 return 0;
}
