
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int ignore_cur_inode; struct btrfs_key* cmp_key; struct btrfs_path* right_path; struct btrfs_path* left_path; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ objectid; } ;
typedef enum btrfs_compare_tree_result { ____Placeholder_btrfs_compare_tree_result } btrfs_compare_tree_result ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct send_ctx*,int) ;
 int FUNC_1 (struct send_ctx*,int) ;
 int FUNC_2 (struct send_ctx*,int) ;
 int FUNC_3 (struct send_ctx*,int) ;
 int FUNC_4 (struct send_ctx*,struct btrfs_path*,struct btrfs_key*) ;
 int FUNC_5 (struct send_ctx*,int ) ;
 int FUNC_6 (struct send_ctx*,struct btrfs_path*,struct btrfs_key*) ;

__attribute__((used)) static int FUNC_7(struct btrfs_path *VAR_9,
        struct btrfs_path *VAR_10,
        struct btrfs_key *VAR_11,
        enum btrfs_compare_tree_result VAR_12,
        void *VAR_13)
{
 int VAR_14 = 0;
 struct send_ctx *VAR_15 = VAR_13;

 if (VAR_12 == VAR_1) {
  if (VAR_11->type == VAR_7 ||
      VAR_11->type == VAR_5) {
   VAR_14 = FUNC_4(VAR_15, VAR_9, VAR_11);
   if (!VAR_14)
    return 0;
   if (VAR_14 < 0)
    return VAR_14;
  } else if (VAR_11->type == VAR_2) {
   return FUNC_6(VAR_15, VAR_9, VAR_11);
  } else {
   return 0;
  }
  VAR_12 = VAR_0;
  VAR_14 = 0;
 }

 VAR_15->left_path = VAR_9;
 VAR_15->right_path = VAR_10;
 VAR_15->cmp_key = VAR_11;

 VAR_14 = FUNC_5(VAR_15, 0);
 if (VAR_14 < 0)
  goto out;


 if (VAR_11->objectid == VAR_3 ||
     VAR_11->objectid == VAR_4)
  goto out;

 if (VAR_11->type == VAR_6) {
  VAR_14 = FUNC_1(VAR_15, VAR_12);
 } else if (!VAR_15->ignore_cur_inode) {
  if (VAR_11->type == VAR_7 ||
      VAR_11->type == VAR_5)
   VAR_14 = FUNC_2(VAR_15, VAR_12);
  else if (VAR_11->type == VAR_8)
   VAR_14 = FUNC_3(VAR_15, VAR_12);
  else if (VAR_11->type == VAR_2)
   VAR_14 = FUNC_0(VAR_15, VAR_12);
 }

out:
 return VAR_14;
}
