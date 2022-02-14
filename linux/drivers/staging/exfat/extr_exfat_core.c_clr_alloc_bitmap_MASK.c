
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int map_clu; int sectors_per_clu_bits; TYPE_1__** vol_amap; } ;
struct bd_info_t {int sector_size_bits; int sector_size; } ;
struct exfat_mount_options {scalar_t__ discard; } ;
struct exfat_sb_info {struct bd_info_t bd_info; struct fs_info_t fs_info; struct exfat_mount_options options; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 struct exfat_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct super_block*,scalar_t__,int,int ,int ) ;
 int FUNC_5 (struct super_block*,scalar_t__,TYPE_1__*,int ) ;

s32 FUNC_6(struct super_block *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;
 sector_t VAR_6;





 struct fs_info_t *VAR_7 = &(FUNC_0(VAR_2)->fs_info);
 struct bd_info_t *VAR_8 = &(FUNC_0(VAR_2)->bd_info);

 VAR_4 = VAR_3 >> (VAR_8->sector_size_bits + 3);
 VAR_5 = VAR_3 & ((VAR_8->sector_size << 3) - 1);

 VAR_6 = FUNC_1(VAR_7->map_clu) + VAR_4;

 FUNC_2((u8 *)VAR_7->vol_amap[VAR_4]->b_data, VAR_5);

 return FUNC_5(VAR_2, VAR_6, VAR_7->vol_amap[VAR_4], 0);
}
