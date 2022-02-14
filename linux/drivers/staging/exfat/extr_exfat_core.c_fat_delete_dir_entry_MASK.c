
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_info_t {TYPE_1__* fs_func; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef int s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {int (* set_entry_type ) (struct dentry_t*,int ) ;} ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*,int ) ;
 struct dentry_t* FUNC_2 (struct super_block*,struct chain_t*,int,int *) ;
 int FUNC_3 (struct dentry_t*,int ) ;

void FUNC_4(struct super_block *VAR_1, struct chain_t *VAR_2,
  s32 VAR_3, s32 VAR_4, s32 VAR_5)
{
 int VAR_6;
 sector_t VAR_7;
 struct dentry_t *VAR_8;
 struct fs_info_t *VAR_9 = &(FUNC_0(VAR_1)->fs_info);

 for (VAR_6 = VAR_5 - 1; VAR_6 >= VAR_4; VAR_6--) {
  VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3 - VAR_6, &VAR_7);
  if (!VAR_8)
   return;

  VAR_9->fs_func->set_entry_type(VAR_8, VAR_0);
  FUNC_1(VAR_1, VAR_7);
 }
}
