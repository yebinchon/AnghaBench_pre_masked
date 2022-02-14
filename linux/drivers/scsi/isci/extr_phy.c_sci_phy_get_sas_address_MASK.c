
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sci_sas_address {void* low; void* high; } ;
struct isci_phy {TYPE_1__* link_layer_registers; } ;
struct TYPE_2__ {int source_sas_address_low; int source_sas_address_high; } ;


 void* FUNC_0 (int *) ;

void FUNC_1(struct isci_phy *VAR_0, struct sci_sas_address *VAR_1)
{
 VAR_1->high = FUNC_0(&VAR_0->link_layer_registers->source_sas_address_high);
 VAR_1->low = FUNC_0(&VAR_0->link_layer_registers->source_sas_address_low);
}
