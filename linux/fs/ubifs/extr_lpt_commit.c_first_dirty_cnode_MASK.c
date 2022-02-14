
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {TYPE_1__* nbranch; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_cnode {scalar_t__ level; int flags; } ;
struct TYPE_2__ {struct ubifs_cnode* cnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ubifs_info const*,struct ubifs_nnode*) ;

__attribute__((used)) static struct ubifs_cnode *FUNC_2(const struct ubifs_info *VAR_2, struct ubifs_nnode *VAR_3)
{
 FUNC_1(VAR_2, VAR_3);
 while (1) {
  int VAR_4, VAR_5 = 0;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   struct ubifs_cnode *VAR_6;

   VAR_6 = VAR_3->nbranch[VAR_4].cnode;
   if (VAR_6 &&
       FUNC_0(VAR_0, &VAR_6->flags)) {
    if (VAR_6->level == 0)
     return VAR_6;
    VAR_3 = (struct ubifs_nnode *)VAR_6;
    VAR_5 = 1;
    break;
   }
  }
  if (!VAR_5)
   return (struct ubifs_cnode *)VAR_3;
 }
}
