
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sas_port {int dummy; } ;
struct hpsa_sas_port {int port_list_entry; int sas_address; struct sas_port* port; struct hpsa_sas_node* parent_node; int phy_list_head; } ;
struct hpsa_sas_node {int port_list_head; int parent_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hpsa_sas_port*) ;
 struct hpsa_sas_port* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sas_port*) ;
 struct sas_port* FUNC_5 (int ) ;
 int FUNC_6 (struct sas_port*) ;

__attribute__((used)) static struct hpsa_sas_port
 *FUNC_7(struct hpsa_sas_node *VAR_1,
    u64 VAR_2)
{
 int VAR_3;
 struct hpsa_sas_port *VAR_4;
 struct sas_port *VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->phy_list_head);
 VAR_4->parent_node = VAR_1;

 VAR_5 = FUNC_5(VAR_1->parent_dev);
 if (!VAR_5)
  goto free_hpsa_port;

 VAR_3 = FUNC_4(VAR_5);
 if (VAR_3)
  goto free_sas_port;

 VAR_4->port = VAR_5;
 VAR_4->sas_address = VAR_2;
 FUNC_3(&VAR_4->port_list_entry,
   &VAR_1->port_list_head);

 return VAR_4;

free_sas_port:
 FUNC_6(VAR_5);
free_hpsa_port:
 FUNC_1(VAR_4);

 return ((void*)0);
}
