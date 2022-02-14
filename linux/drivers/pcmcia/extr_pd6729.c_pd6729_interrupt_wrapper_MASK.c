
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pd6729_socket {int poll_timer; } ;


 scalar_t__ VAR_0 ;
 struct pd6729_socket* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,void*) ;
 int VAR_2 ;
 struct pd6729_socket* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct pd6729_socket *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);

 FUNC_2(0, (void *)VAR_5);
 FUNC_1(&VAR_5->poll_timer, VAR_1 + VAR_0);
}
