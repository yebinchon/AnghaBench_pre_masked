
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lprops {int dummy; } ;
struct ubifs_lp_stats {int dummy; } ;
struct ubifs_info {int main_first; int leb_cnt; } ;
struct TYPE_2__ {int pid; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_lprops*) ;
 int FUNC_2 (struct ubifs_lp_stats*) ;
 int FUNC_3 (struct ubifs_info*,char*,int) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_lp_stats*) ;
 int FUNC_5 (struct ubifs_info*,int,struct ubifs_lprops*) ;

void FUNC_6(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3;
 struct ubifs_lprops VAR_4;
 struct ubifs_lp_stats VAR_5;

 FUNC_0("(pid %d) start dumping LEB properties\n", VAR_0->pid);
 FUNC_4(VAR_1, &VAR_5);
 FUNC_2(&VAR_5);

 for (VAR_2 = VAR_1->main_first; VAR_2 < VAR_1->leb_cnt; VAR_2++) {
  VAR_3 = FUNC_5(VAR_1, VAR_2, &VAR_4);
  if (VAR_3) {
   FUNC_3(VAR_1, "cannot read lprops for LEB %d", VAR_2);
   continue;
  }

  FUNC_1(VAR_1, &VAR_4);
 }
 FUNC_0("(pid %d) finish dumping LEB properties\n", VAR_0->pid);
}
