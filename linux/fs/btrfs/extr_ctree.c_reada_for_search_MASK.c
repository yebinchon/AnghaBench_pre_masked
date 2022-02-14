
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_path {scalar_t__ reada; struct extent_buffer** nodes; } ;
struct btrfs_fs_info {int nodesize; } ;
struct btrfs_disk_key {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_disk_key*) ;
 int FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (struct extent_buffer*,int) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 struct extent_buffer* FUNC_4 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct btrfs_fs_info*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct btrfs_fs_info *VAR_2,
        struct btrfs_path *VAR_3,
        int VAR_4, int VAR_5, u64 VAR_6)
{
 struct extent_buffer *VAR_7;
 struct btrfs_disk_key VAR_8;
 u32 VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 u64 VAR_12 = 0;
 struct extent_buffer *VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16 = 0;

 if (VAR_4 != 1)
  return;

 if (!VAR_3->nodes[VAR_4])
  return;

 VAR_7 = VAR_3->nodes[VAR_4];

 VAR_10 = FUNC_2(VAR_7, VAR_5);
 VAR_15 = VAR_2->nodesize;
 VAR_13 = FUNC_4(VAR_2, VAR_10);
 if (VAR_13) {
  FUNC_5(VAR_13);
  return;
 }

 VAR_11 = VAR_10;

 VAR_9 = FUNC_1(VAR_7);
 VAR_14 = VAR_5;

 while (1) {
  if (VAR_3->reada == VAR_0) {
   if (VAR_14 == 0)
    break;
   VAR_14--;
  } else if (VAR_3->reada == VAR_1) {
   VAR_14++;
   if (VAR_14 >= VAR_9)
    break;
  }
  if (VAR_3->reada == VAR_0 && VAR_6) {
   FUNC_3(VAR_7, &VAR_8, VAR_14);
   if (FUNC_0(&VAR_8) != VAR_6)
    break;
  }
  VAR_10 = FUNC_2(VAR_7, VAR_14);
  if ((VAR_10 <= VAR_11 && VAR_11 - VAR_10 <= 65536) ||
      (VAR_10 > VAR_11 && VAR_10 - VAR_11 <= 65536)) {
   FUNC_6(VAR_2, VAR_10);
   VAR_12 += VAR_15;
  }
  VAR_16++;
  if ((VAR_12 > 65536 || VAR_16 > 32))
   break;
 }
}
