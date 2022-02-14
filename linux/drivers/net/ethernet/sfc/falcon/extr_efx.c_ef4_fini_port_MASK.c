
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int up; } ;
struct ef4_nic {int port_initialized; TYPE_2__ link_state; TYPE_1__* phy_op; int net_dev; } ;
struct TYPE_3__ {int (* fini ) (struct ef4_nic*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_2 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_3(struct ef4_nic *VAR_1)
{
 FUNC_1(VAR_1, VAR_0, VAR_1->net_dev, "shut down port\n");

 if (!VAR_1->port_initialized)
  return;

 VAR_1->phy_op->fini(VAR_1);
 VAR_1->port_initialized = 0;

 VAR_1->link_state.up = 0;
 FUNC_0(VAR_1);
}
