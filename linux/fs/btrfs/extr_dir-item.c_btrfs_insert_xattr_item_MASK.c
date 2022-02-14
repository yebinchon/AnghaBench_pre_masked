
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_path {struct extent_buffer** nodes; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfs_dir_item {int dummy; } ;
typedef int location ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct btrfs_dir_item*) ;
 int FUNC_2 (struct btrfs_dir_item*) ;
 int FUNC_3 (struct btrfs_disk_key*,struct btrfs_key*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (char const*,scalar_t__) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_dir_item*,scalar_t__) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_dir_item*,struct btrfs_disk_key*) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_dir_item*,scalar_t__) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_dir_item*,int ) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_dir_item*,int ) ;
 struct btrfs_dir_item* FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,scalar_t__,char const*,scalar_t__) ;
 int FUNC_12 (struct btrfs_key*,int ,int) ;
 int FUNC_13 (struct extent_buffer*,void const*,unsigned long,scalar_t__) ;

int FUNC_14(struct btrfs_trans_handle *VAR_3,
       struct btrfs_root *VAR_4,
       struct btrfs_path *VAR_5, u64 VAR_6,
       const char *VAR_7, u16 VAR_8,
       const void *VAR_9, u16 VAR_10)
{
 int VAR_11 = 0;
 struct btrfs_dir_item *VAR_12;
 unsigned long VAR_13, VAR_14;
 struct btrfs_key VAR_15, VAR_16;
 struct btrfs_disk_key VAR_17;
 struct extent_buffer *VAR_18;
 u32 VAR_19;

 if (VAR_8 + VAR_10 > FUNC_0(VAR_4->fs_info))
  return -VAR_2;

 VAR_15.objectid = VAR_6;
 VAR_15.type = VAR_1;
 VAR_15.offset = FUNC_5(VAR_7, VAR_8);

 VAR_19 = sizeof(*VAR_12) + VAR_8 + VAR_10;
 VAR_12 = FUNC_11(VAR_3, VAR_4, VAR_5, &VAR_15, VAR_19,
     VAR_7, VAR_8);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);
 FUNC_12(&VAR_16, 0, sizeof(VAR_16));

 VAR_18 = VAR_5->nodes[0];
 FUNC_3(&VAR_17, &VAR_16);
 FUNC_7(VAR_18, VAR_12, &VAR_17);
 FUNC_10(VAR_18, VAR_12, VAR_0);
 FUNC_8(VAR_18, VAR_12, VAR_8);
 FUNC_9(VAR_18, VAR_12, VAR_3->transid);
 FUNC_6(VAR_18, VAR_12, VAR_10);
 VAR_13 = (unsigned long)(VAR_12 + 1);
 VAR_14 = (unsigned long)((char *)VAR_13 + VAR_8);

 FUNC_13(VAR_18, VAR_7, VAR_13, VAR_8);
 FUNC_13(VAR_18, VAR_9, VAR_14, VAR_10);
 FUNC_4(VAR_5->nodes[0]);

 return VAR_11;
}
