
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_sas_port {int dummy; } ;
struct pqi_sas_phy {int dummy; } ;
struct pqi_sas_node {int dummy; } ;
struct pqi_ctrl_info {struct pqi_sas_node* sas_host; int sas_address; } ;
struct device {int dummy; } ;
struct Scsi_Host {struct device shost_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pqi_sas_node* FUNC_0 (struct device*) ;
 struct pqi_sas_phy* FUNC_1 (struct pqi_sas_port*) ;
 struct pqi_sas_port* FUNC_2 (struct pqi_sas_node*,int ,int *) ;
 int FUNC_3 (struct pqi_sas_node*) ;
 int FUNC_4 (struct pqi_sas_phy*) ;
 int FUNC_5 (struct pqi_sas_port*) ;
 int FUNC_6 (struct pqi_sas_phy*) ;

int FUNC_7(struct Scsi_Host *VAR_2, struct pqi_ctrl_info *VAR_3)
{
 int VAR_4;
 struct device *VAR_5;
 struct pqi_sas_node *VAR_6;
 struct pqi_sas_port *VAR_7;
 struct pqi_sas_phy *VAR_8;

 VAR_5 = &VAR_2->shost_dev;

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6,
  VAR_3->sas_address, ((void*)0));
 if (!VAR_7) {
  VAR_4 = -VAR_0;
  goto free_sas_node;
 }

 VAR_8 = FUNC_1(VAR_7);
 if (!VAR_8) {
  VAR_4 = -VAR_0;
  goto free_sas_port;
 }

 VAR_4 = FUNC_6(VAR_8);
 if (VAR_4)
  goto free_sas_phy;

 VAR_3->sas_host = VAR_6;

 return 0;

free_sas_phy:
 FUNC_4(VAR_8);
free_sas_port:
 FUNC_5(VAR_7);
free_sas_node:
 FUNC_3(VAR_6);

 return VAR_4;
}
