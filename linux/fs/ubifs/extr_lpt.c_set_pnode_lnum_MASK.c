
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_pnode {int num; TYPE_1__* lprops; } ;
struct ubifs_info {int main_first; int leb_cnt; } ;
struct TYPE_2__ {int lnum; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(const struct ubifs_info *VAR_2,
      struct ubifs_pnode *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = (VAR_3->num << VAR_1) + VAR_2->main_first;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_5 >= VAR_2->leb_cnt)
   return;
  VAR_3->lprops[VAR_4].lnum = VAR_5++;
 }
}
