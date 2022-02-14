
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int nr_cmds; struct CommandList* cmd_pool; } ;
struct CommandList {int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 scalar_t__ FUNC_2 (struct CommandList*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_0)
{
 struct CommandList *VAR_1 = ((void*)0);
 int VAR_2, VAR_3;
 int VAR_4;

 do {
  VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_0->nr_cmds; VAR_2++) {
   VAR_1 = VAR_0->cmd_pool + VAR_2;
   VAR_4 = FUNC_0(&VAR_1->refcount);
   if (VAR_4 > 1)
    VAR_3 += FUNC_2(VAR_1);
   FUNC_1(VAR_0, VAR_1);
  }
  if (VAR_3 <= 0)
   break;
  FUNC_3(100);
 } while (1);
}
