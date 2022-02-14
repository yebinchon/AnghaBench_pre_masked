
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_nnode {int iip; struct ubifs_nnode* parent; scalar_t__ level; void* num; struct ubifs_nbranch* nbranch; } ;
struct ubifs_nbranch {int lnum; int offs; struct ubifs_nnode* nnode; } ;
struct ubifs_info {int lpt_lnum; int lpt_offs; scalar_t__ lpt_hght; struct ubifs_nnode* nroot; scalar_t__ big_lpt; int nnode_sz; void* lpt_nod_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct ubifs_info*,struct ubifs_nnode*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubifs_nnode*) ;
 struct ubifs_nnode* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ubifs_info*,char*,int,int,int) ;
 int FUNC_5 (struct ubifs_info*,int,void*,int,int ,int) ;
 int FUNC_6 (struct ubifs_info*,void*,struct ubifs_nnode*) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_nnode*,struct ubifs_nnode*,int) ;

int FUNC_8(struct ubifs_info *VAR_2, struct ubifs_nnode *VAR_3, int VAR_4)
{
 struct ubifs_nbranch *VAR_5 = ((void*)0);
 struct ubifs_nnode *VAR_6 = ((void*)0);
 void *VAR_7 = VAR_2->lpt_nod_buf;
 int VAR_8, VAR_9, VAR_10;

 if (VAR_3) {
  VAR_5 = &VAR_3->nbranch[VAR_4];
  VAR_9 = VAR_5->lnum;
  VAR_10 = VAR_5->offs;
 } else {
  VAR_9 = VAR_2->lpt_lnum;
  VAR_10 = VAR_2->lpt_offs;
 }
 VAR_6 = FUNC_3(sizeof(struct ubifs_nnode), VAR_1);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto out;
 }
 if (VAR_9 == 0) {






  if (VAR_2->big_lpt)
   VAR_6->num = FUNC_0(VAR_2, VAR_3, VAR_4);
 } else {
  VAR_8 = FUNC_5(VAR_2, VAR_9, VAR_7, VAR_10, VAR_2->nnode_sz, 1);
  if (VAR_8)
   goto out;
  VAR_8 = FUNC_6(VAR_2, VAR_7, VAR_6);
  if (VAR_8)
   goto out;
 }
 VAR_8 = FUNC_7(VAR_2, VAR_6, VAR_3, VAR_4);
 if (VAR_8)
  goto out;
 if (!VAR_2->big_lpt)
  VAR_6->num = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_3) {
  VAR_5->nnode = VAR_6;
  VAR_6->level = VAR_3->level - 1;
 } else {
  VAR_2->nroot = VAR_6;
  VAR_6->level = VAR_2->lpt_hght;
 }
 VAR_6->parent = VAR_3;
 VAR_6->iip = VAR_4;
 return 0;

out:
 FUNC_4(VAR_2, "error %d reading nnode at %d:%d", VAR_8, VAR_9, VAR_10);
 FUNC_1();
 FUNC_2(VAR_6);
 return VAR_8;
}
