
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sci_sas_address {int dummy; } ;
struct sci_port_configuration_agent {TYPE_1__* phy_valid_port_range; } ;
struct isci_host {int * phys; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_2__ {int max_index; int min_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct sci_sas_address*) ;
 scalar_t__ FUNC_1 (struct sci_sas_address,struct sci_sas_address) ;

__attribute__((used)) static enum sci_status FUNC_2(
 struct isci_host *VAR_2,
 struct sci_port_configuration_agent *VAR_3)
{
 struct sci_sas_address VAR_4;
 struct sci_sas_address VAR_5;




 if (VAR_3->phy_valid_port_range[0].max_index != 0 ||
     VAR_3->phy_valid_port_range[1].max_index != 1 ||
     VAR_3->phy_valid_port_range[2].max_index != 2 ||
     VAR_3->phy_valid_port_range[3].max_index != 3)
  return VAR_0;




 if (VAR_3->phy_valid_port_range[0].min_index == 0 &&
     VAR_3->phy_valid_port_range[1].min_index == 0 &&
     VAR_3->phy_valid_port_range[2].min_index == 0 &&
     VAR_3->phy_valid_port_range[3].min_index == 0)
  return VAR_1;






 if (VAR_3->phy_valid_port_range[2].min_index == 1) {
  return VAR_0;
 }





 FUNC_0(&VAR_2->phys[0], &VAR_4);
 FUNC_0(&VAR_2->phys[3], &VAR_5);

 if (FUNC_1(VAR_4, VAR_5) == 0) {
  return VAR_0;
 }





 if (VAR_3->phy_valid_port_range[0].min_index == 0 &&
     VAR_3->phy_valid_port_range[1].min_index == 1) {
  FUNC_0(&VAR_2->phys[0], &VAR_4);
  FUNC_0(&VAR_2->phys[2], &VAR_5);

  if (FUNC_1(VAR_4, VAR_5) == 0) {
   return VAR_0;
  }
 }





 if (VAR_3->phy_valid_port_range[2].min_index == 2 &&
     VAR_3->phy_valid_port_range[3].min_index == 3) {
  FUNC_0(&VAR_2->phys[1], &VAR_4);
  FUNC_0(&VAR_2->phys[3], &VAR_5);

  if (FUNC_1(VAR_4, VAR_5) == 0) {
   return VAR_0;
  }
 }

 return VAR_1;
}
