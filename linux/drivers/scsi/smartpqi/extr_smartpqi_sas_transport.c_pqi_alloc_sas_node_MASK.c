
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_sas_node {int port_list_head; struct device* parent_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pqi_sas_node* FUNC_1 (int,int ) ;

__attribute__((used)) static struct pqi_sas_node *FUNC_2(struct device *VAR_1)
{
 struct pqi_sas_node *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  VAR_2->parent_dev = VAR_1;
  FUNC_0(&VAR_2->port_list_head);
 }

 return VAR_2;
}
