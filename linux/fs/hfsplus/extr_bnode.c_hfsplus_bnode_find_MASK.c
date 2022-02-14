
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfs_btree {int depth; int node_size; int hash_lock; } ;
struct hfs_bnode_desc {int type; int height; int num_recs; int next; int prev; } ;
struct hfs_bnode {int num_recs; int type; int height; int lock_wq; int flags; int * page; void* next; void* prev; scalar_t__ page_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfs_bnode* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;




 struct hfs_bnode* FUNC_1 (struct hfs_btree*,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 struct hfs_bnode* FUNC_5 (struct hfs_btree*,int ) ;
 int FUNC_6 (struct hfs_bnode*) ;
 int FUNC_7 (struct hfs_bnode*) ;
 int FUNC_8 (struct hfs_bnode*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;

struct hfs_bnode *FUNC_17(struct hfs_btree *VAR_4, u32 VAR_5)
{
 struct hfs_bnode *VAR_6;
 struct hfs_bnode_desc *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;

 FUNC_12(&VAR_4->hash_lock);
 VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_6(VAR_6);
  FUNC_13(&VAR_4->hash_lock);
  FUNC_15(VAR_6->lock_wq,
   !FUNC_14(VAR_3, &VAR_6->flags));
  if (FUNC_14(VAR_2, &VAR_6->flags))
   goto node_error;
  return VAR_6;
 }
 FUNC_13(&VAR_4->hash_lock);
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 if (FUNC_14(VAR_2, &VAR_6->flags))
  goto node_error;
 if (!FUNC_14(VAR_3, &VAR_6->flags))
  return VAR_6;

 VAR_7 = (struct hfs_bnode_desc *)(FUNC_9(VAR_6->page[0]) +
   VAR_6->page_offset);
 VAR_6->prev = FUNC_3(VAR_7->prev);
 VAR_6->next = FUNC_3(VAR_7->next);
 VAR_6->num_recs = FUNC_2(VAR_7->num_recs);
 VAR_6->type = VAR_7->type;
 VAR_6->height = VAR_7->height;
 FUNC_10(VAR_6->page[0]);

 switch (VAR_6->type) {
 case 131:
 case 128:
  if (VAR_6->height != 0)
   goto node_error;
  break;
 case 129:
  if (VAR_6->height != 1)
   goto node_error;
  break;
 case 130:
  if (VAR_6->height <= 1 || VAR_6->height > VAR_4->depth)
   goto node_error;
  break;
 default:
  goto node_error;
 }

 VAR_9 = VAR_4->node_size - 2;
 VAR_10 = FUNC_8(VAR_6, VAR_9);
 if (VAR_10 != sizeof(struct hfs_bnode_desc))
  goto node_error;
 for (VAR_8 = 1; VAR_8 <= VAR_6->num_recs; VAR_10 = VAR_11, VAR_8++) {
  VAR_9 -= 2;
  VAR_11 = FUNC_8(VAR_6, VAR_9);
  if (VAR_11 <= VAR_10 ||
      VAR_11 > VAR_4->node_size ||
      VAR_11 & 1)
   goto node_error;
  VAR_12 = VAR_11 - VAR_10;
  if (VAR_6->type != 130 &&
      VAR_6->type != 129)
   continue;
  VAR_13 = FUNC_8(VAR_6, VAR_10) + 2;
  if (VAR_13 >= VAR_12 || VAR_13 & 1)
   goto node_error;
 }
 FUNC_4(VAR_3, &VAR_6->flags);
 FUNC_16(&VAR_6->lock_wq);
 return VAR_6;

node_error:
 FUNC_11(VAR_2, &VAR_6->flags);
 FUNC_4(VAR_3, &VAR_6->flags);
 FUNC_16(&VAR_6->lock_wq);
 FUNC_7(VAR_6);
 return FUNC_0(-VAR_0);
}
