
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sas_port {int dummy; } ;
struct pqi_scsi_dev {int dummy; } ;
struct pqi_sas_port {int port_list_entry; struct pqi_scsi_dev* device; int sas_address; struct sas_port* port; struct pqi_sas_node* parent_node; int phy_list_head; } ;
struct pqi_sas_node {int port_list_head; int parent_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pqi_sas_port*) ;
 struct pqi_sas_port* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sas_port*) ;
 struct sas_port* FUNC_5 (int ) ;
 int FUNC_6 (struct sas_port*) ;

__attribute__((used)) static struct pqi_sas_port *FUNC_7(
 struct pqi_sas_node *VAR_1, u64 VAR_2,
 struct pqi_scsi_dev *VAR_3)
{
 int VAR_4;
 struct pqi_sas_port *VAR_5;
 struct sas_port *VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->phy_list_head);
 VAR_5->parent_node = VAR_1;

 VAR_6 = FUNC_5(VAR_1->parent_dev);
 if (!VAR_6)
  goto free_pqi_port;

 VAR_4 = FUNC_4(VAR_6);
 if (VAR_4)
  goto free_sas_port;

 VAR_5->port = VAR_6;
 VAR_5->sas_address = VAR_2;
 VAR_5->device = VAR_3;
 FUNC_3(&VAR_5->port_list_entry,
  &VAR_1->port_list_head);

 return VAR_5;

free_sas_port:
 FUNC_6(VAR_6);
free_pqi_port:
 FUNC_1(VAR_5);

 return ((void*)0);
}
