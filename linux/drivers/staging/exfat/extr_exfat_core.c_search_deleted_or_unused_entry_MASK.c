
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct TYPE_6__ {scalar_t__ dir; scalar_t__ size; int flags; } ;
struct TYPE_7__ {scalar_t__ dir; int entry; TYPE_2__ clu; } ;
struct fs_info_t {int dentries_in_root; int dentries_per_clu; scalar_t__ vol_type; TYPE_3__ hint_uentry; TYPE_1__* fs_func; scalar_t__ dev_ejected; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; scalar_t__ size; int flags; } ;
typedef int s32 ;
struct TYPE_8__ {struct fs_info_t fs_info; } ;
struct TYPE_5__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dentry_t* FUNC_3 (struct super_block*,struct chain_t*,int,int *) ;
 scalar_t__ FUNC_4 (struct dentry_t*) ;

s32 FUNC_5(struct super_block *VAR_3,
       struct chain_t *VAR_4, s32 VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 s32 VAR_9;
 u32 VAR_10;
 struct chain_t VAR_11;
 struct dentry_t *VAR_12;
 struct fs_info_t *VAR_13 = &(FUNC_1(VAR_3)->fs_info);

 if (VAR_4->dir == FUNC_0(0))
  VAR_9 = VAR_13->dentries_in_root;
 else
  VAR_9 = VAR_13->dentries_per_clu;

 if (VAR_13->hint_uentry.dir == VAR_4->dir) {
  if (VAR_13->hint_uentry.entry == -1)
   return -1;

  VAR_11.dir = VAR_13->hint_uentry.clu.dir;
  VAR_11.size = VAR_13->hint_uentry.clu.size;
  VAR_11.flags = VAR_13->hint_uentry.clu.flags;

  VAR_7 = VAR_13->hint_uentry.entry;
 } else {
  VAR_13->hint_uentry.entry = -1;

  VAR_11.dir = VAR_4->dir;
  VAR_11.size = VAR_4->size;
  VAR_11.flags = VAR_4->flags;

  VAR_7 = 0;
 }

 while (VAR_11.dir != FUNC_0(~0)) {
  if (VAR_13->dev_ejected)
   break;

  if (VAR_4->dir == FUNC_0(0))
   VAR_6 = VAR_7 % VAR_9;
  else
   VAR_6 = VAR_7 & (VAR_9 - 1);

  for (; VAR_6 < VAR_9; VAR_6++, VAR_7++) {
   VAR_12 = FUNC_3(VAR_3, &VAR_11, VAR_6, ((void*)0));
   if (!VAR_12)
    return -1;

   VAR_10 = VAR_13->fs_func->get_entry_type(VAR_12);

   if (VAR_10 == VAR_2) {
    VAR_8++;
    if (VAR_13->hint_uentry.entry == -1) {
     VAR_13->hint_uentry.dir = VAR_4->dir;
     VAR_13->hint_uentry.entry = VAR_7;

     VAR_13->hint_uentry.clu.dir = VAR_11.dir;
     VAR_13->hint_uentry.clu.size = VAR_11.size;
     VAR_13->hint_uentry.clu.flags = VAR_11.flags;
    }
   } else if (VAR_10 == VAR_1) {
    VAR_8++;
   } else {
    VAR_8 = 0;
   }

   if (VAR_8 >= VAR_5) {
    VAR_13->hint_uentry.dir = FUNC_0(~0);
    VAR_13->hint_uentry.entry = -1;

    if (VAR_13->vol_type == VAR_0)
     return VAR_7 - (VAR_5 - 1);
    else
     return VAR_7;
   }
  }

  if (VAR_4->dir == FUNC_0(0))
   break;

  if (VAR_11.flags == 0x03) {
   if ((--VAR_11.size) > 0)
    VAR_11.dir++;
   else
    VAR_11.dir = FUNC_0(~0);
  } else {
   if (FUNC_2(VAR_3, VAR_11.dir, &VAR_11.dir) != 0)
    return -1;
  }
 }

 return -1;
}
