
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {TYPE_1__* fs_func; } ;
struct file_dentry_t {int num_ext; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dentry_t* FUNC_1 (struct super_block*,struct chain_t*,int,int *) ;
 scalar_t__ FUNC_2 (struct dentry_t*) ;

s32 FUNC_3(struct super_block *VAR_2, struct chain_t *VAR_3,
       s32 VAR_4, struct dentry_t *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 u32 VAR_8;
 struct file_dentry_t *VAR_9 = (struct file_dentry_t *)VAR_5;
 struct dentry_t *VAR_10;
 struct fs_info_t *VAR_11 = &(FUNC_0(VAR_2)->fs_info);

 for (VAR_6 = 0, VAR_4++; VAR_6 < VAR_9->num_ext; VAR_6++, VAR_4++) {
  VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0));
  if (!VAR_10)
   return -1;

  VAR_8 = VAR_11->fs_func->get_entry_type(VAR_10);
  if ((VAR_8 == VAR_0) || (VAR_8 == VAR_1))
   VAR_7++;
  else
   return VAR_7;
 }

 return VAR_7;
}
