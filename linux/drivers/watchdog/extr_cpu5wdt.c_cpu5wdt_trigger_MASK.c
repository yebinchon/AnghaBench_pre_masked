
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int stop; int timer; scalar_t__ queue; scalar_t__ running; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_8)
{
 if (VAR_7 > 2)
  FUNC_3("trigger at %i ticks\n", VAR_6);

 if (VAR_2.running)
  VAR_6--;

 FUNC_4(&VAR_3);

 FUNC_2(1, VAR_5 + VAR_1);


 if (VAR_2.queue && VAR_6)
  FUNC_1(&VAR_2.timer, VAR_4 + VAR_0);
 else {

  FUNC_0(&VAR_2.stop);
 }
 FUNC_5(&VAR_3);

}
