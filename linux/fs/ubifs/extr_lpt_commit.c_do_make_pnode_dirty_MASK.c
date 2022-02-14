
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {struct ubifs_nnode* parent; int flags; } ;
struct ubifs_nnode {struct ubifs_nnode* parent; int flags; } ;
struct ubifs_info {int dirty_pn_cnt; int dirty_nn_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,struct ubifs_pnode*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_nnode*) ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_1, struct ubifs_pnode *VAR_2)
{

 if (!FUNC_1(VAR_0, &VAR_2->flags)) {
  struct ubifs_nnode *VAR_3;

  VAR_1->dirty_pn_cnt += 1;
  FUNC_0(VAR_1, VAR_2);

  VAR_3 = VAR_2->parent;
  while (VAR_3) {
   if (!FUNC_1(VAR_0, &VAR_3->flags)) {
    VAR_1->dirty_nn_cnt += 1;
    FUNC_2(VAR_1, VAR_3);
    VAR_3 = VAR_3->parent;
   } else
    break;
  }
 }
}
