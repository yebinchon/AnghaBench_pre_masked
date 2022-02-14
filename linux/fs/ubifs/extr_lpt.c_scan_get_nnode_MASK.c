
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_nnode {int iip; struct ubifs_nnode* parent; scalar_t__ level; void* num; struct ubifs_nbranch* nbranch; } ;
struct ubifs_nbranch {scalar_t__ lnum; int offs; struct ubifs_nnode* nnode; } ;
struct ubifs_info {scalar_t__ big_lpt; int nnode_sz; void* lpt_nod_buf; } ;
struct TYPE_2__ {struct ubifs_nnode* nnode; } ;
struct lpt_scan_node {int in_tree; TYPE_1__ ptr; struct ubifs_nnode nnode; } ;


 struct ubifs_nnode* FUNC_0 (int) ;
 void* FUNC_1 (struct ubifs_info*,struct ubifs_nnode*,int) ;
 int FUNC_2 (struct ubifs_nnode*,int ,int) ;
 int FUNC_3 (struct ubifs_info*,scalar_t__,void*,int ,int ,int) ;
 int FUNC_4 (struct ubifs_info*,void*,struct ubifs_nnode*) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_nnode*,struct ubifs_nnode*,int) ;

__attribute__((used)) static struct ubifs_nnode *FUNC_6(struct ubifs_info *VAR_0,
       struct lpt_scan_node *VAR_1,
       struct ubifs_nnode *VAR_2, int VAR_3)
{
 struct ubifs_nbranch *VAR_4;
 struct ubifs_nnode *VAR_5;
 void *VAR_6 = VAR_0->lpt_nod_buf;
 int VAR_7;

 VAR_4 = &VAR_2->nbranch[VAR_3];
 VAR_5 = VAR_4->nnode;
 if (VAR_5) {
  VAR_1->in_tree = 1;
  VAR_1->ptr.nnode = VAR_5;
  return VAR_5;
 }
 VAR_5 = &VAR_1->nnode;
 VAR_1->in_tree = 0;
 VAR_1->ptr.nnode = VAR_5;
 FUNC_2(VAR_5, 0, sizeof(struct ubifs_nnode));
 if (VAR_4->lnum == 0) {






  if (VAR_0->big_lpt)
   VAR_5->num = FUNC_1(VAR_0, VAR_2, VAR_3);
 } else {
  VAR_7 = FUNC_3(VAR_0, VAR_4->lnum, VAR_6, VAR_4->offs,
         VAR_0->nnode_sz, 1);
  if (VAR_7)
   return FUNC_0(VAR_7);
  VAR_7 = FUNC_4(VAR_0, VAR_6, VAR_5);
  if (VAR_7)
   return FUNC_0(VAR_7);
 }
 VAR_7 = FUNC_5(VAR_0, VAR_5, VAR_2, VAR_3);
 if (VAR_7)
  return FUNC_0(VAR_7);
 if (!VAR_0->big_lpt)
  VAR_5->num = FUNC_1(VAR_0, VAR_2, VAR_3);
 VAR_5->level = VAR_2->level - 1;
 VAR_5->parent = VAR_2;
 VAR_5->iip = VAR_3;
 return VAR_5;
}
