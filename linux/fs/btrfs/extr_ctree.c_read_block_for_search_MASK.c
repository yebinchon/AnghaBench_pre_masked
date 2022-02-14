
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {scalar_t__ reada; } ;
struct btrfs_key {int objectid; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct extent_buffer*,int ,int) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*,int) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct extent_buffer*,int ,int,struct btrfs_key*) ;
 int FUNC_8 (struct btrfs_path*) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct btrfs_path*,int) ;
 scalar_t__ FUNC_11 (struct extent_buffer*,int,struct btrfs_key*,int ) ;
 int FUNC_12 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_13 (struct btrfs_fs_info*,int ) ;
 int FUNC_14 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_15 (struct btrfs_fs_info*,int ,int ,int,struct btrfs_key*) ;
 int FUNC_16 (struct btrfs_fs_info*,struct btrfs_path*,int,int,int ) ;

__attribute__((used)) static int
FUNC_17(struct btrfs_root *VAR_4, struct btrfs_path *VAR_5,
        struct extent_buffer **VAR_6, int VAR_7, int VAR_8,
        const struct btrfs_key *VAR_9)
{
 struct btrfs_fs_info *VAR_10 = VAR_4->fs_info;
 u64 VAR_11;
 u64 VAR_12;
 struct extent_buffer *VAR_13 = *VAR_6;
 struct extent_buffer *VAR_14;
 struct btrfs_key VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_11 = FUNC_4(VAR_13, VAR_8);
 VAR_12 = FUNC_6(VAR_13, VAR_8);
 VAR_17 = FUNC_3(VAR_13);
 FUNC_5(VAR_13, &VAR_15, VAR_8);

 VAR_14 = FUNC_13(VAR_10, VAR_11);
 if (VAR_14) {

  if (FUNC_2(VAR_14, VAR_12, 1) > 0) {





   if (FUNC_11(VAR_14,
     VAR_17 - 1, &VAR_15, VAR_12)) {
    FUNC_14(VAR_14);
    return -VAR_2;
   }
   *VAR_6 = VAR_14;
   return 0;
  }







  FUNC_9(VAR_5);


  VAR_16 = FUNC_7(VAR_14, VAR_12, VAR_17 - 1, &VAR_15);
  if (!VAR_16) {
   *VAR_6 = VAR_14;
   return 0;
  }
  FUNC_14(VAR_14);
  FUNC_8(VAR_5);
  return -VAR_1;
 }
 FUNC_10(VAR_5, VAR_7 + 1);
 FUNC_9(VAR_5);

 if (VAR_5->reada != VAR_3)
  FUNC_16(VAR_10, VAR_5, VAR_7, VAR_8, VAR_9->objectid);

 VAR_16 = -VAR_0;
 VAR_14 = FUNC_15(VAR_10, VAR_11, VAR_12, VAR_17 - 1,
         &VAR_15);
 if (!FUNC_0(VAR_14)) {






  if (!FUNC_12(VAR_14))
   VAR_16 = -VAR_1;
  FUNC_14(VAR_14);
 } else {
  VAR_16 = FUNC_1(VAR_14);
 }

 FUNC_8(VAR_5);
 return VAR_16;
}
