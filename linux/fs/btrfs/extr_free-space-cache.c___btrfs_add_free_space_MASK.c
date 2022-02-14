
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_free_space_ctl {int tree_lock; } ;
struct btrfs_free_space {int offset_index; void* bytes; void* offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 int FUNC_4 (int ,struct btrfs_free_space*) ;
 struct btrfs_free_space* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,int) ;
 scalar_t__ FUNC_10 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,int) ;

int FUNC_11(struct btrfs_fs_info *VAR_4,
      struct btrfs_free_space_ctl *VAR_5,
      u64 VAR_6, u64 VAR_7)
{
 struct btrfs_free_space *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->offset = VAR_6;
 VAR_8->bytes = VAR_7;
 FUNC_1(&VAR_8->offset_index);

 FUNC_7(&VAR_5->tree_lock);

 if (FUNC_10(VAR_5, VAR_8, 1))
  goto link;






 VAR_9 = FUNC_3(VAR_5, VAR_8);
 if (VAR_9 < 0) {
  goto out;
 } else if (VAR_9) {
  VAR_9 = 0;
  goto out;
 }
link:






 FUNC_9(VAR_5, VAR_8, 1);

 VAR_9 = FUNC_6(VAR_5, VAR_8);
 if (VAR_9)
  FUNC_4(VAR_3, VAR_8);
out:
 FUNC_8(&VAR_5->tree_lock);

 if (VAR_9) {
  FUNC_2(VAR_4, "unable to add free space :%d", VAR_9);
  FUNC_0(VAR_9 != -VAR_0);
 }

 return VAR_9;
}
