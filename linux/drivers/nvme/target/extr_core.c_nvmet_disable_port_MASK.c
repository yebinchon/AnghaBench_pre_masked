
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t trtype; } ;
struct nvmet_port {int enabled; TYPE_1__ disc_addr; int * tr_ops; } ;
struct nvmet_fabrics_ops {int owner; int (* remove_port ) (struct nvmet_port*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct nvmet_fabrics_ops** VAR_1 ;
 int FUNC_2 (struct nvmet_port*) ;

void FUNC_3(struct nvmet_port *VAR_2)
{
 const struct nvmet_fabrics_ops *VAR_3;

 FUNC_0(&VAR_0);

 VAR_2->enabled = 0;
 VAR_2->tr_ops = ((void*)0);

 VAR_3 = VAR_1[VAR_2->disc_addr.trtype];
 VAR_3->remove_port(VAR_2);
 FUNC_1(VAR_3->owner);
}
