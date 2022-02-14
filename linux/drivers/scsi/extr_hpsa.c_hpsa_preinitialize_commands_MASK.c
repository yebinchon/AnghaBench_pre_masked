
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int nr_cmds; struct CommandList* cmd_pool; } ;
struct CommandList {int refcount; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ctlr_info*,int,struct CommandList*) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_cmds; VAR_1++) {
  struct CommandList *VAR_2 = VAR_0->cmd_pool + VAR_1;

  FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_0(&VAR_2->refcount, 0);
 }
}
