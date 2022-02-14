
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {int num; int level; TYPE_1__* nbranch; } ;
struct ubifs_info {int lpt_hght; int leb_size; int pnode_sz; int nnode_sz; int lpt_first; int lpt_last; scalar_t__ big_lpt; } ;
struct TYPE_2__ {int lnum; int offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info const*,struct ubifs_nnode*,int) ;

__attribute__((used)) static int FUNC_1(const struct ubifs_info *VAR_2, struct ubifs_nnode *VAR_3,
     struct ubifs_nnode *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 if (VAR_2->big_lpt) {
  int VAR_9 = FUNC_0(VAR_2, VAR_4, VAR_5);

  if (VAR_3->num != VAR_9)
   return -VAR_0;
 }
 VAR_7 = VAR_4 ? VAR_4->level - 1 : VAR_2->lpt_hght;
 if (VAR_7 < 1)
  return -VAR_0;
 if (VAR_7 == 1)
  VAR_8 = VAR_2->leb_size - VAR_2->pnode_sz;
 else
  VAR_8 = VAR_2->leb_size - VAR_2->nnode_sz;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  int VAR_10 = VAR_3->nbranch[VAR_6].lnum;
  int VAR_11 = VAR_3->nbranch[VAR_6].offs;

  if (VAR_10 == 0) {
   if (VAR_11 != 0)
    return -VAR_0;
   continue;
  }
  if (VAR_10 < VAR_2->lpt_first || VAR_10 > VAR_2->lpt_last)
   return -VAR_0;
  if (VAR_11 < 0 || VAR_11 > VAR_8)
   return -VAR_0;
 }
 return 0;
}
