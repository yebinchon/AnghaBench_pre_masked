
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {int iip; TYPE_1__* nbranch; struct ubifs_nnode* parent; } ;
struct ubifs_info {int lpt_hght; } ;
struct TYPE_2__ {struct ubifs_nnode* nnode; } ;


 int VAR_0 ;

__attribute__((used)) static struct ubifs_nnode *FUNC_0(struct ubifs_info *VAR_1,
          struct ubifs_nnode *VAR_2, int *VAR_3)
{
 struct ubifs_nnode *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_2->parent;
 if (!VAR_4)
  return ((void*)0);
 if (VAR_2->iip == VAR_0 - 1) {
  *VAR_3 -= 1;
  return VAR_4;
 }
 for (VAR_5 = VAR_2->iip + 1; VAR_5 < VAR_0; VAR_5++) {
  VAR_2 = VAR_4->nbranch[VAR_5].nnode;
  if (VAR_2)
   break;
 }
 if (!VAR_2) {
  *VAR_3 -= 1;
  return VAR_4;
 }
 for (VAR_6 = *VAR_3 + 1; VAR_6 < VAR_1->lpt_hght; VAR_6++) {
  VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if (VAR_2->nbranch[VAR_7].nnode) {
    VAR_8 = 1;
    VAR_2 = VAR_2->nbranch[VAR_7].nnode;
    *VAR_3 = VAR_6;
    break;
   }
  }
  if (!VAR_8)
   break;
 }
 return VAR_2;
}
