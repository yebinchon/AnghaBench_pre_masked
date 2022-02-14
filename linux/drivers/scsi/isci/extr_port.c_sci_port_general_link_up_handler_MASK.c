
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sci_sas_address {scalar_t__ high; scalar_t__ low; } ;
struct sci_base_state_machine {scalar_t__ current_state_id; } ;
struct isci_port {scalar_t__ active_phy_mask; struct sci_base_state_machine sm; } ;
struct isci_phy {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isci_port*,int ) ;
 int FUNC_1 (struct isci_phy*,struct sci_sas_address*) ;
 int FUNC_2 (struct isci_port*,struct isci_phy*,int ) ;
 int FUNC_3 (struct isci_port*,struct sci_sas_address*) ;
 int FUNC_4 (struct isci_port*,struct isci_phy*) ;

__attribute__((used)) static void FUNC_5(struct isci_port *VAR_2,
          struct isci_phy *VAR_3,
          u8 VAR_4)
{
 struct sci_sas_address VAR_5;
 struct sci_sas_address VAR_6;

 FUNC_3(VAR_2, &VAR_5);
 FUNC_1(VAR_3, &VAR_6);






 if ((VAR_6.high == VAR_5.high &&
      VAR_6.low == VAR_5.low) ||
     VAR_2->active_phy_mask == 0) {
  struct sci_base_state_machine *VAR_7 = &VAR_2->sm;

  FUNC_2(VAR_2, VAR_3, VAR_4);
  if (VAR_7->current_state_id == VAR_1)
   FUNC_0(VAR_2, VAR_0);
 } else
  FUNC_4(VAR_2, VAR_3);
}
