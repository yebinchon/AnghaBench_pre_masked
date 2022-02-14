
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_rphy {int dummy; } ;
struct hpsa_scsi_dev_t {struct hpsa_sas_port* sas_port; int sas_address; } ;
struct hpsa_sas_port {struct sas_rphy* rphy; int port; } ;
struct hpsa_sas_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hpsa_sas_port* FUNC_0 (struct hpsa_sas_node*,int ) ;
 int FUNC_1 (struct hpsa_sas_port*) ;
 int FUNC_2 (struct hpsa_sas_port*,struct sas_rphy*) ;
 struct sas_rphy* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hpsa_sas_node *VAR_2,
    struct hpsa_scsi_dev_t *VAR_3)
{
 int VAR_4;
 struct hpsa_sas_port *VAR_5;
 struct sas_rphy *VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3->sas_address);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_5->port);
 if (!VAR_6) {
  VAR_4 = -VAR_0;
  goto free_sas_port;
 }

 VAR_5->rphy = VAR_6;
 VAR_3->sas_port = VAR_5;

 VAR_4 = FUNC_2(VAR_5, VAR_6);
 if (VAR_4)
  goto free_sas_port;

 return 0;

free_sas_port:
 FUNC_1(VAR_5);
 VAR_3->sas_port = ((void*)0);

 return VAR_4;
}
