
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ window_width; scalar_t__ window_height; } ;
struct et8ek8_reglist {scalar_t__ type; TYPE_1__ mode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const void *VAR_1, const void *VAR_2)
{
 const struct et8ek8_reglist **VAR_3 = (const struct et8ek8_reglist **)VAR_1,
  **VAR_4 = (const struct et8ek8_reglist **)VAR_2;


 if ((*VAR_3)->type == VAR_0 &&
     (*VAR_4)->type != VAR_0)
  return -1;
 if ((*VAR_3)->type != VAR_0 &&
     (*VAR_4)->type == VAR_0)
  return 1;


 if ((*VAR_3)->mode.window_width > (*VAR_4)->mode.window_width)
  return -1;
 if ((*VAR_3)->mode.window_width < (*VAR_4)->mode.window_width)
  return 1;

 if ((*VAR_3)->mode.window_height > (*VAR_4)->mode.window_height)
  return -1;
 if ((*VAR_3)->mode.window_height < (*VAR_4)->mode.window_height)
  return 1;

 return 0;
}
