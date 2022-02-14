
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ vol_type; scalar_t__ FAT1_start_sector; } ;
struct bd_info_t {int sector_size_bits; int sector_size_mask; int sector_size; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int* FUNC_1 (struct super_block*,scalar_t__) ;
 int FUNC_2 (struct super_block*,scalar_t__) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int*,int) ;

__attribute__((used)) static s32 FUNC_8(struct super_block *VAR_3, u32 VAR_4, u32 VAR_5)
{
 s32 VAR_6;
 sector_t VAR_7;
 u8 *VAR_8, *VAR_9;
 struct fs_info_t *VAR_10 = &(FUNC_0(VAR_3)->fs_info);
 struct bd_info_t *VAR_11 = &(FUNC_0(VAR_3)->bd_info);

 if (VAR_10->vol_type == VAR_0) {
  VAR_5 &= 0x00000FFF;

  VAR_7 = VAR_10->FAT1_start_sector +
   ((VAR_4 + (VAR_4 >> 1)) >> VAR_11->sector_size_bits);
  VAR_6 = (VAR_4 + (VAR_4 >> 1)) & VAR_11->sector_size_mask;

  VAR_8 = FUNC_1(VAR_3, VAR_7);
  if (!VAR_8)
   return -1;

  if (VAR_4 & 1) {
   VAR_5 <<= 4;

   if (VAR_6 == (VAR_11->sector_size - 1)) {
    VAR_8[VAR_6] = (u8)(VAR_5 |
             (VAR_8[VAR_6] &
       0x0F));
    FUNC_2(VAR_3, VAR_7);

    VAR_8 = FUNC_1(VAR_3, ++VAR_7);
    if (!VAR_8)
     return -1;

    VAR_8[0] = (u8)(VAR_5 >> 8);
   } else {
    VAR_9 = &VAR_8[VAR_6];
    VAR_5 |= FUNC_3(VAR_9) & 0x000F;

    FUNC_5(VAR_9, VAR_5);
   }
  } else {
   VAR_8[VAR_6] = (u8)(VAR_5);

   if (VAR_6 == (VAR_11->sector_size - 1)) {
    VAR_8[VAR_6] = (u8)(VAR_5);
    FUNC_2(VAR_3, VAR_7);

    VAR_8 = FUNC_1(VAR_3, ++VAR_7);
    if (!VAR_8)
     return -1;
    VAR_8[0] = (u8)((VAR_8[0] & 0xF0) |
           (VAR_5 >> 8));
   } else {
    VAR_9 = &VAR_8[VAR_6];
    VAR_5 |= FUNC_3(VAR_9) & 0xF000;

    FUNC_5(VAR_9, VAR_5);
   }
  }
 }

 else if (VAR_10->vol_type == VAR_1) {
  VAR_5 &= 0x0000FFFF;

  VAR_7 = VAR_10->FAT1_start_sector + (VAR_4 >>
       (VAR_11->sector_size_bits - 1));
  VAR_6 = (VAR_4 << 1) & VAR_11->sector_size_mask;

  VAR_8 = FUNC_1(VAR_3, VAR_7);
  if (!VAR_8)
   return -1;

  VAR_9 = &VAR_8[VAR_6];

  FUNC_6(VAR_9, VAR_5);
 } else if (VAR_10->vol_type == VAR_2) {
  VAR_5 &= 0x0FFFFFFF;

  VAR_7 = VAR_10->FAT1_start_sector + (VAR_4 >>
       (VAR_11->sector_size_bits - 2));
  VAR_6 = (VAR_4 << 2) & VAR_11->sector_size_mask;

  VAR_8 = FUNC_1(VAR_3, VAR_7);
  if (!VAR_8)
   return -1;

  VAR_9 = &VAR_8[VAR_6];

  VAR_5 |= FUNC_4(VAR_9) & 0xF0000000;

  FUNC_7(VAR_9, VAR_5);
 } else {
  VAR_7 = VAR_10->FAT1_start_sector + (VAR_4 >>
       (VAR_11->sector_size_bits - 2));
  VAR_6 = (VAR_4 << 2) & VAR_11->sector_size_mask;

  VAR_8 = FUNC_1(VAR_3, VAR_7);
  if (!VAR_8)
   return -1;

  VAR_9 = &VAR_8[VAR_6];

  FUNC_7(VAR_9, VAR_5);
 }

 FUNC_2(VAR_3, VAR_7);
 return 0;
}
