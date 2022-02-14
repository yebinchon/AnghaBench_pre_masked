
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfs_btree {int inode; int node_hash_cnt; struct hfs_bnode** node_hash; } ;
struct hfs_bnode {int refcnt; int this; TYPE_1__* tree; struct hfs_bnode* next_hash; } ;
struct TYPE_2__ {int cnid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct hfs_bnode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hfs_btree*) ;
 int FUNC_4 (char*,int ,int ,scalar_t__) ;

void FUNC_5(struct hfs_btree *VAR_1)
{
 struct hfs_bnode *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  while ((VAR_2 = VAR_1->node_hash[VAR_3])) {
   VAR_1->node_hash[VAR_3] = VAR_2->next_hash;
   if (FUNC_0(&VAR_2->refcnt))
    FUNC_4("node %d:%d still has %d user(s)!\n",
           VAR_2->tree->cnid, VAR_2->this,
           FUNC_0(&VAR_2->refcnt));
   FUNC_1(VAR_2);
   VAR_1->node_hash_cnt--;
  }
 }
 FUNC_2(VAR_1->inode);
 FUNC_3(VAR_1);
}
