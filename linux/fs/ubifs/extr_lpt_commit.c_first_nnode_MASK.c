
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {TYPE_1__* nbranch; } ;
struct ubifs_info {int lpt_hght; struct ubifs_nnode* nroot; } ;
struct TYPE_2__ {struct ubifs_nnode* nnode; } ;


 int VAR_0 ;

__attribute__((used)) static struct ubifs_nnode *FUNC_0(struct ubifs_info *VAR_1, int *VAR_2)
{
 struct ubifs_nnode *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_1->nroot;
 *VAR_2 = 0;
 if (!VAR_3)
  return ((void*)0);
 for (VAR_4 = 1; VAR_4 < VAR_1->lpt_hght; VAR_4++) {
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_3->nbranch[VAR_5].nnode) {
    VAR_6 = 1;
    VAR_3 = VAR_3->nbranch[VAR_5].nnode;
    *VAR_2 = VAR_4;
    break;
   }
  }
  if (!VAR_6)
   break;
 }
 return VAR_3;
}
