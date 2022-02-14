
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {struct btrfs_fs_info* fs_info; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_fs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct btrfs_fs_info*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct btrfs_fs_info*,char*,int ,int,int ,int,int,int ) ;
 scalar_t__ FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*,int) ;
 int FUNC_11 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_12 (struct extent_buffer*,int) ;
 int FUNC_13 (struct extent_buffer*) ;
 int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*) ;
 int FUNC_16 (char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_17 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_18 (struct btrfs_fs_info*,int ,int ,int,struct btrfs_key*) ;

void FUNC_19(struct extent_buffer *VAR_0, bool VAR_1)
{
 struct btrfs_fs_info *VAR_2;
 int VAR_3; u32 VAR_4;
 struct btrfs_key VAR_5;
 int VAR_6;

 if (!VAR_0)
  return;
 VAR_2 = VAR_0->fs_info;
 VAR_4 = FUNC_6(VAR_0);
 VAR_6 = FUNC_5(VAR_0);
 if (VAR_6 == 0) {
  FUNC_13(VAR_0);
  return;
 }
 FUNC_8(VAR_2,
     "node %llu level %d gen %llu total ptrs %d free spc %u owner %llu",
     FUNC_3(VAR_0), VAR_6, FUNC_4(VAR_0),
     VAR_4, (u32)FUNC_0(VAR_2) - VAR_4,
     FUNC_7(VAR_0));
 FUNC_17(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_11(VAR_0, &VAR_5, VAR_3);
  FUNC_16("\tkey %d (%llu %u %llu) block %llu gen %llu\n",
         VAR_3, VAR_5.objectid, VAR_5.type, VAR_5.offset,
         FUNC_10(VAR_0, VAR_3),
         FUNC_12(VAR_0, VAR_3));
 }
 if (!VAR_1)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct btrfs_key VAR_7;
  struct extent_buffer *VAR_8;

  FUNC_11(VAR_0, &VAR_7, VAR_3);
  VAR_8 = FUNC_18(VAR_2, FUNC_10(VAR_0, VAR_3),
           FUNC_12(VAR_0, VAR_3),
           VAR_6 - 1, &VAR_7);
  if (FUNC_2(VAR_8)) {
   continue;
  } else if (!FUNC_14(VAR_8)) {
   FUNC_15(VAR_8);
   continue;
  }

  if (FUNC_9(VAR_8) &&
     VAR_6 != 1)
   FUNC_1();
  if (FUNC_5(VAR_8) !=
         VAR_6 - 1)
   FUNC_1();
  FUNC_19(VAR_8, VAR_1);
  FUNC_15(VAR_8);
 }
}
