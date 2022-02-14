
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct yenta_socket {TYPE_1__ poll_timer; } ;
struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct yenta_socket* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct yenta_socket* VAR_3 ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct yenta_socket *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);

 FUNC_2(0, (void *)VAR_5);
 VAR_5->poll_timer.expires = VAR_1 + VAR_0;
 FUNC_0(&VAR_5->poll_timer);
}
