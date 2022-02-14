
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_port {struct nvmet_fc_port_entry* priv; } ;
struct TYPE_2__ {int port_name; int node_name; } ;
struct nvmet_fc_tgtport {TYPE_1__ fc_target_port; struct nvmet_fc_port_entry* pe; } ;
struct nvmet_fc_port_entry {int pe_list; int port_name; int node_name; struct nvmet_port* port; struct nvmet_fc_tgtport* tgtport; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_tgtport *VAR_2,
   struct nvmet_fc_port_entry *VAR_3,
   struct nvmet_port *VAR_4)
{
 FUNC_2(&VAR_1);

 VAR_3->tgtport = VAR_2;
 VAR_2->pe = VAR_3;

 VAR_3->port = VAR_4;
 VAR_4->priv = VAR_3;

 VAR_3->node_name = VAR_2->fc_target_port.node_name;
 VAR_3->port_name = VAR_2->fc_target_port.port_name;
 FUNC_0(&VAR_3->pe_list);

 FUNC_1(&VAR_3->pe_list, &VAR_0);
}
