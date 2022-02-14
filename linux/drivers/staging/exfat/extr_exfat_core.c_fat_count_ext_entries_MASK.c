
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct super_block {int dummy; } ;
struct fs_info_t {TYPE_1__* fs_func; } ;
struct ext_dentry_t {scalar_t__ checksum; int order; } ;
struct dos_dentry_t {scalar_t__ name; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (void*,int ,int ) ;
 scalar_t__ FUNC_2 (struct super_block*,struct chain_t*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (struct dentry_t*) ;

s32 FUNC_4(struct super_block *VAR_2, struct chain_t *VAR_3,
     s32 VAR_4, struct dentry_t *VAR_5)
{
 s32 VAR_6 = 0;
 u8 VAR_7;
 struct dos_dentry_t *VAR_8 = (struct dos_dentry_t *)VAR_5;
 struct ext_dentry_t *VAR_9;
 struct fs_info_t *VAR_10 = &(FUNC_0(VAR_2)->fs_info);

 VAR_7 = FUNC_1((void *)VAR_8->name, VAR_0, 0);

 for (VAR_4--; VAR_4 >= 0; VAR_4--) {
  VAR_9 = (struct ext_dentry_t *)FUNC_2(VAR_2, VAR_3,
         VAR_4, ((void*)0));
  if (!VAR_9)
   return -1;

  if ((VAR_10->fs_func->get_entry_type((struct dentry_t *)VAR_9) ==
       VAR_1) && (VAR_9->checksum == VAR_7)) {
   VAR_6++;
   if (VAR_9->order > 0x40)
    return VAR_6;
  } else {
   return VAR_6;
  }
 }

 return VAR_6;
}
