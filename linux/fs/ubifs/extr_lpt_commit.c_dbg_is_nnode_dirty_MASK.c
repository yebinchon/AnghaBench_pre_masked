
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {size_t iip; int flags; TYPE_1__* parent; } ;
struct ubifs_nbranch {int lnum; int offs; } ;
struct ubifs_info {int lpt_lnum; int lpt_offs; } ;
struct TYPE_2__ {struct ubifs_nbranch* nbranch; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct ubifs_nnode* FUNC_1 (struct ubifs_info*,int*) ;
 struct ubifs_nnode* FUNC_2 (struct ubifs_info*,struct ubifs_nnode*,int*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_1, int VAR_2, int VAR_3)
{
 struct ubifs_nnode *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_1(VAR_1, &VAR_5);
 for (; VAR_4; VAR_4 = FUNC_2(VAR_1, VAR_4, &VAR_5)) {
  struct ubifs_nbranch *VAR_6;

  FUNC_0();
  if (VAR_4->parent) {
   VAR_6 = &VAR_4->parent->nbranch[VAR_4->iip];
   if (VAR_6->lnum != VAR_2 || VAR_6->offs != VAR_3)
    continue;
   if (FUNC_3(VAR_0, &VAR_4->flags))
    return 1;
   return 0;
  } else {
   if (VAR_1->lpt_lnum != VAR_2 || VAR_1->lpt_offs != VAR_3)
    continue;
   if (FUNC_3(VAR_0, &VAR_4->flags))
    return 1;
   return 0;
  }
 }
 return 1;
}
