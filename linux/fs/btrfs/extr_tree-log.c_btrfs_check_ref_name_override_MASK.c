
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_path {int search_commit_root; int skip_locking; int * nodes; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ offset; scalar_t__ objectid; } ;
struct btrfs_inode_ref {int dummy; } ;
struct btrfs_inode_extref {int name; } ;
struct btrfs_inode {int root; } ;
struct btrfs_dir_item {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct btrfs_dir_item*) ;
 int FUNC_1 (struct btrfs_dir_item*) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (int ,struct btrfs_dir_item*,struct btrfs_key*) ;
 int FUNC_4 (struct btrfs_path*) ;
 scalar_t__ FUNC_5 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 scalar_t__ FUNC_6 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 scalar_t__ FUNC_7 (struct extent_buffer*,struct btrfs_inode_ref*) ;
 unsigned long FUNC_8 (struct extent_buffer*,int const) ;
 scalar_t__ FUNC_9 (struct extent_buffer*,int const) ;
 struct btrfs_dir_item* FUNC_10 (int *,int ,struct btrfs_path*,scalar_t__,char*,scalar_t__,int ) ;
 int FUNC_11 (struct btrfs_path*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,scalar_t__,int ) ;
 int FUNC_14 (struct extent_buffer*,char*,unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct extent_buffer *VAR_5,
      const int VAR_6,
      const struct btrfs_key *VAR_7,
      struct btrfs_inode *VAR_8,
      u64 *VAR_9, u64 *VAR_10)
{
 int VAR_11;
 struct btrfs_path *VAR_12;
 char *VAR_13 = ((void*)0);
 u32 VAR_14 = 0;
 u32 VAR_15 = FUNC_9(VAR_5, VAR_6);
 u32 VAR_16 = 0;
 unsigned long VAR_17 = FUNC_8(VAR_5, VAR_6);

 VAR_12 = FUNC_2();
 if (!VAR_12)
  return -VAR_3;
 VAR_12->search_commit_root = 1;
 VAR_12->skip_locking = 1;

 while (VAR_16 < VAR_15) {
  u64 VAR_18;
  u32 VAR_19;
  u32 VAR_20;
  unsigned long VAR_21;
  struct btrfs_dir_item *VAR_22;

  if (VAR_7->type == VAR_1) {
   struct btrfs_inode_ref *VAR_23;

   VAR_23 = (struct btrfs_inode_ref *)(VAR_17 + VAR_16);
   VAR_18 = VAR_7->offset;
   VAR_19 = FUNC_7(VAR_5, VAR_23);
   VAR_21 = (unsigned long)(VAR_23 + 1);
   VAR_20 = sizeof(*VAR_23) + VAR_19;
  } else {
   struct btrfs_inode_extref *VAR_24;

   VAR_24 = (struct btrfs_inode_extref *)(VAR_17 +
              VAR_16);
   VAR_18 = FUNC_6(VAR_5, VAR_24);
   VAR_19 = FUNC_5(VAR_5, VAR_24);
   VAR_21 = (unsigned long)&VAR_24->name;
   VAR_20 = sizeof(*VAR_24) + VAR_19;
  }

  if (VAR_19 > VAR_14) {
   char *VAR_25;

   VAR_25 = FUNC_13(VAR_13, VAR_19, VAR_4);
   if (!VAR_25) {
    VAR_11 = -VAR_3;
    goto out;
   }
   VAR_14 = VAR_19;
   VAR_13 = VAR_25;
  }

  FUNC_14(VAR_5, VAR_13, VAR_21, VAR_19);
  VAR_22 = FUNC_10(((void*)0), VAR_8->root, VAR_12,
    VAR_18, VAR_13, VAR_19, 0);
  if (VAR_22 && !FUNC_0(VAR_22)) {
   struct btrfs_key VAR_26;

   FUNC_3(VAR_12->nodes[0],
        VAR_22, &VAR_26);
   if (VAR_26.type == VAR_0) {
    if (VAR_26.objectid != VAR_7->objectid) {
     VAR_11 = 1;
     *VAR_9 = VAR_26.objectid;
     *VAR_10 = VAR_18;
    } else {
     VAR_11 = 0;
    }
   } else {
    VAR_11 = -VAR_2;
   }
   goto out;
  } else if (FUNC_0(VAR_22)) {
   VAR_11 = FUNC_1(VAR_22);
   goto out;
  }
  FUNC_11(VAR_12);

  VAR_16 += VAR_20;
 }
 VAR_11 = 0;
out:
 FUNC_4(VAR_12);
 FUNC_12(VAR_13);
 return VAR_11;
}
