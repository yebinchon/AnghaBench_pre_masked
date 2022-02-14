
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {scalar_t__ expires; } ;
struct TYPE_3__ {struct timer_list* timer; } ;
struct mv_otg {TYPE_2__* pdev; TYPE_1__ otg_ctrl; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct timer_list*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct timer_list*) ;

__attribute__((used)) static int FUNC_3(struct mv_otg *VAR_4, unsigned int VAR_5,
       unsigned long VAR_6)
{
 struct timer_list *VAR_7;

 if (VAR_5 >= VAR_2)
  return -VAR_1;

 VAR_7 = &VAR_4->otg_ctrl.timer[VAR_5];
 if (FUNC_2(VAR_7)) {
  FUNC_1(&VAR_4->pdev->dev, "Timer%d is already running\n", VAR_5);
  return -VAR_0;
 }

 VAR_7->expires = VAR_3 + VAR_6;
 FUNC_0(VAR_7);

 return 0;
}
