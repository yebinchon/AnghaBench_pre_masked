
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_map_token {int dummy; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_item {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct btrfs_disk_key*,struct btrfs_key const*) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int,unsigned int,...) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct btrfs_map_token*,struct extent_buffer*) ;
 unsigned int FUNC_5 (struct extent_buffer*,int) ;
 struct btrfs_item* FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct extent_buffer*,int) ;
 int FUNC_12 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 int FUNC_13 (struct extent_buffer*,struct btrfs_item*,int,struct btrfs_map_token*) ;
 int FUNC_14 (struct extent_buffer*,struct btrfs_item*,int,struct btrfs_map_token*) ;
 int FUNC_15 (struct extent_buffer*,struct btrfs_item*,struct btrfs_map_token*) ;
 int FUNC_16 (struct btrfs_path*,int) ;
 int FUNC_17 (struct btrfs_path*,struct btrfs_disk_key*,int) ;
 unsigned int FUNC_18 (struct extent_buffer*) ;
 int FUNC_19 (struct extent_buffer*,int,int,unsigned int) ;

void FUNC_20(struct btrfs_root *VAR_1, struct btrfs_path *VAR_2,
       const struct btrfs_key *VAR_3, u32 *VAR_4,
       u32 VAR_5, u32 VAR_6, int VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_1->fs_info;
 struct btrfs_item *VAR_9;
 int VAR_10;
 u32 VAR_11;
 unsigned int VAR_12;
 struct btrfs_disk_key VAR_13;
 struct extent_buffer *VAR_14;
 int VAR_15;
 struct btrfs_map_token VAR_16;

 if (VAR_2->slots[0] == 0) {
  FUNC_1(&VAR_13, VAR_3);
  FUNC_17(VAR_2, &VAR_13, 1);
 }
 FUNC_16(VAR_2, 1);

 VAR_14 = VAR_2->nodes[0];
 VAR_15 = VAR_2->slots[0];

 VAR_11 = FUNC_3(VAR_14);
 VAR_12 = FUNC_18(VAR_14);

 if (FUNC_8(VAR_14) < VAR_6) {
  FUNC_10(VAR_14);
  FUNC_2(VAR_8, "not enough freespace need %u have %d",
      VAR_6, FUNC_8(VAR_14));
  FUNC_0();
 }

 FUNC_4(&VAR_16, VAR_14);
 if (VAR_15 != VAR_11) {
  unsigned int VAR_17 = FUNC_5(VAR_14, VAR_15);

  if (VAR_17 < VAR_12) {
   FUNC_10(VAR_14);
   FUNC_2(VAR_8, "slot %d old_data %d data_end %d",
       VAR_15, VAR_17, VAR_12);
   FUNC_0();
  }




  for (VAR_10 = VAR_15; VAR_10 < VAR_11; VAR_10++) {
   u32 VAR_18;

   VAR_9 = FUNC_6(VAR_10);
   VAR_18 = FUNC_15(VAR_14, VAR_9, &VAR_16);
   FUNC_13(VAR_14, VAR_9,
          VAR_18 - VAR_5, &VAR_16);
  }

  FUNC_19(VAR_14, FUNC_7(VAR_15 + VAR_7),
         FUNC_7(VAR_15),
         (VAR_11 - VAR_15) * sizeof(struct btrfs_item));


  FUNC_19(VAR_14, VAR_0 +
         VAR_12 - VAR_5, VAR_0 +
         VAR_12, VAR_17 - VAR_12);
  VAR_12 = VAR_17;
 }


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_1(&VAR_13, VAR_3 + VAR_10);
  FUNC_12(VAR_14, &VAR_13, VAR_15 + VAR_10);
  VAR_9 = FUNC_6(VAR_15 + VAR_10);
  FUNC_13(VAR_14, VAR_9,
         VAR_12 - VAR_4[VAR_10], &VAR_16);
  VAR_12 -= VAR_4[VAR_10];
  FUNC_14(VAR_14, VAR_9, VAR_4[VAR_10], &VAR_16);
 }

 FUNC_11(VAR_14, VAR_11 + VAR_7);
 FUNC_9(VAR_14);

 if (FUNC_8(VAR_14) < 0) {
  FUNC_10(VAR_14);
  FUNC_0();
 }
}
