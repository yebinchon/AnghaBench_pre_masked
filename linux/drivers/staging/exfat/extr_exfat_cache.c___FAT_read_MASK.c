
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ vol_type; scalar_t__ FAT1_start_sector; } ;
struct bd_info_t {int sector_size_bits; int sector_size_mask; int sector_size; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* FUNC_3 (struct super_block*,scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_4, u32 VAR_5, u32 *VAR_6)
{
 s32 VAR_7;
 u32 VAR_8;
 sector_t VAR_9;
 u8 *VAR_10, *VAR_11;
 struct fs_info_t *VAR_12 = &(FUNC_2(VAR_4)->fs_info);
 struct bd_info_t *VAR_13 = &(FUNC_2(VAR_4)->bd_info);

 if (VAR_12->vol_type == VAR_1) {
  VAR_9 = VAR_12->FAT1_start_sector +
   ((VAR_5 + (VAR_5 >> 1)) >> VAR_13->sector_size_bits);
  VAR_7 = (VAR_5 + (VAR_5 >> 1)) & VAR_13->sector_size_mask;

  if (VAR_7 == (VAR_13->sector_size - 1)) {
   VAR_10 = FUNC_3(VAR_4, VAR_9);
   if (!VAR_10)
    return -1;

   VAR_8 = (u32)VAR_10[VAR_7];

   VAR_10 = FUNC_3(VAR_4, ++VAR_9);
   if (!VAR_10)
    return -1;

   VAR_8 |= (u32)VAR_10[0] << 8;
  } else {
   VAR_10 = FUNC_3(VAR_4, VAR_9);
   if (!VAR_10)
    return -1;

   VAR_11 = &VAR_10[VAR_7];
   VAR_8 = FUNC_4(VAR_11);
  }

  if (VAR_5 & 1)
   VAR_8 >>= 4;

  VAR_8 &= 0x00000FFF;

  if (VAR_8 >= FUNC_0(0x0FF8)) {
   *VAR_6 = FUNC_1(~0);
   return 0;
  }
  *VAR_6 = FUNC_1(VAR_8);
  return 0;
 } else if (VAR_12->vol_type == VAR_2) {
  VAR_9 = VAR_12->FAT1_start_sector +
   (VAR_5 >> (VAR_13->sector_size_bits - 1));
  VAR_7 = (VAR_5 << 1) & VAR_13->sector_size_mask;

  VAR_10 = FUNC_3(VAR_4, VAR_9);
  if (!VAR_10)
   return -1;

  VAR_11 = &VAR_10[VAR_7];

  VAR_8 = FUNC_5(VAR_11);

  VAR_8 &= 0x0000FFFF;

  if (VAR_8 >= FUNC_0(0xFFF8)) {
   *VAR_6 = FUNC_1(~0);
   return 0;
  }
  *VAR_6 = FUNC_1(VAR_8);
  return 0;
 } else if (VAR_12->vol_type == VAR_3) {
  VAR_9 = VAR_12->FAT1_start_sector +
   (VAR_5 >> (VAR_13->sector_size_bits - 2));
  VAR_7 = (VAR_5 << 2) & VAR_13->sector_size_mask;

  VAR_10 = FUNC_3(VAR_4, VAR_9);
  if (!VAR_10)
   return -1;

  VAR_11 = &VAR_10[VAR_7];

  VAR_8 = FUNC_6(VAR_11);

  VAR_8 &= 0x0FFFFFFF;

  if (VAR_8 >= FUNC_1(0x0FFFFFF8)) {
   *VAR_6 = FUNC_1(~0);
   return 0;
  }
  *VAR_6 = FUNC_1(VAR_8);
  return 0;
 } else if (VAR_12->vol_type == VAR_0) {
  VAR_9 = VAR_12->FAT1_start_sector +
   (VAR_5 >> (VAR_13->sector_size_bits - 2));
  VAR_7 = (VAR_5 << 2) & VAR_13->sector_size_mask;

  VAR_10 = FUNC_3(VAR_4, VAR_9);
  if (!VAR_10)
   return -1;

  VAR_11 = &VAR_10[VAR_7];
  VAR_8 = FUNC_6(VAR_11);

  if (VAR_8 >= FUNC_1(0xFFFFFFF8)) {
   *VAR_6 = FUNC_1(~0);
   return 0;
  }
  *VAR_6 = FUNC_1(VAR_8);
  return 0;
 }


 *VAR_6 = FUNC_1(~0);
 return 0;
}
