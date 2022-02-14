
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct tg3 {TYPE_1__ timer; scalar_t__ timer_offset; int timer_multiplier; int timer_counter; int asf_multiplier; int asf_counter; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct tg3 *VAR_1)
{
 VAR_1->asf_counter = VAR_1->asf_multiplier;
 VAR_1->timer_counter = VAR_1->timer_multiplier;

 VAR_1->timer.expires = VAR_0 + VAR_1->timer_offset;
 FUNC_0(&VAR_1->timer);
}
