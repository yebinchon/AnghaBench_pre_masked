
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct uni_name_t {int* name; scalar_t__ name_hash; scalar_t__ name_len; } ;
struct super_block {int dummy; } ;
struct strm_dentry_t {scalar_t__ name_len; int name_hash; } ;
struct name_dentry_t {int dummy; } ;
struct TYPE_6__ {scalar_t__ dir; scalar_t__ size; int flags; } ;
struct TYPE_7__ {scalar_t__ dir; int entry; TYPE_2__ clu; } ;
struct fs_info_t {scalar_t__ root_dir; int dentries_in_root; int dentries_per_clu; TYPE_3__ hint_uentry; TYPE_1__* fs_func; scalar_t__ dev_ejected; } ;
struct file_dentry_t {int num_ext; } ;
struct dos_name_t {int dummy; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; scalar_t__ size; int flags; } ;
typedef int s32 ;
struct TYPE_8__ {struct fs_info_t fs_info; } ;
struct TYPE_5__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct name_dentry_t*,int*,int) ;
 struct dentry_t* FUNC_5 (struct super_block*,struct chain_t*,int,int *) ;
 scalar_t__ FUNC_6 (struct super_block*,int*,int*) ;
 scalar_t__ FUNC_7 (struct dentry_t*) ;

s32 FUNC_8(struct super_block *VAR_9, struct chain_t *VAR_10,
    struct uni_name_t *VAR_11, s32 VAR_12,
    struct dos_name_t *VAR_13, u32 VAR_14)
{
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18, VAR_19;
 s32 VAR_20 = 0;
 bool VAR_21 = 0;
 s32 VAR_22, VAR_23 = 0;
 u32 VAR_24;
 u16 VAR_25[16], *VAR_26 = ((void*)0), VAR_27;
 struct chain_t VAR_28;
 struct dentry_t *VAR_29;
 struct file_dentry_t *VAR_30;
 struct strm_dentry_t *VAR_31;
 struct name_dentry_t *VAR_32;
 struct fs_info_t *VAR_33 = &(FUNC_1(VAR_9)->fs_info);

 if (VAR_10->dir == VAR_33->root_dir) {
  if ((!FUNC_6(VAR_9, VAR_11->name,
          (u16 *)VAR_7)) ||
   (!FUNC_6(VAR_9, VAR_11->name,
       (u16 *)VAR_8)))
   return -1;
 }

 if (VAR_10->dir == FUNC_0(0))
  VAR_22 = VAR_33->dentries_in_root;
 else
  VAR_22 = VAR_33->dentries_per_clu;

 VAR_28.dir = VAR_10->dir;
 VAR_28.size = VAR_10->size;
 VAR_28.flags = VAR_10->flags;

 VAR_33->hint_uentry.dir = VAR_10->dir;
 VAR_33->hint_uentry.entry = -1;

 while (VAR_28.dir != FUNC_0(~0)) {
  if (VAR_33->dev_ejected)
   break;

  while (VAR_15 < VAR_22) {
   VAR_29 = FUNC_5(VAR_9, &VAR_28, VAR_15, ((void*)0));
   if (!VAR_29)
    return -2;

   VAR_24 = VAR_33->fs_func->get_entry_type(VAR_29);
   VAR_19 = 1;

   if ((VAR_24 == VAR_6) || (VAR_24 == VAR_1)) {
    VAR_21 = 0;

    if (VAR_33->hint_uentry.entry == -1) {
     VAR_23++;

     if (VAR_23 == 1) {
      VAR_33->hint_uentry.clu.dir = VAR_28.dir;
      VAR_33->hint_uentry.clu.size = VAR_28.size;
      VAR_33->hint_uentry.clu.flags = VAR_28.flags;
     }
     if ((VAR_23 >= VAR_12) || (VAR_24 == VAR_6))
      VAR_33->hint_uentry.entry = VAR_16 - (VAR_23 - 1);
    }

    if (VAR_24 == VAR_6)
     return -2;
   } else {
    VAR_23 = 0;

    if ((VAR_24 == VAR_4) || (VAR_24 == VAR_2)) {
     VAR_30 = (struct file_dentry_t *)VAR_29;
     if ((VAR_14 == VAR_0) || (VAR_14 == VAR_24)) {
      VAR_17 = VAR_30->num_ext;
      VAR_21 = 1;
     } else {
      VAR_21 = 0;
      VAR_19 = VAR_30->num_ext + 1;
     }
    } else if (VAR_24 == VAR_5) {
     if (VAR_21) {
      VAR_31 = (struct strm_dentry_t *)VAR_29;
      if (VAR_11->name_hash == FUNC_3(VAR_31->name_hash) &&
          VAR_11->name_len == VAR_31->name_len) {
       VAR_20 = 1;
      } else {
       VAR_21 = 0;
       VAR_19 = VAR_17;
      }
     }
    } else if (VAR_24 == VAR_3) {
     if (VAR_21) {
      VAR_32 = (struct name_dentry_t *)VAR_29;

      if ((++VAR_20) == 2)
       VAR_26 = VAR_11->name;
      else
       VAR_26 += 15;

      VAR_18 = FUNC_4(VAR_32,
        VAR_25, VAR_20);

      VAR_27 = *(VAR_26 + VAR_18);
      *(VAR_26 + VAR_18) = 0x0;

      if (FUNC_6(VAR_9, VAR_26, VAR_25)) {
       VAR_21 = 0;
       VAR_19 = VAR_17 - VAR_20 + 1;
      } else if (VAR_20 == VAR_17) {
       VAR_33->hint_uentry.dir = FUNC_0(~0);
       VAR_33->hint_uentry.entry = -1;
       return VAR_16 - (VAR_17);
      }

      *(VAR_26 + VAR_18) = VAR_27;
     }
    } else {
     VAR_21 = 0;
    }
   }

   VAR_15 += VAR_19;
   VAR_16 += VAR_19;
  }

  VAR_15 -= VAR_22;

  if (VAR_10->dir == FUNC_0(0))
   break;

  if (VAR_28.flags == 0x03) {
   if ((--VAR_28.size) > 0)
    VAR_28.dir++;
   else
    VAR_28.dir = FUNC_0(~0);
  } else {
   if (FUNC_2(VAR_9, VAR_28.dir, &VAR_28.dir) != 0)
    return -2;
  }
 }

 return -2;
}
