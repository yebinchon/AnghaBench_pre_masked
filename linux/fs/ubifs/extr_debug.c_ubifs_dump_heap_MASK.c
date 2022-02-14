
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lpt_heap {int cnt; struct ubifs_lprops** arr; } ;
struct ubifs_lprops {int flags; int dirty; int free; int hpos; int lnum; } ;
struct ubifs_info {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,...) ;

void FUNC_1(struct ubifs_info *VAR_1, struct ubifs_lpt_heap *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0("(pid %d) start dumping heap cat %d (%d elements)\n",
        VAR_0->pid, VAR_3, VAR_2->cnt);
 for (VAR_4 = 0; VAR_4 < VAR_2->cnt; VAR_4++) {
  struct ubifs_lprops *VAR_5 = VAR_2->arr[VAR_4];

  FUNC_0("\t%d. LEB %d hpos %d free %d dirty %d flags %d\n",
         VAR_4, VAR_5->lnum, VAR_5->hpos, VAR_5->free,
         VAR_5->dirty, VAR_5->flags);
 }
 FUNC_0("(pid %d) finish dumping heap\n", VAR_0->pid);
}
