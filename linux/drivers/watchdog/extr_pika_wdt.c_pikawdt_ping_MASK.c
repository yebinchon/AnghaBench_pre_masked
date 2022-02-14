
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int timer; int open; int next_heartbeat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 if (FUNC_3(VAR_1, VAR_3.next_heartbeat) ||
   (!VAR_2 && !VAR_3.open)) {
  FUNC_1();
  FUNC_0(&VAR_3.timer, VAR_1 + VAR_0);
 } else
  FUNC_2("I will reset your machine !\n");
}
