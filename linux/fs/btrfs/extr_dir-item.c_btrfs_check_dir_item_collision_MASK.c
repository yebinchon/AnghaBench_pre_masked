
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_item {int dummy; } ;
struct btrfs_dir_item {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_path*) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,int) ;
 struct btrfs_dir_item* FUNC_4 (int ,struct btrfs_path*,char const*,int) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

int FUNC_7(struct btrfs_root *VAR_4, u64 VAR_5,
       const char *VAR_6, int VAR_7)
{
 int VAR_8;
 struct btrfs_key VAR_9;
 struct btrfs_dir_item *VAR_10;
 int VAR_11;
 struct extent_buffer *VAR_12;
 int VAR_13;
 struct btrfs_path *VAR_14;


 VAR_14 = FUNC_1();
 if (!VAR_14)
  return -VAR_2;

 VAR_9.objectid = VAR_5;
 VAR_9.type = VAR_0;
 VAR_9.offset = FUNC_5(VAR_6, VAR_7);

 VAR_8 = FUNC_6(((void*)0), VAR_4, &VAR_9, VAR_14, 0, 0);


 if (VAR_8 < 0)
  goto out;


 if (VAR_8 > 0) {
  VAR_8 = 0;
  goto out;
 }


 VAR_10 = FUNC_4(VAR_4->fs_info, VAR_14, VAR_6, VAR_7);
 if (VAR_10) {

  VAR_8 = -VAR_1;
  goto out;
 }





 VAR_11 = sizeof(*VAR_10) + VAR_7;
 VAR_12 = VAR_14->nodes[0];
 VAR_13 = VAR_14->slots[0];
 if (VAR_11 + FUNC_3(VAR_12, VAR_13) +
     sizeof(struct btrfs_item) > FUNC_0(VAR_4->fs_info)) {
  VAR_8 = -VAR_3;
 } else {

  VAR_8 = 0;
 }
out:
 FUNC_2(VAR_14);
 return VAR_8;
}
