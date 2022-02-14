
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvmet_ana_group {size_t grpid; TYPE_1__* port; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_5__ {int state; int name; } ;
struct TYPE_4__ {int * ana_state; } ;


 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 struct nvmet_ana_group* FUNC_5 (struct config_item*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct config_item *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct nvmet_ana_group *VAR_7 = FUNC_5(VAR_4);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  if (FUNC_4(VAR_5, VAR_3[VAR_8].name))
   goto found;
 }

 FUNC_3("Invalid value '%s' for ana_state\n", VAR_5);
 return -VAR_0;

found:
 FUNC_1(&VAR_2);
 VAR_7->port->ana_state[VAR_7->grpid] = VAR_3[VAR_8].state;
 VAR_1++;
 FUNC_6(&VAR_2);

 FUNC_2(VAR_7->port);
 return VAR_6;
}
