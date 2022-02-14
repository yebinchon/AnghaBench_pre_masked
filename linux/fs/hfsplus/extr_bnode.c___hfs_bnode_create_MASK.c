
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct page {int dummy; } ;
struct hfs_btree {scalar_t__ node_count; int pages_per_bnode; int node_size_shift; TYPE_1__* inode; int hash_lock; int node_hash_cnt; struct hfs_bnode** node_hash; int cnid; } ;
struct hfs_bnode {int page_offset; int flags; struct page** page; int lock_wq; struct hfs_bnode* next_hash; scalar_t__ this; struct hfs_btree* tree; int refcnt; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int *,int) ;
 struct hfs_bnode* FUNC_3 (struct hfs_btree*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hfs_bnode*) ;
 struct hfs_bnode* FUNC_8 (int,int ) ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (struct page*) ;
 struct page* FUNC_11 (struct address_space*,int,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int) ;

__attribute__((used)) static struct hfs_bnode *FUNC_17(struct hfs_btree *VAR_6, u32 VAR_7)
{
 struct hfs_bnode *VAR_8, *VAR_9;
 struct address_space *VAR_10;
 struct page *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 loff_t VAR_16;

 if (VAR_7 >= VAR_6->node_count) {
  FUNC_9("request for non-existent node %d in B*Tree\n",
         VAR_7);
  return ((void*)0);
 }

 VAR_12 = sizeof(struct hfs_bnode) + VAR_6->pages_per_bnode *
  sizeof(struct page *);
 VAR_8 = FUNC_8(VAR_12, VAR_1);
 if (!VAR_8)
  return ((void*)0);
 VAR_8->tree = VAR_6;
 VAR_8->this = VAR_7;
 FUNC_12(VAR_3, &VAR_8->flags);
 FUNC_2(&VAR_8->refcnt, 1);
 FUNC_5(VAR_0, "new_node(%d:%d): 1\n",
  VAR_8->tree->cnid, VAR_8->this);
 FUNC_6(&VAR_8->lock_wq);
 FUNC_13(&VAR_6->hash_lock);
 VAR_9 = FUNC_3(VAR_6, VAR_7);
 if (!VAR_9) {
  VAR_15 = FUNC_4(VAR_7);
  VAR_8->next_hash = VAR_6->node_hash[VAR_15];
  VAR_6->node_hash[VAR_15] = VAR_8;
  VAR_6->node_hash_cnt++;
 } else {
  FUNC_14(&VAR_6->hash_lock);
  FUNC_7(VAR_8);
  FUNC_16(VAR_9->lock_wq,
   !FUNC_15(VAR_3, &VAR_9->flags));
  return VAR_9;
 }
 FUNC_14(&VAR_6->hash_lock);

 VAR_10 = VAR_6->inode->i_mapping;
 VAR_16 = (loff_t)VAR_7 << VAR_6->node_size_shift;
 VAR_13 = VAR_16 >> VAR_5;
 VAR_8->page_offset = VAR_16 & ~VAR_4;
 for (VAR_14 = 0; VAR_14 < VAR_6->pages_per_bnode; VAR_13++, VAR_14++) {
  VAR_11 = FUNC_11(VAR_10, VAR_13, ((void*)0));
  if (FUNC_0(VAR_11))
   goto fail;
  if (FUNC_1(VAR_11)) {
   FUNC_10(VAR_11);
   goto fail;
  }
  VAR_8->page[VAR_14] = VAR_11;
 }

 return VAR_8;
fail:
 FUNC_12(VAR_2, &VAR_8->flags);
 return VAR_8;
}
