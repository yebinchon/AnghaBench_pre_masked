
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_ana_group {size_t grpid; TYPE_1__* port; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {int * ana_state; struct nvmet_ana_group ana_default_group; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvmet_ana_group*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 struct nvmet_ana_group* FUNC_3 (struct config_item*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct config_item *VAR_3)
{
 struct nvmet_ana_group *VAR_4 = FUNC_3(VAR_3);

 if (VAR_4 == &VAR_4->port->ana_default_group)
  return;

 FUNC_0(&VAR_2);
 VAR_4->port->ana_state[VAR_4->grpid] = VAR_0;
 VAR_1[VAR_4->grpid]--;
 FUNC_4(&VAR_2);

 FUNC_2(VAR_4->port);
 FUNC_1(VAR_4);
}
