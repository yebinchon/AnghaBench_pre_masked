
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct ksz_timer_info {int max; TYPE_1__ timer; scalar_t__ cnt; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ksz_timer_info *VAR_1, int VAR_2)
{
 VAR_1->cnt = 0;
 VAR_1->timer.expires = VAR_0 + VAR_2;
 FUNC_0(&VAR_1->timer);


 VAR_1->max = -1;
}
