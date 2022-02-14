
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_device {int disco_list_node; int rphy; int state; } ;
struct asd_sas_port {int destroy_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct asd_sas_port*,struct domain_device*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct asd_sas_port *VAR_1, struct domain_device *VAR_2)
{
 if (!FUNC_7(VAR_0, &VAR_2->state) &&
     !FUNC_1(&VAR_2->disco_list_node)) {

  FUNC_0(&VAR_2->disco_list_node);
  FUNC_3(VAR_2->rphy);
  FUNC_5(VAR_1, VAR_2);
  return;
 }

 if (!FUNC_6(VAR_0, &VAR_2->state)) {
  FUNC_4(VAR_2->rphy);
  FUNC_2(&VAR_2->disco_list_node, &VAR_1->destroy_list);
 }
}
