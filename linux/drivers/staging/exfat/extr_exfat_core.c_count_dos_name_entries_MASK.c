
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int dentries_in_root; int dentries_per_clu; TYPE_1__* fs_func; scalar_t__ dev_ejected; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; scalar_t__ size; int flags; } ;
typedef int s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dentry_t* FUNC_3 (struct super_block*,struct chain_t*,int,int *) ;
 scalar_t__ FUNC_4 (struct dentry_t*) ;

s32 FUNC_5(struct super_block *VAR_4, struct chain_t *VAR_5,
      u32 VAR_6)
{
 int VAR_7, VAR_8 = 0;
 s32 VAR_9;
 u32 VAR_10;
 struct chain_t VAR_11;
 struct dentry_t *VAR_12;
 struct fs_info_t *VAR_13 = &(FUNC_1(VAR_4)->fs_info);

 if (VAR_5->dir == FUNC_0(0))
  VAR_9 = VAR_13->dentries_in_root;
 else
  VAR_9 = VAR_13->dentries_per_clu;

 VAR_11.dir = VAR_5->dir;
 VAR_11.size = VAR_5->size;
 VAR_11.flags = VAR_5->flags;

 while (VAR_11.dir != FUNC_0(~0)) {
  if (VAR_13->dev_ejected)
   break;

  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   VAR_12 = FUNC_3(VAR_4, &VAR_11, VAR_7, ((void*)0));
   if (!VAR_12)
    return -1;

   VAR_10 = VAR_13->fs_func->get_entry_type(VAR_12);

   if (VAR_10 == VAR_3)
    return VAR_8;
   if (!(VAR_6 & VAR_2) &&
       !(VAR_6 & VAR_1))
    continue;

   if ((VAR_6 == VAR_0) || (VAR_6 == VAR_10))
    VAR_8++;
  }

  if (VAR_5->dir == FUNC_0(0))
   break;

  if (VAR_11.flags == 0x03) {
   if ((--VAR_11.size) > 0)
    VAR_11.dir++;
   else
    VAR_11.dir = FUNC_0(~0);
  } else {
   if (FUNC_2(VAR_4, VAR_11.dir, &VAR_11.dir) != 0)
    return -1;
  }
 }

 return VAR_8;
}
