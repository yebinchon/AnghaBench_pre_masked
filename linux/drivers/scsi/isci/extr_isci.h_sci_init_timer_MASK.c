
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_timer {int timer; scalar_t__ cancel; } ;


 int FUNC_0 (int *,void (*) (struct timer_list*),int ) ;

__attribute__((used)) static inline
void FUNC_1(struct sci_timer *VAR_0, void (*VAR_1)(struct timer_list *VAR_2))
{
 VAR_0->cancel = 0;
 FUNC_0(&VAR_0->timer, VAR_1, 0);
}
