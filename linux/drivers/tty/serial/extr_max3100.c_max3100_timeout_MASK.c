
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct max3100_port {scalar_t__ poll_time; int timer; TYPE_1__ port; } ;


 struct max3100_port* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct max3100_port*) ;
 int FUNC_2 (int *,scalar_t__) ;
 struct max3100_port* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct max3100_port *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 if (VAR_4->port.state) {
  FUNC_1(VAR_4);
  FUNC_2(&VAR_4->timer, VAR_0 + VAR_4->poll_time);
 }
}
