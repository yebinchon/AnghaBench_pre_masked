
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dirty_nn_cnt; int dirty_pn_cnt; struct ubifs_cnode* lpt_cnext; TYPE_1__* nroot; } ;
struct ubifs_cnode {struct ubifs_cnode* cnext; int flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 struct ubifs_cnode* FUNC_3 (struct ubifs_info*,TYPE_1__*) ;
 struct ubifs_cnode* FUNC_4 (struct ubifs_info*,struct ubifs_cnode*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_2)
{
 struct ubifs_cnode *VAR_3, *VAR_4;
 int VAR_5 = 0;

 if (!VAR_2->nroot)
  return 0;

 if (!FUNC_5(VAR_1, &VAR_2->nroot->flags))
  return 0;

 VAR_2->lpt_cnext = FUNC_3(VAR_2, VAR_2->nroot);
 VAR_3 = VAR_2->lpt_cnext;
 if (!VAR_3)
  return 0;
 VAR_5 += 1;
 while (1) {
  FUNC_6(VAR_2, !FUNC_5(VAR_0, &VAR_3->flags));
  FUNC_0(VAR_0, &VAR_3->flags);
  VAR_4 = FUNC_4(VAR_2, VAR_3);
  if (!VAR_4) {
   VAR_3->cnext = VAR_2->lpt_cnext;
   break;
  }
  VAR_3->cnext = VAR_4;
  VAR_3 = VAR_4;
  VAR_5 += 1;
 }
 FUNC_1("committing %d cnodes", VAR_5);
 FUNC_2("committing %d cnodes", VAR_5);
 FUNC_6(VAR_2, VAR_5 == VAR_2->dirty_nn_cnt + VAR_2->dirty_pn_cnt);
 return VAR_5;
}
