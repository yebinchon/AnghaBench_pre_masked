
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int level; int iip; int child_cnt; struct ubifs_znode* parent; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_info const*,...) ;
 struct ubifs_znode* FUNC_1 (struct ubifs_znode*,int) ;
 scalar_t__ FUNC_2 (int) ;

struct ubifs_znode *FUNC_3(const struct ubifs_info *VAR_0,
           struct ubifs_znode *VAR_1,
           struct ubifs_znode *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 struct ubifs_znode *VAR_6;

 FUNC_0(VAR_0, VAR_1);

 if (FUNC_2(!VAR_2))
  return VAR_1;

 if (FUNC_2(VAR_2 == VAR_1)) {
  if (VAR_2->level == 0)
   return ((void*)0);
  return FUNC_1(VAR_1, 0);
 }

 VAR_3 = VAR_2->level;

 VAR_4 = VAR_2->iip;
 while (1) {
  FUNC_0(VAR_0, VAR_2->level <= VAR_1->level);





  while (VAR_2->parent != VAR_1 && VAR_4 >= VAR_2->parent->child_cnt) {
   VAR_2 = VAR_2->parent;
   VAR_4 = VAR_2->iip;
  }

  if (FUNC_2(VAR_2->parent == VAR_1 &&
        VAR_4 >= VAR_2->parent->child_cnt)) {

   VAR_3 -= 1;
   if (VAR_5 || VAR_3 < 0)






    return ((void*)0);

   VAR_5 = 1;
   VAR_4 = -1;
   VAR_2 = FUNC_1(VAR_1, 0);
   FUNC_0(VAR_0, VAR_2);
  }


  VAR_6 = FUNC_1(VAR_2->parent, VAR_4 + 1);
  if (!VAR_6) {

   VAR_4 = VAR_2->parent->child_cnt;
   continue;
  }


  while (VAR_6->level != VAR_3) {
   VAR_2 = VAR_6;
   VAR_6 = FUNC_1(VAR_6, 0);
   if (!VAR_6) {




    VAR_4 = VAR_2->iip;
    break;
   }
  }

  if (VAR_6) {
   FUNC_0(VAR_0, VAR_6->level >= 0);
   return VAR_6;
  }
 }
}
