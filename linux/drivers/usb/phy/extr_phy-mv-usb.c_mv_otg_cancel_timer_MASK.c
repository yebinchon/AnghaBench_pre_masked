
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {struct timer_list* timer; } ;
struct mv_otg {TYPE_1__ otg_ctrl; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct timer_list*) ;
 scalar_t__ FUNC_1 (struct timer_list*) ;

__attribute__((used)) static int FUNC_2(struct mv_otg *VAR_2, unsigned int VAR_3)
{
 struct timer_list *VAR_4;

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 VAR_4 = &VAR_2->otg_ctrl.timer[VAR_3];

 if (FUNC_1(VAR_4))
  FUNC_0(VAR_4);

 return 0;
}
