
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {scalar_t__ cur_ino; int cur_inode_deleted; int cur_inode_new_gen; TYPE_1__* cmp_key; } ;
typedef enum btrfs_compare_tree_result { ____Placeholder_btrfs_compare_tree_result } btrfs_compare_tree_result ;
struct TYPE_2__ {scalar_t__ objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct send_ctx*,int,char*) ;
 int FUNC_1 (struct send_ctx*) ;
 int FUNC_2 (struct send_ctx*) ;
 int FUNC_3 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_4(struct send_ctx *VAR_4,
    enum btrfs_compare_tree_result VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4->cur_ino != VAR_4->cmp_key->objectid) {
  FUNC_0(VAR_4, VAR_5, "xattr");
  return -VAR_3;
 }

 if (!VAR_4->cur_inode_new_gen && !VAR_4->cur_inode_deleted) {
  if (VAR_5 == VAR_2)
   VAR_6 = FUNC_3(VAR_4);
  else if (VAR_5 == VAR_1)
   VAR_6 = FUNC_2(VAR_4);
  else if (VAR_5 == VAR_0)
   VAR_6 = FUNC_1(VAR_4);
 }

 return VAR_6;
}
