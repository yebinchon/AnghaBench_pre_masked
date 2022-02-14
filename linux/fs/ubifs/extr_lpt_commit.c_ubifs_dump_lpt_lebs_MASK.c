
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int lpt_lebs; scalar_t__ lpt_first; } ;
struct TYPE_2__ {int pid; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct ubifs_info const*,scalar_t__) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(const struct ubifs_info *VAR_1)
{
 int VAR_2;

 FUNC_1("(pid %d) start dumping all LPT LEBs\n", VAR_0->pid);
 for (VAR_2 = 0; VAR_2 < VAR_1->lpt_lebs; VAR_2++)
  FUNC_0(VAR_1, VAR_2 + VAR_1->lpt_first);
 FUNC_1("(pid %d) finish dumping all LPT LEBs\n", VAR_0->pid);
}
