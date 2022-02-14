
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_space_info {int dummy; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_key {scalar_t__ offset; int objectid; } ;
struct btrfs_fs_info {scalar_t__ sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (struct btrfs_fs_info*,struct btrfs_space_info*,scalar_t__,int) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,scalar_t__,scalar_t__) ;
 struct btrfs_space_info* FUNC_4 (struct btrfs_fs_info*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct btrfs_fs_info*,int ) ;
 int FUNC_6 (struct btrfs_fs_info*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct btrfs_key*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (struct btrfs_root*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

int FUNC_11(struct btrfs_root *VAR_2, u64 VAR_3,
    u64 VAR_4, u64 VAR_5,
    u64 VAR_6, u64 VAR_7,
    struct btrfs_key *VAR_8, int VAR_9, int VAR_10)
{
 struct btrfs_fs_info *VAR_11 = VAR_2->fs_info;
 bool VAR_12 = VAR_4 == VAR_5;
 u64 VAR_13;
 int VAR_14;

 VAR_13 = FUNC_7(VAR_2, VAR_9);
again:
 FUNC_0(VAR_4 < VAR_11->sectorsize);
 VAR_14 = FUNC_6(VAR_11, VAR_3, VAR_4, VAR_6,
          VAR_7, VAR_8, VAR_13, VAR_10);
 if (!VAR_14 && !VAR_9) {
  FUNC_1(VAR_11, VAR_8->objectid);
 } else if (VAR_14 == -VAR_0) {
  if (!VAR_12 && VAR_8->offset) {
   VAR_4 = FUNC_9(VAR_4 >> 1, VAR_8->offset);
   VAR_4 = FUNC_10(VAR_4,
            VAR_11->sectorsize);
   VAR_4 = FUNC_8(VAR_4, VAR_5);
   VAR_3 = VAR_4;
   if (VAR_4 == VAR_5)
    VAR_12 = 1;
   goto again;
  } else if (FUNC_5(VAR_11, VAR_1)) {
   struct btrfs_space_info *VAR_15;

   VAR_15 = FUNC_4(VAR_11, VAR_13);
   FUNC_3(VAR_11,
      "allocation failed flags %llu, wanted %llu",
      VAR_13, VAR_4);
   if (VAR_15)
    FUNC_2(VAR_11, VAR_15,
            VAR_4, 1);
  }
 }

 return VAR_14;
}
