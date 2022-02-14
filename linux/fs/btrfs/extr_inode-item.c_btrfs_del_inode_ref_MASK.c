
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int leave_spinning; int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int type; void* offset; void* objectid; } ;
struct btrfs_inode_ref {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,char const*,int,void*,void*,void**) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 struct btrfs_inode_ref* FUNC_3 (struct extent_buffer*,int ,char const*,int) ;
 int FUNC_4 (struct btrfs_path*) ;
 void* FUNC_5 (struct extent_buffer*,struct btrfs_inode_ref*) ;
 unsigned long FUNC_6 (struct extent_buffer*,int ) ;
 int FUNC_7 (struct extent_buffer*,int ) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_9 (struct btrfs_path*,int,int) ;
 int FUNC_10 (struct extent_buffer*,unsigned long,unsigned long,unsigned long) ;

int FUNC_11(struct btrfs_trans_handle *VAR_3,
   struct btrfs_root *VAR_4,
   const char *VAR_5, int VAR_6,
   u64 VAR_7, u64 VAR_8, u64 *VAR_9)
{
 struct btrfs_path *VAR_10;
 struct btrfs_key VAR_11;
 struct btrfs_inode_ref *VAR_12;
 struct extent_buffer *VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20 = VAR_6 + sizeof(*VAR_12);

 VAR_11.objectid = VAR_7;
 VAR_11.offset = VAR_8;
 VAR_11.type = VAR_0;

 VAR_10 = FUNC_0();
 if (!VAR_10)
  return -VAR_2;

 VAR_10->leave_spinning = 1;

 VAR_18 = FUNC_8(VAR_3, VAR_4, &VAR_11, VAR_10, -1, 1);
 if (VAR_18 > 0) {
  VAR_18 = -VAR_1;
  VAR_19 = 1;
  goto out;
 } else if (VAR_18 < 0) {
  goto out;
 }

 VAR_12 = FUNC_3(VAR_10->nodes[0], VAR_10->slots[0], VAR_5,
      VAR_6);
 if (!VAR_12) {
  VAR_18 = -VAR_1;
  VAR_19 = 1;
  goto out;
 }
 VAR_13 = VAR_10->nodes[0];
 VAR_16 = FUNC_7(VAR_13, VAR_10->slots[0]);

 if (VAR_9)
  *VAR_9 = FUNC_5(VAR_13, VAR_12);

 if (VAR_20 == VAR_16) {
  VAR_18 = FUNC_2(VAR_3, VAR_4, VAR_10);
  goto out;
 }
 VAR_14 = (unsigned long)VAR_12;
 VAR_17 = VAR_6 + sizeof(*VAR_12);
 VAR_15 = FUNC_6(VAR_13, VAR_10->slots[0]);
 FUNC_10(VAR_13, VAR_14, VAR_14 + VAR_17,
         VAR_16 - (VAR_14 + VAR_17 - VAR_15));
 FUNC_9(VAR_10, VAR_16 - VAR_17, 1);
out:
 FUNC_4(VAR_10);

 if (VAR_19) {





  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7, VAR_8, VAR_9);
 }

 return VAR_18;
}
