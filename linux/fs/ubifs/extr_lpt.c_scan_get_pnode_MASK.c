
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_pnode {int iip; struct ubifs_nnode* parent; void* num; struct ubifs_lprops* lprops; } ;
struct ubifs_nnode {struct ubifs_nbranch* nbranch; } ;
struct ubifs_nbranch {scalar_t__ lnum; scalar_t__ offs; struct ubifs_pnode* pnode; } ;
struct ubifs_lprops {scalar_t__ free; int flags; } ;
struct ubifs_info {scalar_t__ leb_size; scalar_t__ lpt_first; scalar_t__ lpt_last; scalar_t__ big_lpt; int pnode_sz; void* lpt_nod_buf; } ;
struct TYPE_2__ {struct ubifs_pnode* pnode; } ;
struct lpt_scan_node {int in_tree; TYPE_1__ ptr; struct ubifs_pnode pnode; } ;


 struct ubifs_pnode* FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (struct ubifs_info*,struct ubifs_nnode*,int) ;
 int FUNC_2 (struct ubifs_pnode*,int ,int) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_pnode*) ;
 int FUNC_4 (struct ubifs_info*,int) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_lprops* const) ;
 int FUNC_6 (struct ubifs_info*,scalar_t__,void*,scalar_t__,int ,int) ;
 int FUNC_7 (struct ubifs_info*,void*,struct ubifs_pnode*) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_pnode*,struct ubifs_nnode*,int) ;

__attribute__((used)) static struct ubifs_pnode *FUNC_9(struct ubifs_info *VAR_1,
       struct lpt_scan_node *VAR_2,
       struct ubifs_nnode *VAR_3, int VAR_4)
{
 struct ubifs_nbranch *VAR_5;
 struct ubifs_pnode *VAR_6;
 void *VAR_7 = VAR_1->lpt_nod_buf;
 int VAR_8;

 VAR_5 = &VAR_3->nbranch[VAR_4];
 VAR_6 = VAR_5->pnode;
 if (VAR_6) {
  VAR_2->in_tree = 1;
  VAR_2->ptr.pnode = VAR_6;
  return VAR_6;
 }
 VAR_6 = &VAR_2->pnode;
 VAR_2->in_tree = 0;
 VAR_2->ptr.pnode = VAR_6;
 FUNC_2(VAR_6, 0, sizeof(struct ubifs_pnode));
 if (VAR_5->lnum == 0) {





  int VAR_9;

  if (VAR_1->big_lpt)
   VAR_6->num = FUNC_1(VAR_1, VAR_3, VAR_4);
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   struct ubifs_lprops * const VAR_10 = &VAR_6->lprops[VAR_9];

   VAR_10->free = VAR_1->leb_size;
   VAR_10->flags = FUNC_5(VAR_1, VAR_10);
  }
 } else {
  FUNC_4(VAR_1, VAR_5->lnum >= VAR_1->lpt_first &&
        VAR_5->lnum <= VAR_1->lpt_last);
  FUNC_4(VAR_1, VAR_5->offs >= 0 && VAR_5->offs < VAR_1->leb_size);
  VAR_8 = FUNC_6(VAR_1, VAR_5->lnum, VAR_7, VAR_5->offs,
         VAR_1->pnode_sz, 1);
  if (VAR_8)
   return FUNC_0(VAR_8);
  VAR_8 = FUNC_7(VAR_1, VAR_7, VAR_6);
  if (VAR_8)
   return FUNC_0(VAR_8);
 }
 VAR_8 = FUNC_8(VAR_1, VAR_6, VAR_3, VAR_4);
 if (VAR_8)
  return FUNC_0(VAR_8);
 if (!VAR_1->big_lpt)
  VAR_6->num = FUNC_1(VAR_1, VAR_3, VAR_4);
 VAR_6->parent = VAR_3;
 VAR_6->iip = VAR_4;
 FUNC_3(VAR_1, VAR_6);
 return VAR_6;
}
