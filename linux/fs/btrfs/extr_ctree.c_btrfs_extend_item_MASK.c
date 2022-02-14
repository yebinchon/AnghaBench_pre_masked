
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_map_token {int dummy; } ;
struct btrfs_item {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct btrfs_map_token*,struct extent_buffer*) ;
 unsigned int FUNC_5 (struct extent_buffer*,int) ;
 struct btrfs_item* FUNC_6 (int) ;
 unsigned int FUNC_7 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct extent_buffer*,struct btrfs_item*,scalar_t__) ;
 int FUNC_12 (struct extent_buffer*,struct btrfs_item*,scalar_t__,struct btrfs_map_token*) ;
 scalar_t__ FUNC_13 (struct extent_buffer*,struct btrfs_item*,struct btrfs_map_token*) ;
 unsigned int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*,scalar_t__,scalar_t__,unsigned int) ;

void FUNC_16(struct btrfs_path *VAR_1, u32 VAR_2)
{
 int VAR_3;
 struct extent_buffer *VAR_4;
 struct btrfs_item *VAR_5;
 u32 VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 struct btrfs_map_token VAR_11;

 VAR_4 = VAR_1->nodes[0];

 VAR_6 = FUNC_3(VAR_4);
 VAR_7 = FUNC_14(VAR_4);

 if (FUNC_8(VAR_4) < VAR_2) {
  FUNC_10(VAR_4);
  FUNC_0();
 }
 VAR_3 = VAR_1->slots[0];
 VAR_8 = FUNC_5(VAR_4, VAR_3);

 FUNC_1(VAR_3 < 0);
 if (VAR_3 >= VAR_6) {
  FUNC_10(VAR_4);
  FUNC_2(VAR_4->fs_info, "slot %d too large, nritems %d",
      VAR_3, VAR_6);
  FUNC_0();
 }





 FUNC_4(&VAR_11, VAR_4);
 for (VAR_10 = VAR_3; VAR_10 < VAR_6; VAR_10++) {
  u32 VAR_12;
  VAR_5 = FUNC_6(VAR_10);

  VAR_12 = FUNC_13(VAR_4, VAR_5, &VAR_11);
  FUNC_12(VAR_4, VAR_5,
         VAR_12 - VAR_2, &VAR_11);
 }


 FUNC_15(VAR_4, VAR_0 +
        VAR_7 - VAR_2, VAR_0 +
        VAR_7, VAR_8 - VAR_7);

 VAR_7 = VAR_8;
 VAR_9 = FUNC_7(VAR_4, VAR_3);
 VAR_5 = FUNC_6(VAR_3);
 FUNC_11(VAR_4, VAR_5, VAR_9 + VAR_2);
 FUNC_9(VAR_4);

 if (FUNC_8(VAR_4) < 0) {
  FUNC_10(VAR_4);
  FUNC_0();
 }
}
