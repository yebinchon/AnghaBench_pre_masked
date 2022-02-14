
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_identify {void* target_port_protocols; void* initiator_port_protocols; int device_type; int sas_address; } ;
struct sas_phy {void* negotiated_linkrate; void* maximum_linkrate; void* minimum_linkrate; void* maximum_linkrate_hw; void* minimum_linkrate_hw; struct sas_identify identify; } ;
struct pqi_sas_port {int phy_list_head; int port; int sas_address; } ;
struct pqi_sas_phy {int added_to_port; int phy_list_entry; struct sas_phy* phy; struct pqi_sas_port* parent_port; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sas_identify*,int ,int) ;
 int FUNC_2 (struct sas_phy*) ;
 int FUNC_3 (int ,struct sas_phy*) ;

__attribute__((used)) static int FUNC_4(struct pqi_sas_phy *VAR_3)
{
 int VAR_4;
 struct pqi_sas_port *VAR_5;
 struct sas_phy *VAR_6;
 struct sas_identify *VAR_7;

 VAR_5 = VAR_3->parent_port;
 VAR_6 = VAR_3->phy;

 VAR_7 = &VAR_6->identify;
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->sas_address = VAR_5->sas_address;
 VAR_7->device_type = VAR_0;
 VAR_7->initiator_port_protocols = VAR_2;
 VAR_7->target_port_protocols = VAR_2;
 VAR_6->minimum_linkrate_hw = VAR_1;
 VAR_6->maximum_linkrate_hw = VAR_1;
 VAR_6->minimum_linkrate = VAR_1;
 VAR_6->maximum_linkrate = VAR_1;
 VAR_6->negotiated_linkrate = VAR_1;

 VAR_4 = FUNC_2(VAR_3->phy);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_5->port, VAR_3->phy);
 FUNC_0(&VAR_3->phy_list_entry,
  &VAR_5->phy_list_head);
 VAR_3->added_to_port = 1;

 return 0;
}
