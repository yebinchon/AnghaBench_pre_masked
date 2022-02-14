
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sci_phy_proto {int all; } ;
struct isci_phy {TYPE_1__* link_layer_registers; } ;
struct TYPE_2__ {int transmit_identification; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct isci_phy *VAR_0, struct sci_phy_proto *VAR_1)
{
 VAR_1->all = FUNC_0(&VAR_0->link_layer_registers->transmit_identification);
}
