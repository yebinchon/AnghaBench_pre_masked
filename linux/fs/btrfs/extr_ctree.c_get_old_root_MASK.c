
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tree_mod_root {int level; int logical; } ;
struct tree_mod_elem {scalar_t__ op; int generation; struct tree_mod_root old_root; } ;
struct extent_buffer {int start; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_fs_info*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 struct tree_mod_elem* FUNC_3 (struct extent_buffer*,int ) ;
 int FUNC_4 (struct btrfs_fs_info*,struct extent_buffer*,int ,struct tree_mod_elem*) ;
 struct extent_buffer* FUNC_5 (struct btrfs_fs_info*,int ) ;
 struct extent_buffer* FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 scalar_t__ FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_10 (struct btrfs_root*) ;
 int FUNC_11 (struct extent_buffer*,int ) ;
 int FUNC_12 (struct extent_buffer*,int ) ;
 int FUNC_13 (struct extent_buffer*,int ) ;
 int FUNC_14 (struct extent_buffer*,int) ;
 int FUNC_15 (struct extent_buffer*,int ) ;
 int FUNC_16 (struct extent_buffer*) ;
 int FUNC_17 (struct extent_buffer*) ;
 int FUNC_18 (struct extent_buffer*) ;
 int FUNC_19 (struct extent_buffer*) ;
 int FUNC_20 (struct btrfs_fs_info*,char*,int ) ;
 int FUNC_21 (struct extent_buffer*) ;
 int FUNC_22 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_23 (struct btrfs_fs_info*,int ,int ,int,int *) ;
 struct tree_mod_elem* FUNC_24 (struct btrfs_fs_info*,int ,int ) ;

__attribute__((used)) static inline struct extent_buffer *
FUNC_25(struct btrfs_root *VAR_3, u64 VAR_4)
{
 struct btrfs_fs_info *VAR_5 = VAR_3->fs_info;
 struct tree_mod_elem *VAR_6;
 struct extent_buffer *VAR_7 = ((void*)0);
 struct extent_buffer *VAR_8;
 u64 VAR_9 = 0;
 struct extent_buffer *VAR_10;
 struct tree_mod_root *VAR_11 = ((void*)0);
 u64 VAR_12 = 0;
 u64 VAR_13;
 int VAR_14;

 VAR_8 = FUNC_10(VAR_3);
 VAR_6 = FUNC_3(VAR_8, VAR_4);
 if (!VAR_6)
  return VAR_8;

 if (VAR_6->op == VAR_2) {
  VAR_11 = &VAR_6->old_root;
  VAR_12 = VAR_6->generation;
  VAR_13 = VAR_11->logical;
  VAR_14 = VAR_11->level;
 } else {
  VAR_13 = VAR_8->start;
  VAR_14 = FUNC_7(VAR_8);
 }

 VAR_6 = FUNC_24(VAR_5, VAR_13, VAR_4);
 if (VAR_11 && VAR_6 && VAR_6->op != VAR_1) {
  FUNC_18(VAR_8);
  FUNC_22(VAR_8);
  VAR_10 = FUNC_23(VAR_5, VAR_13, 0, VAR_14, ((void*)0));
  if (FUNC_2(FUNC_1(VAR_10) || !FUNC_21(VAR_10))) {
   if (!FUNC_1(VAR_10))
    FUNC_22(VAR_10);
   FUNC_20(VAR_5,
       "failed to read tree block %llu from get_old_root",
       VAR_13);
  } else {
   VAR_7 = FUNC_6(VAR_10);
   FUNC_22(VAR_10);
  }
 } else if (VAR_11) {
  VAR_9 = FUNC_9(VAR_8);
  FUNC_18(VAR_8);
  FUNC_22(VAR_8);
  VAR_7 = FUNC_5(VAR_5, VAR_13);
 } else {
  FUNC_16(VAR_8);
  VAR_7 = FUNC_6(VAR_8);
  FUNC_19(VAR_8);
  FUNC_22(VAR_8);
 }

 if (!VAR_7)
  return ((void*)0);
 FUNC_17(VAR_7);
 if (VAR_11) {
  FUNC_12(VAR_7, VAR_7->start);
  FUNC_11(VAR_7, VAR_0);
  FUNC_15(VAR_7, VAR_9);
  FUNC_14(VAR_7, VAR_11->level);
  FUNC_13(VAR_7, VAR_12);
 }
 if (VAR_6)
  FUNC_4(VAR_5, VAR_7, VAR_4, VAR_6);
 else
  FUNC_2(FUNC_7(VAR_7) != 0);
 FUNC_2(FUNC_8(VAR_7) > FUNC_0(VAR_5));

 return VAR_7;
}
