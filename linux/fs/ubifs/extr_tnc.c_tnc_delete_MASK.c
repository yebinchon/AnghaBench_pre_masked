
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_znode {scalar_t__ level; int child_cnt; int iip; int flags; scalar_t__ cnext; struct ubifs_znode* parent; struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {int len; int offs; int lnum; TYPE_1__* znode; int key; } ;
struct TYPE_4__ {struct ubifs_znode* znode; int len; int offs; int lnum; } ;
struct ubifs_info {int fanout; int clean_zn_cnt; int dirty_zn_cnt; TYPE_2__ zroot; } ;
struct TYPE_3__ {int iip; } ;


 scalar_t__ FUNC_0 (struct ubifs_znode*) ;
 int VAR_0 ;
 int FUNC_1 (struct ubifs_znode*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 struct ubifs_znode* FUNC_6 (struct ubifs_info*,struct ubifs_zbranch*) ;
 struct ubifs_znode* FUNC_7 (struct ubifs_info*,struct ubifs_znode*,int ) ;
 int FUNC_8 (struct ubifs_info*,int ,int ) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_10 (struct ubifs_znode*) ;
 int FUNC_11 (struct ubifs_zbranch*) ;
 int FUNC_12 (struct ubifs_info*,int ,int ) ;
 int FUNC_13 (struct ubifs_info*,int) ;
 int VAR_1 ;
 int FUNC_14 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_15 (struct ubifs_znode*) ;
 int FUNC_16 (struct ubifs_znode*) ;

__attribute__((used)) static int FUNC_17(struct ubifs_info *VAR_2, struct ubifs_znode *VAR_3, int VAR_4)
{
 struct ubifs_zbranch *VAR_5;
 struct ubifs_znode *VAR_6;
 int VAR_7, VAR_8;


 FUNC_13(VAR_2, VAR_3->level == 0);
 FUNC_13(VAR_2, VAR_4 >= 0 && VAR_4 < VAR_2->fanout);
 FUNC_5(&VAR_3->zbranch[VAR_4].key, "deleting key ");

 VAR_5 = &VAR_3->zbranch[VAR_4];
 FUNC_11(VAR_5);

 VAR_8 = FUNC_12(VAR_2, VAR_5->lnum, VAR_5->len);
 if (VAR_8) {
  FUNC_14(VAR_2, VAR_3);
  return VAR_8;
 }


 for (VAR_7 = VAR_4; VAR_7 < VAR_3->child_cnt - 1; VAR_7++)
  VAR_3->zbranch[VAR_7] = VAR_3->zbranch[VAR_7 + 1];
 VAR_3->child_cnt -= 1;

 if (VAR_3->child_cnt > 0)
  return 0;






 do {
  FUNC_13(VAR_2, !FUNC_16(VAR_3));
  FUNC_13(VAR_2, FUNC_15(VAR_3));

  VAR_6 = VAR_3->parent;
  VAR_4 = VAR_3->iip;

  FUNC_3(&VAR_2->dirty_zn_cnt);

  VAR_8 = FUNC_9(VAR_2, VAR_3);
  if (VAR_8)
   return VAR_8;

  if (VAR_3->cnext) {
   FUNC_2(VAR_0, &VAR_3->flags);
   FUNC_4(&VAR_2->clean_zn_cnt);
   FUNC_4(&VAR_1);
  } else
   FUNC_10(VAR_3);
  VAR_3 = VAR_6;
 } while (VAR_3->child_cnt == 1);


 VAR_3->child_cnt -= 1;
 FUNC_13(VAR_2, VAR_3->level != 0);
 for (VAR_7 = VAR_4; VAR_7 < VAR_3->child_cnt; VAR_7++) {
  VAR_3->zbranch[VAR_7] = VAR_3->zbranch[VAR_7 + 1];
  if (VAR_3->zbranch[VAR_7].znode)
   VAR_3->zbranch[VAR_7].znode->iip = VAR_7;
 }





 if (!VAR_3->parent) {
  while (VAR_3->child_cnt == 1 && VAR_3->level != 0) {
   VAR_6 = VAR_3;
   VAR_5 = &VAR_3->zbranch[0];
   VAR_3 = FUNC_7(VAR_2, VAR_3, 0);
   if (FUNC_0(VAR_3))
    return FUNC_1(VAR_3);
   VAR_3 = FUNC_6(VAR_2, VAR_5);
   if (FUNC_0(VAR_3))
    return FUNC_1(VAR_3);
   VAR_3->parent = ((void*)0);
   VAR_3->iip = 0;
   if (VAR_2->zroot.len) {
    VAR_8 = FUNC_8(VAR_2, VAR_2->zroot.lnum,
           VAR_2->zroot.offs);
    if (VAR_8)
     return VAR_8;
   }
   VAR_2->zroot.lnum = VAR_5->lnum;
   VAR_2->zroot.offs = VAR_5->offs;
   VAR_2->zroot.len = VAR_5->len;
   VAR_2->zroot.znode = VAR_3;
   FUNC_13(VAR_2, !FUNC_16(VAR_6));
   FUNC_13(VAR_2, FUNC_15(VAR_6));
   FUNC_3(&VAR_2->dirty_zn_cnt);

   if (VAR_6->cnext) {
    FUNC_2(VAR_0, &VAR_6->flags);
    FUNC_4(&VAR_2->clean_zn_cnt);
    FUNC_4(&VAR_1);
   } else
    FUNC_10(VAR_6);
  }
 }

 return 0;
}
