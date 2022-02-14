
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct most_dev {TYPE_1__ link_stat_timer; int poll_work_obj; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct most_dev* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct most_dev* VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct most_dev *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);

 FUNC_2(&VAR_5->poll_work_obj);
 VAR_5->link_stat_timer.expires = VAR_1 + (2 * VAR_0);
 FUNC_0(&VAR_5->link_stat_timer);
}
