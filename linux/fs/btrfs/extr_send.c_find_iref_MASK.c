
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct fs_path {int dummy; } ;
struct find_ref_ctx {int found_idx; struct btrfs_root* root; void* dir_gen; struct fs_path* name; void* dir; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int ,int ,struct find_ref_ctx*) ;

__attribute__((used)) static int FUNC_1(struct btrfs_root *VAR_2,
       struct btrfs_path *VAR_3,
       struct btrfs_key *VAR_4,
       u64 VAR_5, u64 VAR_6, struct fs_path *VAR_7)
{
 int VAR_8;
 struct find_ref_ctx VAR_9;

 VAR_9.dir = VAR_5;
 VAR_9.name = VAR_7;
 VAR_9.dir_gen = VAR_6;
 VAR_9.found_idx = -1;
 VAR_9.root = VAR_2;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, 0, VAR_1, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_9.found_idx == -1)
  return -VAR_0;

 return VAR_9.found_idx;
}
