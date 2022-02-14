
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ root_dir; int dentries_per_clu; TYPE_1__* fs_func; scalar_t__ dev_ejected; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int flags; } ;
struct case_dentry_t {int checksum; int size; int start_clu; } ;
struct bd_info_t {scalar_t__ sector_size_bits; } ;
typedef int sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (struct super_block*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct super_block*,struct chain_t*,int,int *) ;
 scalar_t__ FUNC_9 (struct dentry_t*) ;

s32 FUNC_10(struct super_block *VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;
 sector_t VAR_8;
 u32 VAR_9, VAR_10;
 struct chain_t VAR_11;
 struct case_dentry_t *VAR_12;
 struct fs_info_t *VAR_13 = &(FUNC_1(VAR_4)->fs_info);
 struct bd_info_t *VAR_14 = &(FUNC_1(VAR_4)->bd_info);

 VAR_11.dir = VAR_13->root_dir;
 VAR_11.flags = 0x01;

 if (VAR_13->dev_ejected)
  return VAR_0;

 while (VAR_11.dir != FUNC_0(~0)) {
  for (VAR_5 = 0; VAR_5 < VAR_13->dentries_per_clu; VAR_5++) {
   VAR_12 = (struct case_dentry_t *)FUNC_8(VAR_4, &VAR_11,
              VAR_5, ((void*)0));
   if (!VAR_12)
    return VAR_0;

   VAR_9 = VAR_13->fs_func->get_entry_type((struct dentry_t *)VAR_12);

   if (VAR_9 == VAR_2)
    break;
   if (VAR_9 != VAR_3)
    continue;

   VAR_6 = FUNC_3(VAR_12->start_clu);
   VAR_7 = (u32)FUNC_4(VAR_12->size);

   VAR_8 = FUNC_5(VAR_6);
   VAR_10 = ((VAR_7 - 1) >> VAR_14->sector_size_bits) + 1;
   if (FUNC_7(VAR_4, VAR_8, VAR_10,
      FUNC_3(VAR_12->checksum)) != VAR_1)
    break;
   return VAR_1;
  }
  if (FUNC_2(VAR_4, VAR_11.dir, &VAR_11.dir) != 0)
   return VAR_0;
 }

 return FUNC_6(VAR_4);
}
