
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isci_port {int dummy; } ;
struct isci_phy {int bcn_received_while_port_unassigned; int sata_timer; int max_negotiated_speed; int * link_layer_registers; int protocol; int phy_index; struct isci_port* owning_port; int sm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;

void FUNC_2(struct isci_phy *VAR_5,
       struct isci_port *VAR_6, u8 VAR_7)
{
 FUNC_0(&VAR_5->sm, VAR_4, VAR_2);


 VAR_5->owning_port = VAR_6;
 VAR_5->phy_index = VAR_7;
 VAR_5->bcn_received_while_port_unassigned = 0;
 VAR_5->protocol = VAR_1;
 VAR_5->link_layer_registers = ((void*)0);
 VAR_5->max_negotiated_speed = VAR_0;


 FUNC_1(&VAR_5->sata_timer, VAR_3);
}
