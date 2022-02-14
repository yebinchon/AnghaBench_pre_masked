
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_transport_qp {int client_ready; int link_work; TYPE_1__* transport; } ;
struct TYPE_2__ {scalar_t__ link_is_up; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct ntb_transport_qp *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->client_ready = 1;

 if (VAR_0->transport->link_is_up)
  FUNC_0(&VAR_0->link_work, 0);
}
