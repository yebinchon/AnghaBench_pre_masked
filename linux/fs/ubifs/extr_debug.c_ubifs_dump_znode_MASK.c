
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_znode {size_t iip; int child_cnt; int level; struct ubifs_zbranch* zbranch; int flags; TYPE_1__* parent; } ;
struct ubifs_zbranch {int key; int len; int offs; int lnum; int znode; } ;
struct ubifs_info {int fanout; struct ubifs_zbranch zroot; } ;
struct TYPE_2__ {struct ubifs_zbranch* zbranch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info const*,int *,char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(const struct ubifs_info *VAR_2,
        const struct ubifs_znode *VAR_3)
{
 int VAR_4;
 const struct ubifs_zbranch *VAR_5;
 char VAR_6[VAR_0];

 FUNC_2(&VAR_1);
 if (VAR_3->parent)
  VAR_5 = &VAR_3->parent->zbranch[VAR_3->iip];
 else
  VAR_5 = &VAR_2->zroot;

 FUNC_1("znode %p, LEB %d:%d len %d parent %p iip %d level %d child_cnt %d flags %lx\n",
        VAR_3, VAR_5->lnum, VAR_5->offs, VAR_5->len, VAR_3->parent, VAR_3->iip,
        VAR_3->level, VAR_3->child_cnt, VAR_3->flags);

 if (VAR_3->child_cnt <= 0 || VAR_3->child_cnt > VAR_2->fanout) {
  FUNC_3(&VAR_1);
  return;
 }

 FUNC_1("zbranches:\n");
 for (VAR_4 = 0; VAR_4 < VAR_3->child_cnt; VAR_4++) {
  VAR_5 = &VAR_3->zbranch[VAR_4];
  if (VAR_3->level > 0)
   FUNC_1("\t%d: znode %p LEB %d:%d len %d key %s\n",
          VAR_4, VAR_5->znode, VAR_5->lnum, VAR_5->offs, VAR_5->len,
          FUNC_0(VAR_2, &VAR_5->key, VAR_6,
      VAR_0));
  else
   FUNC_1("\t%d: LNC %p LEB %d:%d len %d key %s\n",
          VAR_4, VAR_5->znode, VAR_5->lnum, VAR_5->offs, VAR_5->len,
          FUNC_0(VAR_2, &VAR_5->key, VAR_6,
      VAR_0));
 }
 FUNC_3(&VAR_1);
}
