
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsa_sas_port {int dummy; } ;
struct hpsa_sas_phy {int dummy; } ;
struct hpsa_sas_node {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {struct hpsa_sas_node* sas_host; int sas_address; TYPE_1__* scsi_host; } ;
struct TYPE_2__ {struct device shost_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hpsa_sas_node* FUNC_0 (struct device*) ;
 struct hpsa_sas_phy* FUNC_1 (struct hpsa_sas_port*) ;
 struct hpsa_sas_port* FUNC_2 (struct hpsa_sas_node*,int ) ;
 int FUNC_3 (struct hpsa_sas_node*) ;
 int FUNC_4 (struct hpsa_sas_phy*) ;
 int FUNC_5 (struct hpsa_sas_port*) ;
 int FUNC_6 (struct hpsa_sas_phy*) ;

__attribute__((used)) static int FUNC_7(struct ctlr_info *VAR_2)
{
 int VAR_3;
 struct device *VAR_4;
 struct hpsa_sas_node *VAR_5;
 struct hpsa_sas_port *VAR_6;
 struct hpsa_sas_phy *VAR_7;

 VAR_4 = &VAR_2->scsi_host->shost_dev;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_5, VAR_2->sas_address);
 if (!VAR_6) {
  VAR_3 = -VAR_0;
  goto free_sas_node;
 }

 VAR_7 = FUNC_1(VAR_6);
 if (!VAR_7) {
  VAR_3 = -VAR_0;
  goto free_sas_port;
 }

 VAR_3 = FUNC_6(VAR_7);
 if (VAR_3)
  goto free_sas_phy;

 VAR_2->sas_host = VAR_5;

 return 0;

free_sas_phy:
 FUNC_4(VAR_7);
free_sas_port:
 FUNC_5(VAR_6);
free_sas_node:
 FUNC_3(VAR_5);

 return VAR_3;
}
