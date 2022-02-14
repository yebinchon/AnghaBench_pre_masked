
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_timer_info {int period; int timer; scalar_t__ max; } ;


 int FUNC_0 (int *,void (*) (struct timer_list*),int ) ;

__attribute__((used)) static void FUNC_1(struct ksz_timer_info *VAR_0, int VAR_1,
 void (*VAR_2)(struct timer_list *))
{
 VAR_0->max = 0;
 VAR_0->period = VAR_1;
 FUNC_0(&VAR_0->timer, VAR_2, 0);
}
