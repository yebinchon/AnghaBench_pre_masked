
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct hfs_btree {scalar_t__ node_size; int node_size_shift; int node_count; int hash_lock; } ;
struct hfs_bnode {int refcnt; } ;
typedef int gfp_t ;
struct TYPE_4__ {struct hfs_btree* cat_tree; struct hfs_btree* ext_tree; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 () ;


 TYPE_2__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 struct hfs_bnode* FUNC_3 (struct hfs_btree*,int) ;
 int FUNC_4 (struct hfs_bnode*) ;
 int FUNC_5 (struct hfs_bnode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct page *VAR_2, gfp_t VAR_3)
{
 struct inode *VAR_4 = VAR_2->mapping->host;
 struct super_block *VAR_5 = VAR_4->i_sb;
 struct hfs_btree *VAR_6;
 struct hfs_bnode *VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10 = 1;

 switch (VAR_4->i_ino) {
 case 128:
  VAR_6 = FUNC_1(VAR_5)->ext_tree;
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_5)->cat_tree;
  break;
 default:
  FUNC_0();
  return 0;
 }

 if (!VAR_6)
  return 0;

 if (VAR_6->node_size >= VAR_1) {
  VAR_8 = VAR_2->index >> (VAR_6->node_size_shift - VAR_0);
  FUNC_6(&VAR_6->hash_lock);
  VAR_7 = FUNC_3(VAR_6, VAR_8);
  if (!VAR_7)
   ;
  else if (FUNC_2(&VAR_7->refcnt))
   VAR_10 = 0;
  if (VAR_10 && VAR_7) {
   FUNC_5(VAR_7);
   FUNC_4(VAR_7);
  }
  FUNC_7(&VAR_6->hash_lock);
 } else {
  VAR_8 = VAR_2->index << (VAR_0 - VAR_6->node_size_shift);
  VAR_9 = 1 << (VAR_0 - VAR_6->node_size_shift);
  FUNC_6(&VAR_6->hash_lock);
  do {
   VAR_7 = FUNC_3(VAR_6, VAR_8++);
   if (!VAR_7)
    continue;
   if (FUNC_2(&VAR_7->refcnt)) {
    VAR_10 = 0;
    break;
   }
   FUNC_5(VAR_7);
   FUNC_4(VAR_7);
  } while (--VAR_9 && VAR_8 < VAR_6->node_count);
  FUNC_7(&VAR_6->hash_lock);
 }
 return VAR_10 ? FUNC_8(VAR_2) : 0;
}
