
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {TYPE_1__* nbranch; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_cnode {int iip; scalar_t__ level; int flags; struct ubifs_nnode* parent; } ;
struct TYPE_2__ {struct ubifs_cnode* cnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_cnode* FUNC_0 (struct ubifs_info const*,struct ubifs_nnode*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ubifs_info const*,struct ubifs_cnode*) ;

__attribute__((used)) static struct ubifs_cnode *FUNC_3(const struct ubifs_info *VAR_2, struct ubifs_cnode *VAR_3)
{
 struct ubifs_nnode *VAR_4;
 int VAR_5;

 FUNC_2(VAR_2, VAR_3);
 VAR_4 = VAR_3->parent;
 if (!VAR_4)
  return ((void*)0);
 for (VAR_5 = VAR_3->iip + 1; VAR_5 < VAR_1; VAR_5++) {
  VAR_3 = VAR_4->nbranch[VAR_5].cnode;
  if (VAR_3 && FUNC_1(VAR_0, &VAR_3->flags)) {
   if (VAR_3->level == 0)
    return VAR_3;

   return FUNC_0(VAR_2, (struct ubifs_nnode *)VAR_3);
  }
 }
 return (struct ubifs_cnode *)VAR_4;
}
