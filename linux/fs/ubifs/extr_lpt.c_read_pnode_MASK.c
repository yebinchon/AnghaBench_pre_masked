
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {int iip; struct ubifs_nnode* parent; void* num; struct ubifs_lprops* lprops; } ;
struct ubifs_nnode {struct ubifs_nbranch* nbranch; } ;
struct ubifs_nbranch {int lnum; int offs; struct ubifs_pnode* pnode; } ;
struct ubifs_lprops {int flags; int free; } ;
struct ubifs_info {int pnodes_have; scalar_t__ big_lpt; int pnode_sz; int leb_size; void* lpt_nod_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct ubifs_info*,struct ubifs_nnode*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubifs_pnode*) ;
 struct ubifs_pnode* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_pnode*) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_lprops* const) ;
 int FUNC_6 (struct ubifs_info*,struct ubifs_pnode*,struct ubifs_nnode*,int) ;
 int FUNC_7 (struct ubifs_info*,char*,void*,...) ;
 int FUNC_8 (struct ubifs_info*,int,void*,int,int ,int) ;
 int FUNC_9 (struct ubifs_info*,void*,struct ubifs_pnode*) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_pnode*,struct ubifs_nnode*,int) ;

__attribute__((used)) static int FUNC_11(struct ubifs_info *VAR_3, struct ubifs_nnode *VAR_4, int VAR_5)
{
 struct ubifs_nbranch *VAR_6;
 struct ubifs_pnode *VAR_7 = ((void*)0);
 void *VAR_8 = VAR_3->lpt_nod_buf;
 int VAR_9, VAR_10, VAR_11;

 VAR_6 = &VAR_4->nbranch[VAR_5];
 VAR_10 = VAR_6->lnum;
 VAR_11 = VAR_6->offs;
 VAR_7 = FUNC_3(sizeof(struct ubifs_pnode), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_10 == 0) {





  int VAR_12;

  if (VAR_3->big_lpt)
   VAR_7->num = FUNC_0(VAR_3, VAR_4, VAR_5);
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
   struct ubifs_lprops * const VAR_13 = &VAR_7->lprops[VAR_12];

   VAR_13->free = VAR_3->leb_size;
   VAR_13->flags = FUNC_5(VAR_3, VAR_13);
  }
 } else {
  VAR_9 = FUNC_8(VAR_3, VAR_10, VAR_8, VAR_11, VAR_3->pnode_sz, 1);
  if (VAR_9)
   goto out;
  VAR_9 = FUNC_9(VAR_3, VAR_8, VAR_7);
  if (VAR_9)
   goto out;
 }
 VAR_9 = FUNC_10(VAR_3, VAR_7, VAR_4, VAR_5);
 if (VAR_9)
  goto out;
 if (!VAR_3->big_lpt)
  VAR_7->num = FUNC_0(VAR_3, VAR_4, VAR_5);
 VAR_6->pnode = VAR_7;
 VAR_7->parent = VAR_4;
 VAR_7->iip = VAR_5;
 FUNC_4(VAR_3, VAR_7);
 VAR_3->pnodes_have += 1;
 return 0;

out:
 FUNC_7(VAR_3, "error %d reading pnode at %d:%d", VAR_9, VAR_10, VAR_11);
 FUNC_6(VAR_3, VAR_7, VAR_4, VAR_5);
 FUNC_1();
 FUNC_7(VAR_3, "calc num: %d", FUNC_0(VAR_3, VAR_4, VAR_5));
 FUNC_2(VAR_7);
 return VAR_9;
}
