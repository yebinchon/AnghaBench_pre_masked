
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_btree {int pages_per_bnode; int hash_lock; int node_size; int cnid; } ;
struct hfs_bnode {int flags; int * page; int refcnt; int this; struct hfs_btree* tree; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfs_bnode*) ;
 int FUNC_4 (struct hfs_bnode*,int ,int ) ;
 int FUNC_5 (struct hfs_bnode*) ;
 scalar_t__ FUNC_6 (struct hfs_btree*) ;
 int FUNC_7 (struct hfs_bnode*) ;
 int FUNC_8 (int ,char*,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(struct hfs_bnode *VAR_2)
{
 if (VAR_2) {
  struct hfs_btree *VAR_3 = VAR_2->tree;
  int VAR_4;

  FUNC_8(VAR_0, "put_node(%d:%d): %d\n",
   VAR_2->tree->cnid, VAR_2->this,
   FUNC_2(&VAR_2->refcnt));
  FUNC_0(!FUNC_2(&VAR_2->refcnt));
  if (!FUNC_1(&VAR_2->refcnt, &VAR_3->hash_lock))
   return;
  for (VAR_4 = 0; VAR_4 < VAR_3->pages_per_bnode; VAR_4++) {
   if (!VAR_2->page[VAR_4])
    continue;
   FUNC_9(VAR_2->page[VAR_4]);
  }

  if (FUNC_11(VAR_1, &VAR_2->flags)) {
   FUNC_7(VAR_2);
   FUNC_10(&VAR_3->hash_lock);
   if (FUNC_6(VAR_3))
    FUNC_4(VAR_2, 0, VAR_3->node_size);
   FUNC_3(VAR_2);
   FUNC_5(VAR_2);
   return;
  }
  FUNC_10(&VAR_3->hash_lock);
 }
}
