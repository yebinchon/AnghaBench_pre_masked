
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tree_mod_elem {scalar_t__ op; scalar_t__ slot; } ;
struct extent_buffer {int start; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct btrfs_fs_info*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct btrfs_fs_info*,struct extent_buffer*,int ,struct tree_mod_elem*) ;
 struct extent_buffer* FUNC_4 (struct btrfs_fs_info*,int ) ;
 struct extent_buffer* FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 scalar_t__ FUNC_7 (struct extent_buffer*) ;
 scalar_t__ FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*,int ) ;
 int FUNC_11 (struct extent_buffer*,int ) ;
 int FUNC_12 (struct extent_buffer*,scalar_t__) ;
 int FUNC_13 (struct extent_buffer*,int ) ;
 int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct btrfs_path*) ;
 int FUNC_16 (struct extent_buffer*) ;
 int FUNC_17 (struct extent_buffer*) ;
 int FUNC_18 (struct extent_buffer*) ;
 struct tree_mod_elem* FUNC_19 (struct btrfs_fs_info*,int ,int ) ;

__attribute__((used)) static struct extent_buffer *
FUNC_20(struct btrfs_fs_info *VAR_1, struct btrfs_path *VAR_2,
      struct extent_buffer *VAR_3, u64 VAR_4)
{
 struct extent_buffer *VAR_5;
 struct tree_mod_elem *VAR_6;

 if (!VAR_4)
  return VAR_3;

 if (FUNC_7(VAR_3) == 0)
  return VAR_3;

 VAR_6 = FUNC_19(VAR_1, VAR_3->start, VAR_4);
 if (!VAR_6)
  return VAR_3;

 FUNC_15(VAR_2);
 FUNC_14(VAR_3);

 if (VAR_6->op == VAR_0) {
  FUNC_1(VAR_6->slot != 0);
  VAR_5 = FUNC_4(VAR_1, VAR_3->start);
  if (!VAR_5) {
   FUNC_17(VAR_3);
   FUNC_18(VAR_3);
   return ((void*)0);
  }
  FUNC_11(VAR_5, VAR_3->start);
  FUNC_10(VAR_5,
          FUNC_6(VAR_3));
  FUNC_13(VAR_5, FUNC_9(VAR_3));
  FUNC_12(VAR_5, FUNC_7(VAR_3));
 } else {
  VAR_5 = FUNC_5(VAR_3);
  if (!VAR_5) {
   FUNC_17(VAR_3);
   FUNC_18(VAR_3);
   return ((void*)0);
  }
 }

 FUNC_17(VAR_3);
 FUNC_18(VAR_3);

 FUNC_16(VAR_5);
 FUNC_3(VAR_1, VAR_5, VAR_4, VAR_6);
 FUNC_2(FUNC_8(VAR_5) >
  FUNC_0(VAR_1));

 return VAR_5;
}
