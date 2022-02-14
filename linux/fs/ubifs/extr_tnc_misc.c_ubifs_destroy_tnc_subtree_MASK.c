
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_znode {int child_cnt; scalar_t__ level; TYPE_1__* zbranch; } ;
struct ubifs_info {int dummy; } ;
struct TYPE_2__ {struct ubifs_znode* znode; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (struct ubifs_info const*,struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_3 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_4 (struct ubifs_info const*,struct ubifs_znode*) ;
 int FUNC_5 (struct ubifs_znode*) ;

long FUNC_6(const struct ubifs_info *VAR_0,
          struct ubifs_znode *VAR_1)
{
 struct ubifs_znode *VAR_2 = FUNC_3(VAR_1);
 long VAR_3 = 0;
 int VAR_4;

 FUNC_2(VAR_0, VAR_2);
 while (1) {
  for (VAR_4 = 0; VAR_4 < VAR_2->child_cnt; VAR_4++) {
   if (!VAR_2->zbranch[VAR_4].znode)
    continue;

   if (VAR_2->level > 0 &&
       !FUNC_5(VAR_2->zbranch[VAR_4].znode))
    VAR_3 += 1;

   FUNC_0();
   FUNC_1(VAR_2->zbranch[VAR_4].znode);
  }

  if (VAR_2 == VAR_1) {
   if (!FUNC_5(VAR_2))
    VAR_3 += 1;
   FUNC_1(VAR_2);
   return VAR_3;
  }

  VAR_2 = FUNC_4(VAR_0, VAR_2);
 }
}
