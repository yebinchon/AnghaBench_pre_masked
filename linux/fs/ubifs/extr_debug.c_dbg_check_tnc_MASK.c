
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubifs_znode {size_t iip; int child_cnt; scalar_t__ level; TYPE_2__* zbranch; TYPE_1__* parent; } ;
struct ubifs_zbranch {int znode; } ;
struct ubifs_info {int dirty_zn_cnt; int clean_zn_cnt; int replaying; struct ubifs_zbranch zroot; int tnc_mutex; } ;
struct TYPE_5__ {int key; } ;
struct TYPE_4__ {struct ubifs_zbranch* zbranch; } ;


 int VAR_0 ;
 long FUNC_0 (int *) ;
 int FUNC_1 (struct ubifs_info*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_zbranch*) ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubifs_info*,int ) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_8 (struct ubifs_info*,char*,long,long) ;
 int FUNC_9 (struct ubifs_info*,char*) ;
 struct ubifs_znode* FUNC_10 (int ) ;
 struct ubifs_znode* FUNC_11 (struct ubifs_info*,struct ubifs_znode*) ;
 scalar_t__ FUNC_12 (struct ubifs_znode*) ;

int FUNC_13(struct ubifs_info *VAR_1, int VAR_2)
{
 struct ubifs_znode *VAR_3;
 long VAR_4 = 0, VAR_5 = 0;
 int VAR_6, VAR_7;

 if (!FUNC_3(VAR_1))
  return 0;

 FUNC_6(VAR_1, FUNC_5(&VAR_1->tnc_mutex));
 if (!VAR_1->zroot.znode)
  return 0;

 VAR_3 = FUNC_10(VAR_1->zroot.znode);
 while (1) {
  struct ubifs_znode *VAR_8;
  struct ubifs_zbranch *VAR_9;

  if (!VAR_3->parent)
   VAR_9 = &VAR_1->zroot;
  else
   VAR_9 = &VAR_3->parent->zbranch[VAR_3->iip];

  VAR_6 = FUNC_2(VAR_1, VAR_9);
  if (VAR_6)
   return VAR_6;

  if (VAR_2) {
   if (FUNC_12(VAR_3))
    VAR_5 += 1;
   else
    VAR_4 += 1;
  }

  VAR_8 = VAR_3;
  VAR_3 = FUNC_11(VAR_1, VAR_3);
  if (!VAR_3)
   break;





  VAR_7 = VAR_8->child_cnt - 1;
  if (VAR_8->level == 0 && VAR_3->level == 0 && !VAR_1->replaying &&
      !FUNC_4(VAR_1, &VAR_8->zbranch[VAR_7].key,
         &VAR_3->zbranch[0].key)) {
   VAR_6 = FUNC_1(VAR_1, &VAR_8->zbranch[VAR_7],
        &VAR_3->zbranch[0]);
   if (VAR_6 < 0)
    return VAR_6;
   if (VAR_6) {
    FUNC_9(VAR_1, "first znode");
    FUNC_7(VAR_1, VAR_8);
    FUNC_9(VAR_1, "second znode");
    FUNC_7(VAR_1, VAR_3);
    return -VAR_0;
   }
  }
 }

 if (VAR_2) {
  if (VAR_4 != FUNC_0(&VAR_1->clean_zn_cnt)) {
   FUNC_8(VAR_1, "incorrect clean_zn_cnt %ld, calculated %ld",
      FUNC_0(&VAR_1->clean_zn_cnt),
      VAR_4);
   return -VAR_0;
  }
  if (VAR_5 != FUNC_0(&VAR_1->dirty_zn_cnt)) {
   FUNC_8(VAR_1, "incorrect dirty_zn_cnt %ld, calculated %ld",
      FUNC_0(&VAR_1->dirty_zn_cnt),
      VAR_5);
   return -VAR_0;
  }
 }

 return 0;
}
