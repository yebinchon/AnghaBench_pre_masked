
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int dummy; } ;
struct et8ek8_mode {scalar_t__ window_width; scalar_t__ window_height; struct v4l2_fract timeperframe; } ;
struct et8ek8_reglist {scalar_t__ type; struct et8ek8_mode mode; } ;
struct et8ek8_meta_reglist {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct v4l2_fract) ;
 struct et8ek8_reglist** FUNC_1 (struct et8ek8_meta_reglist*) ;

__attribute__((used)) static struct et8ek8_reglist *FUNC_2(
  struct et8ek8_meta_reglist *VAR_1,
  struct et8ek8_reglist *VAR_2,
  struct v4l2_fract *VAR_3)
{
 int VAR_4 = FUNC_0(*VAR_3);
 struct et8ek8_reglist **VAR_5 = FUNC_1(VAR_1);
 struct et8ek8_mode *VAR_6 = &VAR_2->mode;

 for (; *VAR_5; VAR_5++) {
  struct et8ek8_mode *VAR_7 = &(*VAR_5)->mode;

  if ((*VAR_5)->type != VAR_0)
   continue;

  if (VAR_7->window_width != VAR_6->window_width ||
      VAR_7->window_height != VAR_6->window_height)
   continue;

  if (FUNC_0(VAR_7->timeperframe) == VAR_4)
   return *VAR_5;
 }

 return ((void*)0);
}
