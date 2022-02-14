
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int stats_buffer; TYPE_1__* phy_op; } ;
struct TYPE_2__ {int (* remove ) (struct ef4_nic*) ;} ;


 int FUNC_0 (struct ef4_nic*,int *) ;
 int FUNC_1 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_2(struct ef4_nic *VAR_0)
{
 VAR_0->phy_op->remove(VAR_0);
 FUNC_0(VAR_0, &VAR_0->stats_buffer);
}
