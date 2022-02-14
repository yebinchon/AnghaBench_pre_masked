
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {scalar_t__ cur_ino; TYPE_1__* cmp_key; int left_path; int cur_inode_deleted; int cur_inode_new_gen; } ;
typedef enum btrfs_compare_tree_result { ____Placeholder_btrfs_compare_tree_result } btrfs_compare_tree_result ;
struct TYPE_2__ {scalar_t__ objectid; } ;


 int VAR_0 ;
 int FUNC_0 (struct send_ctx*,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct send_ctx *VAR_1,
     enum btrfs_compare_tree_result VAR_2)
{
 int VAR_3 = 0;
 if (VAR_1->cur_ino != VAR_1->cmp_key->objectid)
  return 0;

 if (!VAR_1->cur_inode_new_gen && !VAR_1->cur_inode_deleted) {
  if (VAR_2 != VAR_0)
   VAR_3 = FUNC_0(VAR_1, VAR_1->left_path,
     VAR_1->cmp_key);
 }

 return VAR_3;
}
