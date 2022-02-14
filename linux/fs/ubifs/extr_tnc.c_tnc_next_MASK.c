
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_znode {int child_cnt; int iip; scalar_t__ level; struct ubifs_znode* parent; } ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_znode*) ;
 int FUNC_1 (struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_2 (struct ubifs_info*,struct ubifs_znode*,int) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_1, struct ubifs_znode **VAR_2, int *VAR_3)
{
 struct ubifs_znode *VAR_4 = *VAR_2;
 int VAR_5 = *VAR_3;

 VAR_5 += 1;
 if (VAR_5 < VAR_4->child_cnt) {
  *VAR_3 = VAR_5;
  return 0;
 }
 while (1) {
  struct ubifs_znode *VAR_6;

  VAR_6 = VAR_4->parent;
  if (!VAR_6)
   return -VAR_0;
  VAR_5 = VAR_4->iip + 1;
  VAR_4 = VAR_6;
  if (VAR_5 < VAR_4->child_cnt) {
   VAR_4 = FUNC_2(VAR_1, VAR_4, VAR_5);
   if (FUNC_0(VAR_4))
    return FUNC_1(VAR_4);
   while (VAR_4->level != 0) {
    VAR_4 = FUNC_2(VAR_1, VAR_4, 0);
    if (FUNC_0(VAR_4))
     return FUNC_1(VAR_4);
   }
   VAR_5 = 0;
   break;
  }
 }
 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;
 return 0;
}
