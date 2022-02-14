
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_sb_info {scalar_t__ sb_fs_size; scalar_t__ sb_dirband_start; scalar_t__ sb_dirband_size; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,unsigned int,unsigned int,scalar_t__,scalar_t__,scalar_t__,unsigned int*) ;
 unsigned int FUNC_1 (int *,unsigned int*) ;
 int FUNC_2 (struct quad_buffer_head*) ;
 int FUNC_3 (struct super_block*) ;
 int * FUNC_4 (struct super_block*,unsigned int,struct quad_buffer_head*,char*) ;
 int * FUNC_5 (struct super_block*,struct quad_buffer_head*) ;
 struct hpfs_sb_info* FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (struct super_block*) ;

int FUNC_9(struct super_block *VAR_2, u64 VAR_3, u64 VAR_4, u64 VAR_5, unsigned *VAR_6)
{
 int VAR_7 = 0;
 struct hpfs_sb_info *VAR_8 = FUNC_6(VAR_2);
 unsigned VAR_9, VAR_10, VAR_11, VAR_12;
 __le32 *VAR_13;
 struct quad_buffer_head VAR_14;

 *VAR_6 = 0;
 if (!VAR_4 || VAR_4 > VAR_8->sb_fs_size)
  VAR_4 = VAR_8->sb_fs_size;
 if (VAR_3 >= VAR_8->sb_fs_size)
  return 0;
 if (VAR_5 > 0x4000)
  return 0;
 if (VAR_3 < VAR_8->sb_dirband_start + VAR_8->sb_dirband_size && VAR_4 > VAR_8->sb_dirband_start) {
  FUNC_3(VAR_2);
  if (FUNC_8(VAR_2)) {
   VAR_7 = -VAR_1;
   goto unlock_1;
  }
  if (!(VAR_13 = FUNC_5(VAR_2, &VAR_14))) {
   VAR_7 = -VAR_0;
   goto unlock_1;
  }
  VAR_9 = 0;
  while ((VAR_10 = FUNC_1(VAR_13, &VAR_9)) && !VAR_7) {
   VAR_7 = FUNC_0(VAR_2, VAR_8->sb_dirband_start + VAR_9 * 4, VAR_10 * 4, VAR_3, VAR_4, VAR_5, VAR_6);
   VAR_9 += VAR_10;
  }
  FUNC_2(&VAR_14);
unlock_1:
  FUNC_7(VAR_2);
 }
 VAR_11 = VAR_3 >> 14;
 VAR_12 = (VAR_4 + 0x3fff) >> 14;
 while (VAR_11 < VAR_12 && !VAR_7) {
  FUNC_3(VAR_2);
  if (FUNC_8(VAR_2)) {
   VAR_7 = -VAR_1;
   goto unlock_2;
  }
  if (!(VAR_13 = FUNC_4(VAR_2, VAR_11, &VAR_14, "trim"))) {
   VAR_7 = -VAR_0;
   goto unlock_2;
  }
  VAR_9 = 0;
  while ((VAR_10 = FUNC_1(VAR_13, &VAR_9)) && !VAR_7) {
   VAR_7 = FUNC_0(VAR_2, (VAR_11 << 14) + VAR_9, VAR_10, VAR_3, VAR_4, VAR_5, VAR_6);
   VAR_9 += VAR_10;
  }
  FUNC_2(&VAR_14);
unlock_2:
  FUNC_7(VAR_2);
  VAR_11++;
 }
 return VAR_7;
}
