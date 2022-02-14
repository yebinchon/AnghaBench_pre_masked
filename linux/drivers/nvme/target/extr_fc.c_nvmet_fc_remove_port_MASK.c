
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_port {struct nvmet_fc_port_entry* priv; } ;
struct nvmet_fc_port_entry {int dummy; } ;


 int FUNC_0 (struct nvmet_fc_port_entry*) ;
 int FUNC_1 (struct nvmet_fc_port_entry*) ;

__attribute__((used)) static void
FUNC_2(struct nvmet_port *VAR_0)
{
 struct nvmet_fc_port_entry *VAR_1 = VAR_0->priv;

 FUNC_1(VAR_1);

 FUNC_0(VAR_1);
}
