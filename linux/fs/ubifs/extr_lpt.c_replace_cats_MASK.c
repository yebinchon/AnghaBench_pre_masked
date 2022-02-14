
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_pnode {TYPE_1__* lprops; } ;
struct ubifs_info {int dummy; } ;
struct TYPE_3__ {int lnum; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_1, struct ubifs_pnode *VAR_2,
    struct ubifs_pnode *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_3->lprops[VAR_4].lnum)
   return;
  FUNC_0(VAR_1, &VAR_2->lprops[VAR_4],
      &VAR_3->lprops[VAR_4]);
 }
}
