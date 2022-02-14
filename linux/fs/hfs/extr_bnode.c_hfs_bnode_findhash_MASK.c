
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfs_btree {scalar_t__ node_count; struct hfs_bnode** node_hash; } ;
struct hfs_bnode {scalar_t__ this; struct hfs_bnode* next_hash; } ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

struct hfs_bnode *FUNC_2(struct hfs_btree *VAR_0, u32 VAR_1)
{
 struct hfs_bnode *VAR_2;

 if (VAR_1 >= VAR_0->node_count) {
  FUNC_1("request for non-existent node %d in B*Tree\n", VAR_1);
  return ((void*)0);
 }

 for (VAR_2 = VAR_0->node_hash[FUNC_0(VAR_1)];
      VAR_2; VAR_2 = VAR_2->next_hash) {
  if (VAR_2->this == VAR_1) {
   return VAR_2;
  }
 }
 return ((void*)0);
}
