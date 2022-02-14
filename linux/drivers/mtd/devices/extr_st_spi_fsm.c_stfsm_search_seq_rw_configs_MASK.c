
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stfsm {TYPE_1__* info; } ;
struct seq_rw_config {scalar_t__ cmd; int flags; } ;
struct TYPE_2__ {int flags; } ;



__attribute__((used)) static struct seq_rw_config *
FUNC_0(struct stfsm *VAR_0,
       struct seq_rw_config VAR_1[])
{
 struct seq_rw_config *VAR_2;
 int VAR_3 = VAR_0->info->flags;

 for (VAR_2 = VAR_1; VAR_2->cmd != 0; VAR_2++)
  if ((VAR_2->flags & VAR_3) == VAR_2->flags)
   return VAR_2;

 return ((void*)0);
}
