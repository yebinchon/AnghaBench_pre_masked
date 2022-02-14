
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_port {struct nvmet_port* ana_state; int global_entry; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (struct nvmet_port*) ;
 int FUNC_1 (int *) ;
 struct nvmet_port* FUNC_2 (struct config_item*) ;

__attribute__((used)) static void FUNC_3(struct config_item *VAR_0)
{
 struct nvmet_port *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->global_entry);

 FUNC_0(VAR_1->ana_state);
 FUNC_0(VAR_1);
}
