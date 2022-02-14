
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sci_sas_address {int dummy; } ;
struct sci_port_configuration_agent {TYPE_1__* phy_valid_port_range; } ;
struct isci_host {int * phys; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_2__ {size_t min_index; size_t max_index; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,struct sci_sas_address*) ;
 int FUNC_1 (struct isci_host*,struct sci_port_configuration_agent*) ;
 scalar_t__ FUNC_2 (struct sci_sas_address,struct sci_sas_address) ;

__attribute__((used)) static enum sci_status
FUNC_3(struct isci_host *VAR_1,
           struct sci_port_configuration_agent *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 struct sci_sas_address VAR_5;
 struct sci_sas_address VAR_6;

 VAR_3 = 0;

 while (VAR_3 < VAR_0) {
  VAR_4 = VAR_3;


  FUNC_0(&VAR_1->phys[VAR_3],
         &VAR_5);

  while (++VAR_3 < VAR_0) {
   FUNC_0(&VAR_1->phys[VAR_3],
           &VAR_6);


   if (FUNC_2(VAR_5, VAR_6) == 0) {
    VAR_2->phy_valid_port_range[VAR_3].min_index = VAR_4;
    VAR_2->phy_valid_port_range[VAR_3].max_index = VAR_3;
   } else {
    VAR_2->phy_valid_port_range[VAR_3].min_index = VAR_3;
    VAR_2->phy_valid_port_range[VAR_3].max_index = VAR_3;
    break;
   }
  }
 }

 return FUNC_1(VAR_1, VAR_2);
}
