
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sci_sas_address {scalar_t__ low; scalar_t__ high; } ;
struct sci_port_configuration_agent {TYPE_3__* phy_valid_port_range; } ;
struct TYPE_5__ {TYPE_1__* ports; } ;
struct isci_host {int * phys; int * ports; TYPE_2__ oem_parameters; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_6__ {size_t min_index; size_t max_index; } ;
struct TYPE_4__ {int phy_mask; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,struct sci_sas_address*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct isci_host*,struct sci_port_configuration_agent*) ;
 scalar_t__ FUNC_3 (struct sci_sas_address,struct sci_sas_address) ;

__attribute__((used)) static enum sci_status
FUNC_4(struct isci_host *VAR_3,
           struct sci_port_configuration_agent *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 struct sci_sas_address VAR_7;
 struct sci_sas_address VAR_8;
 u8 VAR_9;
 u8 VAR_10;

 VAR_6 = 0;
 VAR_7.high = 0;
 VAR_7.low = 0;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_5 = VAR_3->oem_parameters.ports[VAR_9].phy_mask;

  if (!VAR_5)
   continue;



  if ((VAR_5 & ~VAR_6) == 0) {
   return VAR_0;
  }


  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if ((VAR_5 & (1 << VAR_10)) == 0)
    continue;
   FUNC_0(&VAR_3->phys[VAR_10],
           &VAR_7);





   VAR_4->phy_valid_port_range[VAR_10].min_index = VAR_9;
   VAR_4->phy_valid_port_range[VAR_10].max_index = VAR_10;

   if (VAR_10 != VAR_9) {
    return VAR_0;
   }

   break;
  }






  for (; VAR_10 < VAR_1; VAR_10++) {
   if ((VAR_5 & (1 << VAR_10)) == 0)
    continue;
   FUNC_0(&VAR_3->phys[VAR_10],
           &VAR_8);

   if (FUNC_3(VAR_7, VAR_8) != 0) {



    return VAR_0;
   }

   VAR_4->phy_valid_port_range[VAR_10].min_index = VAR_9;
   VAR_4->phy_valid_port_range[VAR_10].max_index = VAR_10;

   FUNC_1(&VAR_3->ports[VAR_9],
           &VAR_3->phys[VAR_10]);

   VAR_6 |= (1 << VAR_10);
  }

 }

 return FUNC_2(VAR_3, VAR_4);
}
