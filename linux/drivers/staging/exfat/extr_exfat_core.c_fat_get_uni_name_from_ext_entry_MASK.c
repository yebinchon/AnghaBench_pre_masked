
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct super_block {int dummy; } ;
struct fs_info_t {TYPE_1__* fs_func; } ;
struct ext_dentry_t {int order; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ext_dentry_t*,int *,int) ;
 scalar_t__ FUNC_2 (struct super_block*,struct chain_t*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (struct dentry_t*) ;

void FUNC_4(struct super_block *VAR_1,
         struct chain_t *VAR_2, s32 VAR_3,
         u16 *VAR_4)
{
 int VAR_5;
 struct ext_dentry_t *VAR_6;
 struct fs_info_t *VAR_7 = &(FUNC_0(VAR_1)->fs_info);

 for (VAR_3--, VAR_5 = 1; VAR_3 >= 0; VAR_3--, VAR_5++) {
  VAR_6 = (struct ext_dentry_t *)FUNC_2(VAR_1, VAR_2, VAR_3,
            ((void*)0));
  if (!VAR_6)
   return;

  if (VAR_7->fs_func->get_entry_type((struct dentry_t *)VAR_6) ==
      VAR_0) {
   FUNC_1(VAR_6, VAR_4, VAR_5);
   if (VAR_6->order > 0x40)
    return;
  } else {
   return;
  }

  VAR_4 += 13;
 }
}
