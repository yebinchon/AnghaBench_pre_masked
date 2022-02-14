
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int a_wait_bcon_timeout; } ;
struct mv_otg {int wq_lock; TYPE_2__* pdev; TYPE_1__ otg_ctrl; } ;
struct TYPE_6__ {int * timer; } ;
struct TYPE_5__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct mv_otg* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct mv_otg*,int ) ;
 struct mv_otg* VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct mv_otg *VAR_4 = FUNC_1(VAR_4, VAR_3,
       VAR_2.timer[VAR_0]);

 VAR_4->otg_ctrl.a_wait_bcon_timeout = 1;

 FUNC_0(&VAR_4->pdev->dev, "B Device No Response!\n");

 if (FUNC_3(&VAR_4->wq_lock)) {
  FUNC_2(VAR_4, 0);
  FUNC_4(&VAR_4->wq_lock);
 }
}
