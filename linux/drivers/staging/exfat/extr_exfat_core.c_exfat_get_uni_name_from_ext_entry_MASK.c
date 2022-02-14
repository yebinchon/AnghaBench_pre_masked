
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct super_block {int dummy; } ;
struct name_dentry_t {int dummy; } ;
struct fs_info_t {TYPE_1__* fs_func; } ;
struct entry_set_cache_t {int num_entries; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct name_dentry_t*,int *,int) ;
 struct entry_set_cache_t* FUNC_2 (struct super_block*,struct chain_t*,int ,int ,struct dentry_t**) ;
 int FUNC_3 (struct entry_set_cache_t*) ;
 scalar_t__ FUNC_4 (struct dentry_t*) ;

void FUNC_5(struct super_block *VAR_2,
           struct chain_t *VAR_3, s32 VAR_4,
           u16 *VAR_5)
{
 int VAR_6;
 struct dentry_t *VAR_7;
 struct entry_set_cache_t *VAR_8;
 struct fs_info_t *VAR_9 = &(FUNC_0(VAR_2)->fs_info);

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0, &VAR_7);
 if (!VAR_8 || VAR_8->num_entries < 3) {
  if (VAR_8)
   FUNC_3(VAR_8);
  return;
 }

 VAR_7 += 2;







 for (VAR_6 = 2; VAR_6 < VAR_8->num_entries; VAR_6++, VAR_7++) {
  if (VAR_9->fs_func->get_entry_type(VAR_7) == VAR_1)
   FUNC_1((struct name_dentry_t *)
        VAR_7, VAR_5, VAR_6);
  else
   goto out;
  VAR_5 += 15;
 }

out:
 FUNC_3(VAR_8);
}
