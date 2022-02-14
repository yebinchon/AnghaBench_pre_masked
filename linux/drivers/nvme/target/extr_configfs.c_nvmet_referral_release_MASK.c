
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_port {int dummy; } ;
struct config_item {TYPE_1__* ci_parent; } ;
struct TYPE_2__ {struct config_item* ci_parent; } ;


 int FUNC_0 (struct nvmet_port*) ;
 int FUNC_1 (struct nvmet_port*,struct nvmet_port*) ;
 struct nvmet_port* FUNC_2 (struct config_item*) ;

__attribute__((used)) static void FUNC_3(struct config_item *VAR_0)
{
 struct nvmet_port *VAR_1 = FUNC_2(VAR_0->ci_parent->ci_parent);
 struct nvmet_port *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_2);
}
