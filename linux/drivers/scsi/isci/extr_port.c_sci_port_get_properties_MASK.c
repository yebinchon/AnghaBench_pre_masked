
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sas_address; } ;
struct TYPE_4__ {int protocols; int sas_address; } ;
struct sci_port_properties {scalar_t__ index; TYPE_1__ remote; TYPE_2__ local; int phy_mask; } ;
struct isci_port {scalar_t__ logical_port_index; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isci_port*,int *) ;
 int FUNC_1 (struct isci_port*) ;
 int FUNC_2 (struct isci_port*,int *) ;
 int FUNC_3 (struct isci_port*,int *) ;

enum sci_status FUNC_4(struct isci_port *VAR_3,
      struct sci_port_properties *VAR_4)
{
 if (!VAR_3 || VAR_3->logical_port_index == VAR_0)
  return VAR_1;

 VAR_4->index = VAR_3->logical_port_index;
 VAR_4->phy_mask = FUNC_1(VAR_3);
 FUNC_3(VAR_3, &VAR_4->local.sas_address);
 FUNC_2(VAR_3, &VAR_4->local.protocols);
 FUNC_0(VAR_3, &VAR_4->remote.sas_address);

 return VAR_2;
}
