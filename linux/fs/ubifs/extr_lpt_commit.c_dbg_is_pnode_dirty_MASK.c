
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_pnode {size_t iip; int flags; TYPE_1__* parent; } ;
struct ubifs_nbranch {int lnum; int offs; } ;
struct ubifs_info {int main_lebs; } ;
struct TYPE_2__ {struct ubifs_nbranch* nbranch; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct ubifs_pnode*) ;
 int FUNC_2 (struct ubifs_pnode*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct ubifs_pnode* FUNC_5 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_2->main_lebs, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  struct ubifs_pnode *VAR_7;
  struct ubifs_nbranch *VAR_8;

  FUNC_3();
  VAR_7 = FUNC_5(VAR_2, VAR_5);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);
  VAR_8 = &VAR_7->parent->nbranch[VAR_7->iip];
  if (VAR_8->lnum != VAR_3 || VAR_8->offs != VAR_4)
   continue;
  if (FUNC_4(VAR_0, &VAR_7->flags))
   return 1;
  return 0;
 }
 return 1;
}
