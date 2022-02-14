
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_path {int leave_spinning; int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_inode_extref {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (int ,char const*,int) ;
 struct btrfs_inode_extref* FUNC_3 (struct extent_buffer*,int ,int ,char const*,int) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 unsigned long FUNC_7 (struct extent_buffer*,int ) ;
 int FUNC_8 (struct extent_buffer*,int ) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_10 (struct btrfs_path*,int,int) ;
 int FUNC_11 (struct extent_buffer*,unsigned long,unsigned long,int) ;

__attribute__((used)) static int FUNC_12(struct btrfs_trans_handle *VAR_4,
      struct btrfs_root *VAR_5,
      const char *VAR_6, int VAR_7,
      u64 VAR_8, u64 VAR_9,
      u64 *VAR_10)
{
 struct btrfs_path *VAR_11;
 struct btrfs_key VAR_12;
 struct btrfs_inode_extref *VAR_13;
 struct extent_buffer *VAR_14;
 int VAR_15;
 int VAR_16 = VAR_7 + sizeof(*VAR_13);
 unsigned long VAR_17;
 unsigned long VAR_18;
 u32 VAR_19;

 VAR_12.objectid = VAR_8;
 VAR_12.type = VAR_0;
 VAR_12.offset = FUNC_2(VAR_9, VAR_6, VAR_7);

 VAR_11 = FUNC_0();
 if (!VAR_11)
  return -VAR_2;

 VAR_11->leave_spinning = 1;

 VAR_15 = FUNC_9(VAR_4, VAR_5, &VAR_12, VAR_11, -1, 1);
 if (VAR_15 > 0)
  VAR_15 = -VAR_1;
 if (VAR_15 < 0)
  goto out;






 VAR_13 = FUNC_3(VAR_11->nodes[0], VAR_11->slots[0],
      VAR_9, VAR_6, VAR_7);
 if (!VAR_13) {
  FUNC_5(VAR_5->fs_info, -VAR_1, ((void*)0));
  VAR_15 = -VAR_3;
  goto out;
 }

 VAR_14 = VAR_11->nodes[0];
 VAR_19 = FUNC_8(VAR_14, VAR_11->slots[0]);
 if (VAR_10)
  *VAR_10 = FUNC_6(VAR_14, VAR_13);

 if (VAR_16 == VAR_19) {




  VAR_15 = FUNC_1(VAR_4, VAR_5, VAR_11);
  goto out;
 }

 VAR_17 = (unsigned long)VAR_13;
 VAR_18 = FUNC_7(VAR_14, VAR_11->slots[0]);

 FUNC_11(VAR_14, VAR_17, VAR_17 + VAR_16,
         VAR_19 - (VAR_17 + VAR_16 - VAR_18));

 FUNC_10(VAR_11, VAR_19 - VAR_16, 1);

out:
 FUNC_4(VAR_11);

 return VAR_15;
}
