
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct hfs_mdb {int drCTClpSiz; int drCTFlSize; int drCTExtRec; int drXTClpSiz; int drXTFlSize; int drXTExtRec; } ;
struct hfs_btree_header_rec {int depth; int max_key_len; int node_size; int attributes; int free_nodes; int node_count; int leaf_tail; int leaf_head; int leaf_count; int root; } ;
struct hfs_btree {int cnid; unsigned int node_size; int pages_per_bnode; TYPE_1__* inode; scalar_t__ node_size_shift; void* max_key_len; void* node_count; void* depth; void* attributes; void* free_nodes; void* leaf_tail; void* leaf_head; void* leaf_count; void* root; int keycmp; struct super_block* sb; int hash_lock; int tree_lock; } ;
struct hfs_bnode_desc {int dummy; } ;
struct address_space {int * a_ops; } ;
typedef int btree_keycmp ;
struct TYPE_10__ {int first_blocks; int alloc_blocks; int extents_lock; scalar_t__ flags; } ;
struct TYPE_9__ {struct hfs_mdb* mdb; } ;
struct TYPE_8__ {int i_state; struct address_space* i_mapping; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;


 TYPE_6__* FUNC_2 (TYPE_1__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_5__* FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ,void*) ;
 TYPE_1__* FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (struct hfs_btree*) ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 struct hfs_btree* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (struct page*) ;
 struct page* FUNC_19 (struct address_space*,int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_1__*) ;

struct hfs_btree *FUNC_22(struct super_block *VAR_8, u32 VAR_9, btree_keycmp VAR_10)
{
 struct hfs_btree *VAR_11;
 struct hfs_btree_header_rec *VAR_12;
 struct address_space *VAR_13;
 struct page *VAR_14;
 unsigned int VAR_15;

 VAR_11 = FUNC_15(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return ((void*)0);

 FUNC_16(&VAR_11->tree_lock);
 FUNC_20(&VAR_11->hash_lock);

 VAR_11->sb = VAR_8;
 VAR_11->cnid = VAR_9;
 VAR_11->keycmp = VAR_10;

 VAR_11->inode = FUNC_9(VAR_8, VAR_9);
 if (!VAR_11->inode)
  goto free_tree;
 FUNC_1(!(VAR_11->inode->i_state & VAR_3));
 {
 struct hfs_mdb *VAR_16 = FUNC_3(VAR_8)->mdb;
 FUNC_2(VAR_11->inode)->flags = 0;
 FUNC_16(&FUNC_2(VAR_11->inode)->extents_lock);
 switch (VAR_9) {
 case 128:
  FUNC_8(VAR_11->inode, VAR_16->drXTExtRec, VAR_16->drXTFlSize,
        VAR_16->drXTFlSize, FUNC_6(VAR_16->drXTClpSiz));
  if (FUNC_2(VAR_11->inode)->alloc_blocks >
     FUNC_2(VAR_11->inode)->first_blocks) {
   FUNC_17("invalid btree extent records\n");
   FUNC_21(VAR_11->inode);
   goto free_inode;
  }

  VAR_11->inode->i_mapping->a_ops = &VAR_7;
  break;
 case 129:
  FUNC_8(VAR_11->inode, VAR_16->drCTExtRec, VAR_16->drCTFlSize,
        VAR_16->drCTFlSize, FUNC_6(VAR_16->drCTClpSiz));

  if (!FUNC_2(VAR_11->inode)->first_blocks) {
   FUNC_17("invalid btree extent records (0 size)\n");
   FUNC_21(VAR_11->inode);
   goto free_inode;
  }

  VAR_11->inode->i_mapping->a_ops = &VAR_7;
  break;
 default:
  FUNC_0();
 }
 }
 FUNC_21(VAR_11->inode);

 VAR_13 = VAR_11->inode->i_mapping;
 VAR_14 = FUNC_19(VAR_13, 0, ((void*)0));
 if (FUNC_4(VAR_14))
  goto free_inode;


 VAR_12 = (struct hfs_btree_header_rec *)(FUNC_13(VAR_14) + sizeof(struct hfs_bnode_desc));
 VAR_11->root = FUNC_6(VAR_12->root);
 VAR_11->leaf_count = FUNC_6(VAR_12->leaf_count);
 VAR_11->leaf_head = FUNC_6(VAR_12->leaf_head);
 VAR_11->leaf_tail = FUNC_6(VAR_12->leaf_tail);
 VAR_11->node_count = FUNC_6(VAR_12->node_count);
 VAR_11->free_nodes = FUNC_6(VAR_12->free_nodes);
 VAR_11->attributes = FUNC_6(VAR_12->attributes);
 VAR_11->node_size = FUNC_5(VAR_12->node_size);
 VAR_11->max_key_len = FUNC_5(VAR_12->max_key_len);
 VAR_11->depth = FUNC_5(VAR_12->depth);

 VAR_15 = VAR_11->node_size;
 if (!FUNC_11(VAR_15))
  goto fail_page;
 if (!VAR_11->node_count)
  goto fail_page;
 switch (VAR_9) {
 case 128:
  if (VAR_11->max_key_len != VAR_2) {
   FUNC_17("invalid extent max_key_len %d\n",
          VAR_11->max_key_len);
   goto fail_page;
  }
  break;
 case 129:
  if (VAR_11->max_key_len != VAR_1) {
   FUNC_17("invalid catalog max_key_len %d\n",
          VAR_11->max_key_len);
   goto fail_page;
  }
  break;
 default:
  FUNC_0();
 }

 VAR_11->node_size_shift = FUNC_7(VAR_15) - 1;
 VAR_11->pages_per_bnode = (VAR_11->node_size + VAR_5 - 1) >> VAR_4;

 FUNC_14(VAR_14);
 FUNC_18(VAR_14);
 return VAR_11;

fail_page:
 FUNC_18(VAR_14);
free_inode:
 VAR_11->inode->i_mapping->a_ops = &VAR_6;
 FUNC_10(VAR_11->inode);
free_tree:
 FUNC_12(VAR_11);
 return ((void*)0);
}
