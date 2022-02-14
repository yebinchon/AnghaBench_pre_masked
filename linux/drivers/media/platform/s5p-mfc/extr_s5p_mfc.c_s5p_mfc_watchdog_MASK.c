
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct s5p_mfc_dev {TYPE_1__ watchdog_timer; int watchdog_work; int watchdog_cnt; int hw_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct s5p_mfc_dev* VAR_2 ;
 struct s5p_mfc_dev* FUNC_3 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_5)
{
 struct s5p_mfc_dev *VAR_6 = FUNC_3(VAR_6, VAR_5, VAR_4);

 if (FUNC_7(0, &VAR_6->hw_lock))
  FUNC_1(&VAR_6->watchdog_cnt);
 if (FUNC_2(&VAR_6->watchdog_cnt) >= VAR_0) {





  FUNC_4("Time out during waiting for HW\n");
  FUNC_6(&VAR_6->watchdog_work);
 }
 VAR_6->watchdog_timer.expires = VAR_3 +
     FUNC_5(VAR_1);
 FUNC_0(&VAR_6->watchdog_timer);
}
