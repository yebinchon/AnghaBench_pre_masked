
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {scalar_t__ cur_ino; int cur_inode_new_gen; TYPE_1__* cmp_key; } ;
typedef enum btrfs_compare_tree_result { ____Placeholder_btrfs_compare_tree_result } btrfs_compare_tree_result ;
struct TYPE_2__ {scalar_t__ objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct send_ctx*,int,char*) ;
 int FUNC_1 (struct send_ctx*) ;
 int FUNC_2 (struct send_ctx*) ;
 int FUNC_3 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_4(struct send_ctx *VAR_5,
         enum btrfs_compare_tree_result VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5->cur_ino != VAR_5->cmp_key->objectid) {
  FUNC_0(VAR_5, VAR_6, "reference");
  return -VAR_4;
 }

 if (!VAR_5->cur_inode_new_gen &&
     VAR_5->cur_ino != VAR_3) {
  if (VAR_6 == VAR_2)
   VAR_7 = FUNC_3(VAR_5);
  else if (VAR_6 == VAR_1)
   VAR_7 = FUNC_2(VAR_5);
  else if (VAR_6 == VAR_0)
   VAR_7 = FUNC_1(VAR_5);
 }

 return VAR_7;
}
