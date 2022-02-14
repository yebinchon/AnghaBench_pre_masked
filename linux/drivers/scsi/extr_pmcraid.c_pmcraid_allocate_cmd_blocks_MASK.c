
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_instance {int * cmd_list; int cmd_cachep; int cmd_pool_name; TYPE_1__* host; } ;
struct pmcraid_cmd {int dummy; } ;
struct TYPE_2__ {int unique_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ,int ,int *) ;
 int FUNC_2 (struct pmcraid_instance*,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct pmcraid_instance *VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_4->cmd_pool_name, "pmcraid_cmd_pool_%d",
  VAR_4->host->unique_id);


 VAR_4->cmd_cachep = FUNC_1(
     VAR_4->cmd_pool_name,
     sizeof(struct pmcraid_cmd), 0,
     VAR_3, ((void*)0));
 if (!VAR_4->cmd_cachep)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->cmd_list[VAR_5] =
   FUNC_0(VAR_4->cmd_cachep, VAR_1);
  if (!VAR_4->cmd_list[VAR_5]) {
   FUNC_2(VAR_4, VAR_5);
   return -VAR_0;
  }
 }
 return 0;
}
