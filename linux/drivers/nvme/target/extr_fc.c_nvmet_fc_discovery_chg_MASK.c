
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_port {struct nvmet_fc_port_entry* priv; } ;
struct nvmet_fc_tgtport {int fc_target_port; TYPE_1__* ops; } ;
struct nvmet_fc_port_entry {struct nvmet_fc_tgtport* tgtport; } ;
struct TYPE_2__ {int (* discovery_event ) (int *) ;} ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct nvmet_port *VAR_0)
{
 struct nvmet_fc_port_entry *VAR_1 = VAR_0->priv;
 struct nvmet_fc_tgtport *VAR_2 = VAR_1->tgtport;

 if (VAR_2 && VAR_2->ops->discovery_event)
  VAR_2->ops->discovery_event(&VAR_2->fc_target_port);
}
