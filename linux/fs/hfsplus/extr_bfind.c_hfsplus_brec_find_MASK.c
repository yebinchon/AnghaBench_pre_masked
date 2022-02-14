
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfs_find_data {scalar_t__ record; struct hfs_bnode* bnode; int entryoffset; struct hfs_btree* tree; } ;
struct hfs_btree {int depth; scalar_t__ root; } ;
struct hfs_bnode {int height; scalar_t__ type; scalar_t__ parent; } ;
typedef int search_strategy_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct hfs_bnode*) ;
 int FUNC_1 (struct hfs_bnode*) ;
 int FUNC_2 (struct hfs_bnode*,struct hfs_find_data*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct hfs_bnode* FUNC_4 (struct hfs_btree*,scalar_t__) ;
 int FUNC_5 (struct hfs_bnode*) ;
 int FUNC_6 (struct hfs_bnode*,int *,int ,int) ;
 int FUNC_7 (char*,int,int,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_8(struct hfs_find_data *VAR_4, search_strategy_t VAR_5)
{
 struct hfs_btree *VAR_6;
 struct hfs_bnode *VAR_7;
 u32 VAR_8, VAR_9;
 __be32 VAR_10;
 int VAR_11, VAR_12;

 VAR_6 = VAR_4->tree;
 if (VAR_4->bnode)
  FUNC_5(VAR_4->bnode);
 VAR_4->bnode = ((void*)0);
 VAR_8 = VAR_6->root;
 if (!VAR_8)
  return -VAR_1;
 VAR_11 = VAR_6->depth;
 VAR_12 = 0;
 VAR_9 = 0;
 for (;;) {
  VAR_7 = FUNC_4(VAR_6, VAR_8);
  if (FUNC_0(VAR_7)) {
   VAR_12 = FUNC_1(VAR_7);
   VAR_7 = ((void*)0);
   break;
  }
  if (VAR_7->height != VAR_11)
   goto invalid;
  if (VAR_7->type != (--VAR_11 ? VAR_2 : VAR_3))
   goto invalid;
  VAR_7->parent = VAR_9;

  VAR_12 = FUNC_2(VAR_7, VAR_4, VAR_5);
  if (!VAR_11)
   break;
  if (VAR_4->record < 0)
   goto release;

  VAR_9 = VAR_8;
  FUNC_6(VAR_7, &VAR_10, VAR_4->entryoffset, 4);
  VAR_8 = FUNC_3(VAR_10);
  FUNC_5(VAR_7);
 }
 VAR_4->bnode = VAR_7;
 return VAR_12;

invalid:
 FUNC_7("inconsistency in B*Tree (%d,%d,%d,%u,%u)\n",
  VAR_11, VAR_7->height, VAR_7->type, VAR_8, VAR_9);
 VAR_12 = -VAR_0;
release:
 FUNC_5(VAR_7);
 return VAR_12;
}
