
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_port {int dummy; } ;
struct isci_phy {int bcn_received_while_port_unassigned; struct isci_port* owning_port; } ;


 int FUNC_0 (struct isci_port*,struct isci_phy*) ;

void FUNC_1(
 struct isci_phy *VAR_0,
 struct isci_port *VAR_1)
{
 VAR_0->owning_port = VAR_1;

 if (VAR_0->bcn_received_while_port_unassigned) {
  VAR_0->bcn_received_while_port_unassigned = 0;
  FUNC_0(VAR_0->owning_port, VAR_0);
 }
}
