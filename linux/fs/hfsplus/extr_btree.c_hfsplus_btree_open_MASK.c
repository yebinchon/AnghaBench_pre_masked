
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct super_block {int dummy; } ;
struct page {struct address_space* i_mapping; } ;
struct inode {struct address_space* i_mapping; } ;
struct hfs_btree_header_rec {int key_type; int depth; int max_key_len; int node_size; int attributes; int free_nodes; int node_count; int leaf_tail; int leaf_head; int leaf_count; int root; } ;
struct hfs_btree {int cnid; int attributes; unsigned int node_size; int pages_per_bnode; struct page* inode; scalar_t__ node_size_shift; void* node_count; int keycmp; void* max_key_len; void* depth; void* free_nodes; void* leaf_tail; void* leaf_head; void* leaf_count; void* root; struct super_block* sb; int hash_lock; int tree_lock; } ;
struct hfs_bnode_desc {int dummy; } ;
struct address_space {int * a_ops; } ;
struct TYPE_4__ {int first_blocks; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct page*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct page* FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct hfs_btree*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 struct hfs_btree* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct page*) ;
 struct page* FUNC_16 (struct address_space*,int ,int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int *) ;

struct hfs_btree *FUNC_20(struct super_block *VAR_16, u32 VAR_17)
{
 struct hfs_btree *VAR_18;
 struct hfs_btree_header_rec *VAR_19;
 struct address_space *VAR_20;
 struct inode *VAR_21;
 struct page *VAR_22;
 unsigned int VAR_23;

 VAR_18 = FUNC_12(sizeof(*VAR_18), VAR_0);
 if (!VAR_18)
  return ((void*)0);

 FUNC_13(&VAR_18->tree_lock);
 FUNC_18(&VAR_18->hash_lock);
 VAR_18->sb = VAR_16;
 VAR_18->cnid = VAR_17;
 VAR_21 = FUNC_6(VAR_16, VAR_17);
 if (FUNC_2(VAR_21))
  goto free_tree;
 VAR_18->inode = VAR_21;

 if (!FUNC_0(VAR_18->inode)->first_blocks) {
  FUNC_14("invalid btree extent records (0 size)\n");
  goto free_inode;
 }

 VAR_20 = VAR_18->inode->i_mapping;
 VAR_22 = FUNC_16(VAR_20, 0, ((void*)0));
 if (FUNC_2(VAR_22))
  goto free_inode;


 VAR_19 = (struct hfs_btree_header_rec *)(FUNC_10(VAR_22) +
  sizeof(struct hfs_bnode_desc));
 VAR_18->root = FUNC_4(VAR_19->root);
 VAR_18->leaf_count = FUNC_4(VAR_19->leaf_count);
 VAR_18->leaf_head = FUNC_4(VAR_19->leaf_head);
 VAR_18->leaf_tail = FUNC_4(VAR_19->leaf_tail);
 VAR_18->node_count = FUNC_4(VAR_19->node_count);
 VAR_18->free_nodes = FUNC_4(VAR_19->free_nodes);
 VAR_18->attributes = FUNC_4(VAR_19->attributes);
 VAR_18->node_size = FUNC_3(VAR_19->node_size);
 VAR_18->max_key_len = FUNC_3(VAR_19->max_key_len);
 VAR_18->depth = FUNC_3(VAR_19->depth);


 switch (VAR_17) {
 case 128:
  if (VAR_18->max_key_len != VAR_3 - sizeof(u16)) {
   FUNC_14("invalid extent max_key_len %d\n",
    VAR_18->max_key_len);
   goto fail_page;
  }
  if (VAR_18->attributes & VAR_8) {
   FUNC_14("invalid extent btree flag\n");
   goto fail_page;
  }

  VAR_18->keycmp = VAR_15;
  break;
 case 129:
  if (VAR_18->max_key_len != VAR_2 - sizeof(u16)) {
   FUNC_14("invalid catalog max_key_len %d\n",
    VAR_18->max_key_len);
   goto fail_page;
  }
  if (!(VAR_18->attributes & VAR_8)) {
   FUNC_14("invalid catalog btree flag\n");
   goto fail_page;
  }

  if (FUNC_19(VAR_6, &FUNC_1(VAR_16)->flags) &&
      (VAR_19->key_type == VAR_4))
   VAR_18->keycmp = VAR_13;
  else {
   VAR_18->keycmp = VAR_14;
   FUNC_17(VAR_5, &FUNC_1(VAR_16)->flags);
  }
  break;
 case 130:
  if (VAR_18->max_key_len != VAR_1 - sizeof(u16)) {
   FUNC_14("invalid attributes max_key_len %d\n",
    VAR_18->max_key_len);
   goto fail_page;
  }
  VAR_18->keycmp = VAR_12;
  break;
 default:
  FUNC_14("unknown B*Tree requested\n");
  goto fail_page;
 }

 if (!(VAR_18->attributes & VAR_7)) {
  FUNC_14("invalid btree flag\n");
  goto fail_page;
 }

 VAR_23 = VAR_18->node_size;
 if (!FUNC_8(VAR_23))
  goto fail_page;
 if (!VAR_18->node_count)
  goto fail_page;

 VAR_18->node_size_shift = FUNC_5(VAR_23) - 1;

 VAR_18->pages_per_bnode =
  (VAR_18->node_size + VAR_10 - 1) >>
  VAR_9;

 FUNC_11(VAR_22);
 FUNC_15(VAR_22);
 return VAR_18;

 fail_page:
 FUNC_15(VAR_22);
 free_inode:
 VAR_18->inode->i_mapping->a_ops = &VAR_11;
 FUNC_7(VAR_18->inode);
 free_tree:
 FUNC_9(VAR_18);
 return ((void*)0);
}
