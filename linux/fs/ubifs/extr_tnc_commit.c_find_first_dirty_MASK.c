
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {scalar_t__ level; int child_cnt; struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {struct ubifs_znode* znode; } ;


 scalar_t__ FUNC_0 (struct ubifs_znode*) ;

__attribute__((used)) static struct ubifs_znode *FUNC_1(struct ubifs_znode *VAR_0)
{
 int VAR_1, VAR_2;

 if (!VAR_0)
  return ((void*)0);

 while (1) {
  if (VAR_0->level == 0) {
   if (FUNC_0(VAR_0))
    return VAR_0;
   return ((void*)0);
  }
  VAR_2 = 0;
  for (VAR_1 = 0; VAR_1 < VAR_0->child_cnt; VAR_1++) {
   struct ubifs_zbranch *VAR_3 = &VAR_0->zbranch[VAR_1];

   if (VAR_3->znode && FUNC_0(VAR_3->znode)) {
    VAR_0 = VAR_3->znode;
    VAR_2 = 1;
    break;
   }
  }
  if (!VAR_2) {
   if (FUNC_0(VAR_0))
    return VAR_0;
   return ((void*)0);
  }
 }
}
