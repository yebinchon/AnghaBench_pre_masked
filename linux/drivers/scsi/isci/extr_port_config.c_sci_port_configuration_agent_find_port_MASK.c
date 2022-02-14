
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sci_sas_address {int dummy; } ;
struct isci_port {int dummy; } ;
struct isci_phy {int dummy; } ;
struct isci_host {size_t logical_port_entries; struct isci_port* ports; } ;


 int FUNC_0 (struct isci_phy*,struct sci_sas_address*) ;
 int FUNC_1 (struct isci_phy*,struct sci_sas_address*) ;
 int FUNC_2 (struct isci_port*,struct sci_sas_address*) ;
 int FUNC_3 (struct isci_port*,struct sci_sas_address*) ;
 scalar_t__ FUNC_4 (struct sci_sas_address,struct sci_sas_address) ;

__attribute__((used)) static struct isci_port *FUNC_5(
 struct isci_host *VAR_0,
 struct isci_phy *VAR_1)
{
 u8 VAR_2;
 struct sci_sas_address VAR_3;
 struct sci_sas_address VAR_4;
 struct sci_sas_address VAR_5;
 struct sci_sas_address VAR_6;






 FUNC_1(VAR_1, &VAR_5);
 FUNC_0(VAR_1, &VAR_6);

 for (VAR_2 = 0; VAR_2 < VAR_0->logical_port_entries; VAR_2++) {
  struct isci_port *VAR_7 = &VAR_0->ports[VAR_2];

  FUNC_3(VAR_7, &VAR_3);
  FUNC_2(VAR_7, &VAR_4);

  if (FUNC_4(VAR_3, VAR_5) == 0 &&
      FUNC_4(VAR_4, VAR_6) == 0)
   return VAR_7;
 }

 return ((void*)0);
}
