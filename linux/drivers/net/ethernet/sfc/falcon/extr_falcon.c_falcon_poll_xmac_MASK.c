
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct falcon_nic_data {int xmac_poll_required; } ;
struct TYPE_2__ {int up; } ;
struct ef4_nic {TYPE_1__ link_state; struct falcon_nic_data* nic_data; } ;


 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*,int) ;

__attribute__((used)) static void FUNC_2(struct ef4_nic *VAR_0)
{
 struct falcon_nic_data *VAR_1 = VAR_0->nic_data;


 if (!VAR_0->link_state.up || !VAR_1->xmac_poll_required)
  return;

 VAR_1->xmac_poll_required = !FUNC_1(VAR_0, 1);
 FUNC_0(VAR_0);
}
