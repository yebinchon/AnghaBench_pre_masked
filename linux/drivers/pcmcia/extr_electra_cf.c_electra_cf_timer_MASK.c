
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct electra_cf_socket {int present; int timer; scalar_t__ active; int socket; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct electra_cf_socket* VAR_2 ;
 int FUNC_0 (struct electra_cf_socket*) ;
 struct electra_cf_socket* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_5)
{
 struct electra_cf_socket *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 int VAR_7 = FUNC_0(VAR_6);

 if (VAR_7 != VAR_6->present) {
  VAR_6->present = VAR_7;
  FUNC_3(&VAR_6->socket, VAR_1);
 }

 if (VAR_6->active)
  FUNC_2(&VAR_6->timer, VAR_3 + VAR_0);
}
