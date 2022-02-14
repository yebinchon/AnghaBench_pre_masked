
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_port {struct isci_phy** phy_table; struct isci_host* owning_controller; } ;
struct isci_phy {size_t phy_index; } ;
struct isci_host {int * ports; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct isci_port* FUNC_0 (struct isci_phy*) ;
 int FUNC_1 (struct isci_phy*,int *) ;

__attribute__((used)) static enum sci_status FUNC_2(struct isci_port *VAR_3, struct isci_phy *VAR_4)
{

 if (VAR_3->phy_table[VAR_4->phy_index] == VAR_4 &&
     FUNC_0(VAR_4) == VAR_3) {
  struct isci_host *VAR_5 = VAR_3->owning_controller;


  FUNC_1(VAR_4, &VAR_5->ports[VAR_1]);
  VAR_3->phy_table[VAR_4->phy_index] = ((void*)0);
  return VAR_2;
 }

 return VAR_0;
}
