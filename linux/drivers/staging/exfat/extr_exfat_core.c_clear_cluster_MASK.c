
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ root_start_sector; scalar_t__ data_start_sector; scalar_t__ sectors_per_clu; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bd_info_t {int sector_size; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 (struct super_block*,scalar_t__,struct buffer_head**,int ) ;
 scalar_t__ FUNC_6 (struct super_block*,scalar_t__,struct buffer_head*,int ) ;

s32 FUNC_7(struct super_block *VAR_1, u32 VAR_2)
{
 sector_t VAR_3, VAR_4;
 s32 VAR_5 = VAR_0;
 struct buffer_head *VAR_6 = ((void*)0);
 struct fs_info_t *VAR_7 = &(FUNC_1(VAR_1)->fs_info);
 struct bd_info_t *VAR_8 = &(FUNC_1(VAR_1)->bd_info);

 if (VAR_2 == FUNC_0(0)) {
  VAR_3 = VAR_7->root_start_sector;
  VAR_4 = VAR_7->data_start_sector;
 } else {
  VAR_3 = FUNC_2(VAR_2);
  VAR_4 = VAR_3 + VAR_7->sectors_per_clu;
 }

 for (; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = FUNC_5(VAR_1, VAR_3, &VAR_6, 0);
  if (VAR_5 != VAR_0)
   return VAR_5;

  FUNC_4((char *)VAR_6->b_data, 0x0, VAR_8->sector_size);
  VAR_5 = FUNC_6(VAR_1, VAR_3, VAR_6, 0);
  if (VAR_5 != VAR_0)
   break;
 }

 FUNC_3(VAR_6);
 return VAR_5;
}
