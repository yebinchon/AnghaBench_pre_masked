
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smtcfb_info {TYPE_1__* fb; } ;
struct TYPE_2__ {int * screen_base; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct smtcfb_info *VAR_0)
{
 if (VAR_0 && VAR_0->fb->screen_base) {
  FUNC_0(VAR_0->fb->screen_base);
  VAR_0->fb->screen_base = ((void*)0);
 }
}
