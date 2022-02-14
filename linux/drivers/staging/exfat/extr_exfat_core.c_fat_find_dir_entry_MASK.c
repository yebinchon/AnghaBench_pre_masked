
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct uni_name_t {int* name; } ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ root_dir; int dentries_in_root; int dentries_per_clu; TYPE_1__* fs_func; scalar_t__ dev_ejected; } ;
struct ext_dentry_t {int order; } ;
struct dos_name_t {int name; } ;
struct dos_dentry_t {int name; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int flags; } ;
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct ext_dentry_t*,int*,int) ;
 struct dentry_t* FUNC_4 (struct super_block*,struct chain_t*,int,int *) ;
 int FUNC_5 (struct super_block*,int ,int ) ;
 scalar_t__ FUNC_6 (struct super_block*,int*,int*) ;
 scalar_t__ FUNC_7 (struct dentry_t*) ;

s32 FUNC_8(struct super_block *VAR_7, struct chain_t *VAR_8,
         struct uni_name_t *VAR_9, s32 VAR_10,
         struct dos_name_t *VAR_11, u32 VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15;
 s32 VAR_16 = 0;
 bool VAR_17 = 1, VAR_18 = 0;
 s32 VAR_19;
 u32 VAR_20;
 u16 VAR_21[14], *VAR_22 = ((void*)0), VAR_23;
 struct chain_t VAR_24;
 struct dentry_t *VAR_25;
 struct dos_dentry_t *VAR_26;
 struct ext_dentry_t *VAR_27;
 struct fs_info_t *VAR_28 = &(FUNC_1(VAR_7)->fs_info);

 if (VAR_8->dir == VAR_28->root_dir) {
  if ((!FUNC_6(VAR_7, VAR_9->name,
          (u16 *)VAR_5)) ||
   (!FUNC_6(VAR_7, VAR_9->name,
       (u16 *)VAR_6)))
   return -1;
 }

 if (VAR_8->dir == FUNC_0(0))
  VAR_19 = VAR_28->dentries_in_root;
 else
  VAR_19 = VAR_28->dentries_per_clu;

 VAR_24.dir = VAR_8->dir;
 VAR_24.flags = VAR_8->flags;

 while (VAR_24.dir != FUNC_0(~0)) {
  if (VAR_28->dev_ejected)
   break;

  for (VAR_13 = 0; VAR_13 < VAR_19; VAR_13++, VAR_14++) {
   VAR_25 = FUNC_4(VAR_7, &VAR_24, VAR_13, ((void*)0));
   if (!VAR_25)
    return -2;

   VAR_20 = VAR_28->fs_func->get_entry_type(VAR_25);

   if ((VAR_20 == VAR_3) || (VAR_20 == VAR_1)) {
    if ((VAR_12 == VAR_0) || (VAR_12 == VAR_20)) {
     if (VAR_17 && VAR_18)
      return VAR_14;

     VAR_26 = (struct dos_dentry_t *)VAR_25;
     if (!FUNC_5(VAR_7, VAR_11->name, VAR_26->name))
      return VAR_14;
    }
    VAR_17 = 1;
    VAR_18 = 0;
   } else if (VAR_20 == VAR_2) {
    if (VAR_17) {
     VAR_27 = (struct ext_dentry_t *)VAR_25;
     if (VAR_27->order > 0x40) {
      VAR_16 = (s32)(VAR_27->order - 0x40);
      VAR_22 = VAR_9->name + 13 * (VAR_16 - 1);
     } else {
      VAR_16 = (s32)VAR_27->order;
      VAR_22 -= 13;
     }

     VAR_15 = FUNC_3(VAR_27, VAR_21, VAR_16);

     VAR_23 = *(VAR_22 + VAR_15);
     *(VAR_22 + VAR_15) = 0x0;

     if (FUNC_6(VAR_7, VAR_22, VAR_21))
      VAR_17 = 0;

     *(VAR_22 + VAR_15) = VAR_23;
    }
    VAR_18 = 1;
   } else if (VAR_20 == VAR_4) {
    return -2;
   }
   VAR_17 = 1;
   VAR_18 = 0;
  }

  if (VAR_8->dir == FUNC_0(0))
   break;

  if (FUNC_2(VAR_7, VAR_24.dir, &VAR_24.dir) != 0)
   return -2;
 }

 return -2;
}
