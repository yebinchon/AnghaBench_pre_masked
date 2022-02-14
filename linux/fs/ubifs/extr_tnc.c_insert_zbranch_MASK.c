
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_znode {int child_cnt; int alt; struct ubifs_zbranch* zbranch; scalar_t__ level; } ;
struct ubifs_zbranch {TYPE_1__* znode; } ;
struct ubifs_info {int dummy; } ;
struct TYPE_2__ {int iip; } ;


 int FUNC_0 (struct ubifs_info*,int ) ;
 int FUNC_1 (struct ubifs_znode*) ;

__attribute__((used)) static void FUNC_2(struct ubifs_info *VAR_0, struct ubifs_znode *VAR_1,
      const struct ubifs_zbranch *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, FUNC_1(VAR_1));

 if (VAR_1->level) {
  for (VAR_4 = VAR_1->child_cnt; VAR_4 > VAR_3; VAR_4--) {
   VAR_1->zbranch[VAR_4] = VAR_1->zbranch[VAR_4 - 1];
   if (VAR_1->zbranch[VAR_4].znode)
    VAR_1->zbranch[VAR_4].znode->iip = VAR_4;
  }
  if (VAR_2->znode)
   VAR_2->znode->iip = VAR_3;
 } else
  for (VAR_4 = VAR_1->child_cnt; VAR_4 > VAR_3; VAR_4--)
   VAR_1->zbranch[VAR_4] = VAR_1->zbranch[VAR_4 - 1];

 VAR_1->zbranch[VAR_3] = *VAR_2;
 VAR_1->child_cnt += 1;
 if (VAR_3 == 0)
  VAR_1->alt = 1;
}
