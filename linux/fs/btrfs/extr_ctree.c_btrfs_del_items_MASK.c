
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {struct extent_buffer* node; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_map_token {int dummy; } ;
struct btrfs_item {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*) ;
 int VAR_1 ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct extent_buffer*) ;
 scalar_t__ FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct btrfs_map_token*,struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_disk_key*,int ) ;
 struct btrfs_item* FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_9 (struct extent_buffer*,int) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct extent_buffer*,int ) ;
 int FUNC_12 (struct extent_buffer*,int) ;
 int FUNC_13 (struct btrfs_path*) ;
 int FUNC_14 (struct extent_buffer*,struct btrfs_item*,int,struct btrfs_map_token*) ;
 int FUNC_15 (struct extent_buffer*,struct btrfs_item*,struct btrfs_map_token*) ;
 int FUNC_16 (struct extent_buffer*) ;
 int FUNC_17 (struct btrfs_path*,struct btrfs_disk_key*,int) ;
 int FUNC_18 (struct extent_buffer*) ;
 int FUNC_19 (struct extent_buffer*) ;
 int FUNC_20 (struct extent_buffer*,int ,int) ;
 int FUNC_21 (struct extent_buffer*,int,int,int) ;
 int FUNC_22 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int,int,int,int) ;
 int FUNC_23 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int,int,int,int ) ;

int FUNC_24(struct btrfs_trans_handle *VAR_2, struct btrfs_root *VAR_3,
      struct btrfs_path *VAR_4, int VAR_5, int VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_3->fs_info;
 struct extent_buffer *VAR_8;
 struct btrfs_item *VAR_9;
 u32 VAR_10;
 u32 VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_8 = VAR_4->nodes[0];
 VAR_10 = FUNC_8(VAR_8, VAR_5 + VAR_6 - 1);

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
  VAR_11 += FUNC_9(VAR_8, VAR_5 + VAR_14);

 VAR_15 = FUNC_3(VAR_8);

 if (VAR_5 + VAR_6 != VAR_15) {
  int VAR_16 = FUNC_19(VAR_8);
  struct btrfs_map_token VAR_17;

  FUNC_21(VAR_8, VAR_0 +
         VAR_16 + VAR_11,
         VAR_0 + VAR_16,
         VAR_10 - VAR_16);

  FUNC_4(&VAR_17, VAR_8);
  for (VAR_14 = VAR_5 + VAR_6; VAR_14 < VAR_15; VAR_14++) {
   u32 VAR_18;

   VAR_9 = FUNC_6(VAR_14);
   VAR_18 = FUNC_15(VAR_8, VAR_9, &VAR_17);
   FUNC_14(VAR_8, VAR_9,
          VAR_18 + VAR_11, &VAR_17);
  }

  FUNC_21(VAR_8, FUNC_7(VAR_5),
         FUNC_7(VAR_5 + VAR_6),
         sizeof(struct btrfs_item) *
         (VAR_15 - VAR_5 - VAR_6));
 }
 FUNC_12(VAR_8, VAR_15 - VAR_6);
 VAR_15 -= VAR_6;


 if (VAR_15 == 0) {
  if (VAR_8 == VAR_3->node) {
   FUNC_11(VAR_8, 0);
  } else {
   FUNC_13(VAR_4);
   FUNC_1(VAR_8);
   FUNC_2(VAR_2, VAR_3, VAR_4, VAR_8);
  }
 } else {
  int VAR_19 = FUNC_20(VAR_8, 0, VAR_15);
  if (VAR_5 == 0) {
   struct btrfs_disk_key VAR_20;

   FUNC_5(VAR_8, &VAR_20, 0);
   FUNC_17(VAR_4, &VAR_20, 1);
  }


  if (VAR_19 < FUNC_0(VAR_7) / 3) {




   VAR_5 = VAR_4->slots[1];
   FUNC_16(VAR_8);

   FUNC_13(VAR_4);
   VAR_13 = FUNC_22(VAR_2, VAR_3, VAR_4, 1, 1,
           1, (u32)-1);
   if (VAR_13 < 0 && VAR_13 != -VAR_1)
    VAR_12 = VAR_13;

   if (VAR_4->nodes[0] == VAR_8 &&
       FUNC_3(VAR_8)) {
    VAR_13 = FUNC_23(VAR_2, VAR_3, VAR_4, 1,
             1, 1, 0);
    if (VAR_13 < 0 && VAR_13 != -VAR_1)
     VAR_12 = VAR_13;
   }

   if (FUNC_3(VAR_8) == 0) {
    VAR_4->slots[1] = VAR_5;
    FUNC_2(VAR_2, VAR_3, VAR_4, VAR_8);
    FUNC_18(VAR_8);
    VAR_12 = 0;
   } else {





    if (VAR_4->nodes[0] == VAR_8)
     FUNC_10(VAR_8);
    FUNC_18(VAR_8);
   }
  } else {
   FUNC_10(VAR_8);
  }
 }
 return VAR_12;
}
