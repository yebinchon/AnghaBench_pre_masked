
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {TYPE_1__** vol_amap; int map_clu; } ;
struct bd_info_t {int sector_size_bits; int sector_size; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;
struct TYPE_4__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ b_data; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct super_block*,scalar_t__,TYPE_1__*,int ) ;

s32 FUNC_4(struct super_block *VAR_0, u32 VAR_1)
{
 int VAR_2, VAR_3;
 sector_t VAR_4;
 struct fs_info_t *VAR_5 = &(FUNC_0(VAR_0)->fs_info);
 struct bd_info_t *VAR_6 = &(FUNC_0(VAR_0)->bd_info);

 VAR_2 = VAR_1 >> (VAR_6->sector_size_bits + 3);
 VAR_3 = VAR_1 & ((VAR_6->sector_size << 3) - 1);

 VAR_4 = FUNC_1(VAR_5->map_clu) + VAR_2;

 FUNC_2((u8 *)VAR_5->vol_amap[VAR_2]->b_data, VAR_3);

 return FUNC_3(VAR_0, VAR_4, VAR_5->vol_amap[VAR_2], 0);
}
