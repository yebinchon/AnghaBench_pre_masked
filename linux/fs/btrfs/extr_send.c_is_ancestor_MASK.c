
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct fs_path {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_inode_extref {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct extent_buffer*) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 scalar_t__ FUNC_4 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_key*,int) ;
 unsigned long FUNC_6 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_7 (struct extent_buffer*,int) ;
 int FUNC_8 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_9 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_10 (struct btrfs_root*,scalar_t__ const,scalar_t__ const,scalar_t__,scalar_t__,struct fs_path*) ;
 struct fs_path* FUNC_11 () ;
 int FUNC_12 (struct fs_path*) ;
 int FUNC_13 (struct btrfs_root*,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_14(struct btrfs_root *VAR_3,
         const u64 VAR_4,
         const u64 VAR_5,
         const u64 VAR_6,
         struct fs_path *VAR_7)
{
 bool VAR_8 = 0;
 int VAR_9 = 0;
 struct btrfs_path *VAR_10 = ((void*)0);
 struct btrfs_key VAR_11;

 if (!VAR_7) {
  VAR_7 = FUNC_11();
  if (!VAR_7)
   return -VAR_2;
  VAR_8 = 1;
 }

 VAR_10 = FUNC_0();
 if (!VAR_10) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_11.objectid = VAR_6;
 VAR_11.type = VAR_1;
 VAR_11.offset = 0;

 VAR_9 = FUNC_9(((void*)0), VAR_3, &VAR_11, VAR_10, 0, 0);
 if (VAR_9 < 0)
  goto out;

 while (1) {
  struct extent_buffer *VAR_12 = VAR_10->nodes[0];
  int VAR_13 = VAR_10->slots[0];
  u32 VAR_14 = 0;
  u32 VAR_15;

  if (VAR_13 >= FUNC_2(VAR_12)) {
   VAR_9 = FUNC_8(VAR_3, VAR_10);
   if (VAR_9 < 0)
    goto out;
   if (VAR_9 > 0)
    break;
   continue;
  }

  FUNC_5(VAR_12, &VAR_11, VAR_13);
  if (VAR_11.objectid != VAR_6)
   break;
  if (VAR_11.type != VAR_1 &&
      VAR_11.type != VAR_0)
   break;

  VAR_15 = FUNC_7(VAR_12, VAR_13);
  while (VAR_14 < VAR_15) {
   u64 VAR_16;
   u64 VAR_17;

   if (VAR_11.type == VAR_0) {
    unsigned long VAR_18;
    struct btrfs_inode_extref *VAR_19;

    VAR_18 = FUNC_6(VAR_12, VAR_13);
    VAR_19 = (struct btrfs_inode_extref *)
     (VAR_18 + VAR_14);
    VAR_16 = FUNC_4(VAR_12,
           VAR_19);
    VAR_14 += sizeof(*VAR_19);
    VAR_14 += FUNC_3(VAR_12,
          VAR_19);
   } else {
    VAR_16 = VAR_11.offset;
    VAR_14 = VAR_15;
   }

   VAR_9 = FUNC_13(VAR_3, VAR_16, ((void*)0), &VAR_17,
          ((void*)0), ((void*)0), ((void*)0), ((void*)0));
   if (VAR_9 < 0)
    goto out;
   VAR_9 = FUNC_10(VAR_3, VAR_4, VAR_5,
      VAR_16, VAR_17, VAR_7);
   if (VAR_9)
    goto out;
  }
  VAR_10->slots[0]++;
 }
 VAR_9 = 0;
 out:
 FUNC_1(VAR_10);
 if (VAR_8)
  FUNC_12(VAR_7);
 return VAR_9;
}
