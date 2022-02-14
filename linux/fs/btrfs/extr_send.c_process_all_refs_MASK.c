
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {TYPE_1__* cmp_key; struct btrfs_root* send_root; struct btrfs_root* parent_root; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
typedef int iterate_inode_ref_t ;
typedef enum btrfs_compare_tree_result { ____Placeholder_btrfs_compare_tree_result } btrfs_compare_tree_result ;
struct TYPE_2__ {scalar_t__ objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_5 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_8 (struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int ,int ,struct send_ctx*) ;
 int FUNC_9 (struct send_ctx*,int*) ;

__attribute__((used)) static int FUNC_10(struct send_ctx *VAR_8,
       enum btrfs_compare_tree_result VAR_9)
{
 int VAR_10;
 struct btrfs_root *VAR_11;
 struct btrfs_path *VAR_12;
 struct btrfs_key VAR_13;
 struct btrfs_key VAR_14;
 struct extent_buffer *VAR_15;
 int VAR_16;
 iterate_inode_ref_t VAR_17;
 int VAR_18 = 0;

 VAR_12 = FUNC_0();
 if (!VAR_12)
  return -VAR_5;

 if (VAR_9 == VAR_1) {
  VAR_11 = VAR_8->send_root;
  VAR_17 = VAR_7;
 } else if (VAR_9 == VAR_0) {
  VAR_11 = VAR_8->parent_root;
  VAR_17 = VAR_6;
 } else {
  FUNC_1(VAR_8->send_root->fs_info,
    "Wrong command %d in process_all_refs", VAR_9);
  VAR_10 = -VAR_4;
  goto out;
 }

 VAR_13.objectid = VAR_8->cmp_key->objectid;
 VAR_13.type = VAR_3;
 VAR_13.offset = 0;
 VAR_10 = FUNC_7(((void*)0), VAR_11, &VAR_13, VAR_12, 0, 0);
 if (VAR_10 < 0)
  goto out;

 while (1) {
  VAR_15 = VAR_12->nodes[0];
  VAR_16 = VAR_12->slots[0];
  if (VAR_16 >= FUNC_3(VAR_15)) {
   VAR_10 = FUNC_5(VAR_11, VAR_12);
   if (VAR_10 < 0)
    goto out;
   else if (VAR_10 > 0)
    break;
   continue;
  }

  FUNC_4(VAR_15, &VAR_14, VAR_16);

  if (VAR_14.objectid != VAR_13.objectid ||
      (VAR_14.type != VAR_3 &&
       VAR_14.type != VAR_2))
   break;

  VAR_10 = FUNC_8(VAR_11, VAR_12, &VAR_14, 0, VAR_17, VAR_8);
  if (VAR_10 < 0)
   goto out;

  VAR_12->slots[0]++;
 }
 FUNC_6(VAR_12);






 VAR_10 = FUNC_9(VAR_8, &VAR_18);
out:
 FUNC_2(VAR_12);
 return VAR_10;
}
