
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_find_data {int record; int keylength; struct hfs_bnode* bnode; int search_key; int keyoffset; struct hfs_btree* tree; } ;
struct hfs_btree {int attributes; scalar_t__ cnid; int max_key_len; int node_size; scalar_t__ root; } ;
struct hfs_bnode {int num_recs; scalar_t__ parent; int this; } ;
typedef int cnid ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hfs_bnode*) ;
 int FUNC_1 (struct hfs_bnode*) ;
 int FUNC_2 (struct hfs_bnode*,struct hfs_find_data*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hfs_bnode*,int ,struct hfs_bnode*,int,int) ;
 int FUNC_5 (struct hfs_bnode*) ;
 void* FUNC_6 (struct hfs_btree*,scalar_t__) ;
 int FUNC_7 (struct hfs_bnode*,int,int,int) ;
 int FUNC_8 (struct hfs_bnode*) ;
 int FUNC_9 (struct hfs_bnode*,int ,int) ;
 int FUNC_10 (struct hfs_bnode*,int) ;
 struct hfs_bnode* FUNC_11 (struct hfs_find_data*) ;
 int FUNC_12 (struct hfs_bnode*,int,int) ;
 int FUNC_13 (struct hfs_find_data*,int *,int) ;
 int FUNC_14 (struct hfs_btree*) ;
 int FUNC_15 (int ,char*,...) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_16(struct hfs_find_data *VAR_5)
{
 struct hfs_btree *VAR_6;
 struct hfs_bnode *VAR_7, *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_6 = VAR_5->tree;
 VAR_7 = VAR_5->bnode;
 VAR_8 = ((void*)0);
 if (!VAR_7->parent)
  return 0;

again:
 VAR_9 = FUNC_6(VAR_6, VAR_7->parent);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);
 FUNC_2(VAR_9, VAR_5, VAR_4);
 if (VAR_5->record < 0)
  return -VAR_1;
 FUNC_5(VAR_9);
 VAR_12 = VAR_5->record;


 if ((VAR_6->attributes & VAR_3) ||
    (VAR_6->cnid == VAR_2))
  VAR_10 = FUNC_10(VAR_7, 14) + 2;
 else
  VAR_5->keylength = VAR_10 = VAR_6->max_key_len + 2;
 FUNC_15(VAR_0, "update_rec: %d, %d, %d\n",
  VAR_12, VAR_5->keylength, VAR_10);

 VAR_13 = VAR_6->node_size - (VAR_12 + 2) * 2;
 VAR_14 = VAR_6->node_size - (VAR_9->num_recs + 1) * 2;
 VAR_11 = VAR_10 - VAR_5->keylength;
 if (!VAR_11)
  goto skip;
 if (VAR_11 > 0) {
  VAR_16 = FUNC_10(VAR_9, VAR_14);
  if (VAR_14 - VAR_16 < VAR_11) {

   FUNC_15(VAR_0, "splitting index node\n");
   VAR_5->bnode = VAR_9;
   VAR_8 = FUNC_11(VAR_5);
   if (FUNC_0(VAR_8))
    return FUNC_1(VAR_8);
   VAR_9 = VAR_5->bnode;
   VAR_12 = VAR_5->record;
   VAR_13 = VAR_6->node_size - (VAR_12 + 2) * 2;
   VAR_14 = VAR_6->node_size -
    (VAR_9->num_recs + 1) * 2;
  }
 }

 VAR_16 = VAR_15 = FUNC_10(VAR_9, VAR_13);
 FUNC_12(VAR_9, VAR_13, VAR_15 + VAR_11);
 VAR_15 -= 4;

 while (VAR_13 > VAR_14) {
  VAR_13 -= 2;
  VAR_16 = FUNC_10(VAR_9, VAR_13);
  FUNC_12(VAR_9, VAR_13, VAR_16 + VAR_11);
 }
 FUNC_7(VAR_9, VAR_15 + VAR_11, VAR_15,
         VAR_16 - VAR_15);
skip:
 FUNC_4(VAR_9, VAR_5->keyoffset, VAR_7, 14, VAR_10);
 FUNC_5(VAR_9);

 FUNC_8(VAR_7);
 VAR_7 = VAR_9;

 if (VAR_8) {
  __be32 VAR_17;

  if (!VAR_8->parent) {
   FUNC_14(VAR_6);
   VAR_8->parent = VAR_6->root;
  }
  VAR_5->bnode = FUNC_6(VAR_6, VAR_8->parent);

  FUNC_9(VAR_8, VAR_5->search_key, 14);
  VAR_17 = FUNC_3(VAR_8->this);

  FUNC_2(VAR_5->bnode, VAR_5, VAR_4);
  FUNC_13(VAR_5, &VAR_17, sizeof(VAR_17));
  FUNC_8(VAR_5->bnode);
  FUNC_8(VAR_8);

  if (!VAR_12) {
   if (VAR_8 == VAR_7)
    goto out;

   FUNC_9(VAR_7, VAR_5->search_key, 14);
  }
  VAR_8 = ((void*)0);
 }

 if (!VAR_12 && VAR_7->parent)
  goto again;
out:
 VAR_5->bnode = VAR_7;
 return 0;
}
