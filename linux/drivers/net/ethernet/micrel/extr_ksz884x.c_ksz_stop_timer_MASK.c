
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_timer_info {int timer; scalar_t__ max; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ksz_timer_info *VAR_0)
{
 if (VAR_0->max) {
  VAR_0->max = 0;
  FUNC_0(&VAR_0->timer);
 }
}
