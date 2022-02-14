
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct page {int dummy; } ;
struct hfs_btree {int inode; int free_nodes; } ;
struct hfs_bnode {int this; int next; scalar_t__ type; struct page** page; scalar_t__ page_offset; struct hfs_btree* tree; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hfs_bnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct hfs_bnode* FUNC_1 (struct hfs_btree*,int) ;
 int FUNC_2 (struct hfs_bnode*) ;
 int FUNC_3 (struct hfs_bnode*,int,int*) ;
 int FUNC_4 (int ,char*,int) ;
 int* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (struct page*) ;

void FUNC_10(struct hfs_bnode *VAR_4)
{
 struct hfs_btree *VAR_5;
 struct page *VAR_6;
 u16 VAR_7, VAR_8;
 u32 VAR_9;
 u8 *VAR_10, VAR_11, VAR_12;

 FUNC_4(VAR_0, "btree_free_node: %u\n", VAR_4->this);
 VAR_5 = VAR_4->tree;
 VAR_9 = VAR_4->this;
 VAR_4 = FUNC_1(VAR_5, 0);
 if (FUNC_0(VAR_4))
  return;
 VAR_8 = FUNC_3(VAR_4, 2, &VAR_7);
 while (VAR_9 >= VAR_8 * 8) {
  u32 VAR_13;

  VAR_9 -= VAR_8 * 8;
  VAR_13 = VAR_4->next;
  if (!VAR_13) {
              ;
   FUNC_8("unable to free bnode %u. bmap not found!\n",
    VAR_4->this);
   FUNC_2(VAR_4);
   return;
  }
  FUNC_2(VAR_4);
  VAR_4 = FUNC_1(VAR_5, VAR_13);
  if (FUNC_0(VAR_4))
   return;
  if (VAR_4->type != VAR_1) {
              ;
   FUNC_8("invalid bmap found! (%u,%d)\n",
    VAR_4->this, VAR_4->type);
   FUNC_2(VAR_4);
   return;
  }
  VAR_8 = FUNC_3(VAR_4, 0, &VAR_7);
 }
 VAR_7 += VAR_4->page_offset + VAR_9 / 8;
 VAR_6 = VAR_4->page[VAR_7 >> VAR_3];
 VAR_10 = FUNC_5(VAR_6);
 VAR_7 &= ~VAR_2;
 VAR_12 = 1 << (~VAR_9 & 7);
 VAR_11 = VAR_10[VAR_7];
 if (!(VAR_11 & VAR_12)) {
  FUNC_8("trying to free free bnode %u(%d)\n",
   VAR_4->this, VAR_4->type);
  FUNC_6(VAR_6);
  FUNC_2(VAR_4);
  return;
 }
 VAR_10[VAR_7] = VAR_11 & ~VAR_12;
 FUNC_9(VAR_6);
 FUNC_6(VAR_6);
 FUNC_2(VAR_4);
 VAR_5->free_nodes++;
 FUNC_7(VAR_5->inode);
}
