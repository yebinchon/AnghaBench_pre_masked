
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sci_port_configuration_agent {int phy_configured_mask; TYPE_1__* phy_valid_port_range; } ;
struct isci_port {int active_phy_mask; int physical_port_index; } ;
struct isci_phy {size_t phy_index; } ;
struct isci_host {struct isci_port* ports; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
typedef enum SCIC_SDS_APC_ACTIVITY { ____Placeholder_SCIC_SDS_APC_ACTIVITY } SCIC_SDS_APC_ACTIVITY ;
struct TYPE_2__ {size_t min_index; size_t max_index; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sci_port_configuration_agent*,int ) ;
 int FUNC_1 (struct isci_port*,struct isci_phy*) ;
 struct isci_port* FUNC_2 (struct isci_host*,struct isci_phy*) ;
 scalar_t__ FUNC_3 (struct isci_port*,size_t) ;

__attribute__((used)) static void FUNC_4(struct isci_host *VAR_2,
            struct sci_port_configuration_agent *VAR_3,
            struct isci_phy *VAR_4,
            bool VAR_5)
{
 u8 VAR_6;
 enum sci_status VAR_7;
 struct isci_port *VAR_8;
 enum SCIC_SDS_APC_ACTIVITY VAR_9 = 129;

 VAR_8 = FUNC_2(VAR_2, VAR_4);

 if (VAR_8) {
  if (FUNC_3(VAR_8, VAR_4->phy_index))
   VAR_9 = 130;
  else
   VAR_9 = 129;
 } else {






  for (VAR_6 = VAR_3->phy_valid_port_range[VAR_4->phy_index].min_index;
       VAR_6 <= VAR_3->phy_valid_port_range[VAR_4->phy_index].max_index;
       VAR_6++) {

   VAR_8 = &VAR_2->ports[VAR_6];


   if (FUNC_3(VAR_8, VAR_4->phy_index)) {




    if (VAR_8->active_phy_mask > (1 << VAR_4->phy_index)) {
     VAR_9 = 129;
     break;
    }





    if (VAR_8->physical_port_index == VAR_4->phy_index) {





     if (VAR_9 != 128) {
      VAR_9 = 130;
     }

     break;
    }





    if (VAR_8->active_phy_mask == 0) {
     VAR_9 = 128;
    }
   } else if (VAR_8->active_phy_mask != 0) {




    VAR_9 = 129;
   }
  }
 }
 if (
  (VAR_5 == 0)
  && (VAR_9 == 128)
  ) {
  VAR_9 = 130;
 }

 switch (VAR_9) {
 case 130:
  VAR_7 = FUNC_1(VAR_8, VAR_4);

  if (VAR_7 == VAR_1) {
   VAR_3->phy_configured_mask |= (1 << VAR_4->phy_index);
  }
  break;

 case 128:
  FUNC_0(VAR_3,
       VAR_0);
  break;

 case 129:
 default:

  break;
 }
}
