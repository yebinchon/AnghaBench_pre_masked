
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvmet_ana_group {size_t grpid; TYPE_1__* port; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
typedef enum nvme_ana_state { ____Placeholder_nvme_ana_state } nvme_ana_state ;
struct TYPE_5__ {int state; char* name; } ;
struct TYPE_4__ {int* ana_state; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (char*,char*,...) ;
 struct nvmet_ana_group* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_1,
  char *VAR_2)
{
 struct nvmet_ana_group *VAR_3 = FUNC_2(VAR_1);
 enum nvme_ana_state VAR_4 = VAR_3->port->ana_state[VAR_3->grpid];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  if (VAR_4 != VAR_0[VAR_5].state)
   continue;
  return FUNC_1(VAR_2, "%s\n", VAR_0[VAR_5].name);
 }

 return FUNC_1(VAR_2, "\n");
}
