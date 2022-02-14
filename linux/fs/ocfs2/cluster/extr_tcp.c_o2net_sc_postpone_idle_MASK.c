
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct o2net_sock_container {int sc_idle_timeout; TYPE_1__* sc_node; } ;
struct o2net_node {int nn_timeout; int nn_still_up; } ;
struct TYPE_2__ {int nd_num; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct o2net_node* FUNC_3 (int ) ;
 int FUNC_4 (struct o2net_node*) ;
 int FUNC_5 (struct o2net_sock_container*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct o2net_sock_container *VAR_0)
{
 struct o2net_node *VAR_1 = FUNC_3(VAR_0->sc_node->nd_num);


 if (FUNC_0(&VAR_1->nn_timeout)) {
  FUNC_6(FUNC_4(VAR_1));
  FUNC_2(&VAR_1->nn_still_up);
  FUNC_1(&VAR_1->nn_timeout, 0);
 }


 if (FUNC_7(&VAR_0->sc_idle_timeout))
  FUNC_5(VAR_0);
}
