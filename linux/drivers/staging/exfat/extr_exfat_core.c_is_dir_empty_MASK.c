
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int dentries_in_root; int dentries_per_clu; scalar_t__ vol_type; scalar_t__ root_dir; TYPE_1__* fs_func; scalar_t__ dev_ejected; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; scalar_t__ size; int flags; } ;
typedef int s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dentry_t* FUNC_3 (struct super_block*,struct chain_t*,int,int *) ;
 scalar_t__ FUNC_4 (struct dentry_t*) ;

bool FUNC_5(struct super_block *VAR_4, struct chain_t *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 s32 VAR_8;
 u32 VAR_9;
 struct chain_t VAR_10;
 struct dentry_t *VAR_11;
 struct fs_info_t *VAR_12 = &(FUNC_1(VAR_4)->fs_info);

 if (VAR_5->dir == FUNC_0(0))
  VAR_8 = VAR_12->dentries_in_root;
 else
  VAR_8 = VAR_12->dentries_per_clu;

 VAR_10.dir = VAR_5->dir;
 VAR_10.size = VAR_5->size;
 VAR_10.flags = VAR_5->flags;

 while (VAR_10.dir != FUNC_0(~0)) {
  if (VAR_12->dev_ejected)
   break;

  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   VAR_11 = FUNC_3(VAR_4, &VAR_10, VAR_6, ((void*)0));
   if (!VAR_11)
    break;

   VAR_9 = VAR_12->fs_func->get_entry_type(VAR_11);

   if (VAR_9 == VAR_3)
    return 1;
   if ((VAR_9 != VAR_2) && (VAR_9 != VAR_1))
    continue;

   if (VAR_5->dir == FUNC_0(0))
    return 0;

   if (VAR_12->vol_type == VAR_0)
    return 0;
   if ((VAR_5->dir == VAR_12->root_dir) || ((++VAR_7) > 2))
    return 0;
  }

  if (VAR_5->dir == FUNC_0(0))
   break;

  if (VAR_10.flags == 0x03) {
   if ((--VAR_10.size) > 0)
    VAR_10.dir++;
   else
    VAR_10.dir = FUNC_0(~0);
  }
  if (FUNC_2(VAR_4, VAR_10.dir, &VAR_10.dir) != 0)
   break;
 }

 return 1;
}
