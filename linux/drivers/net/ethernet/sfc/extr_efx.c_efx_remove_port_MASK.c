
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; int net_dev; } ;
struct TYPE_2__ {int (* remove_port ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_1 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, VAR_1->net_dev, "destroying port\n");

 VAR_1->type->remove_port(VAR_1);
}
