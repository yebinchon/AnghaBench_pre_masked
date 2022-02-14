
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int dentries_in_root; int dentries_per_clu; TYPE_1__* fs_func; scalar_t__ dev_ejected; } ;
struct dos_name_t {int name; } ;
struct dos_dentry_t {char* name; } ;
struct dentry_t {int dummy; } ;
struct chain_t {scalar_t__ dir; int flags; } ;
typedef int s32 ;
typedef int bmap ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {scalar_t__ (* get_entry_type ) (struct dentry_t*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (int*,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct super_block*,struct chain_t*,int,int *) ;
 int FUNC_7 (int*,int ,int) ;
 scalar_t__ FUNC_8 (struct dentry_t*) ;

s32 FUNC_9(struct super_block *VAR_6, struct chain_t *VAR_7,
     struct dos_name_t *VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0;
 bool VAR_12 = 0;
 s32 VAR_13;
 u32 VAR_14;
 u8 VAR_15[128 ];
 struct chain_t VAR_16;
 struct dos_dentry_t *VAR_17;
 struct fs_info_t *VAR_18 = &(FUNC_1(VAR_6)->fs_info);

 FUNC_7(VAR_15, 0, sizeof(VAR_15));
 FUNC_3(VAR_15, 0);

 if (VAR_7->dir == FUNC_0(0))
  VAR_13 = VAR_18->dentries_in_root;
 else
  VAR_13 = VAR_18->dentries_per_clu;

 VAR_16.dir = VAR_7->dir;
 VAR_16.flags = VAR_7->flags;

 while (VAR_16.dir != FUNC_0(~0)) {
  if (VAR_18->dev_ejected)
   break;

  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
   VAR_17 = (struct dos_dentry_t *)FUNC_6(VAR_6, &VAR_16,
             VAR_9, ((void*)0));
   if (!VAR_17)
    return VAR_1;

   VAR_14 = VAR_18->fs_func->get_entry_type((struct dentry_t *)
            VAR_17);

   if (VAR_14 == VAR_5)
    break;
   if ((VAR_14 != VAR_4) && (VAR_14 != VAR_3))
    continue;

   VAR_11 = 0;
   VAR_12 = 0;

   for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
    if (VAR_17->name[VAR_10] == ' ')
     break;

    if (VAR_17->name[VAR_10] == '~') {
     VAR_12 = 1;
    } else if (VAR_12) {
     if ((VAR_17->name[VAR_10] >= '0') &&
         (VAR_17->name[VAR_10] <= '9')) {
      VAR_11 = VAR_11 * 10 +
       (VAR_17->name[VAR_10] - '0');
     } else {
      VAR_11 = 0;
      VAR_12 = 0;
     }
    }
   }

   if ((VAR_11 > 0) && (VAR_11 < 1024))
    FUNC_3(VAR_15, VAR_11);
  }

  if (VAR_7->dir == FUNC_0(0))
   break;

  if (FUNC_2(VAR_6, VAR_16.dir, &VAR_16.dir) != 0)
   return VAR_1;
 }

 VAR_11 = 0;
 for (VAR_9 = 0; VAR_9 < 128; VAR_9++) {
  if (VAR_15[VAR_9] != 0xFF) {
   for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
    if (FUNC_4(&VAR_15[VAR_9], VAR_10) == 0) {
     VAR_11 = (VAR_9 << 3) + VAR_10;
     break;
    }
   }
   if (VAR_11 != 0)
    break;
  }
 }

 if ((VAR_11 == 0) || (VAR_11 >= 1024))
  return VAR_0;
 FUNC_5(VAR_8->name, VAR_11);


 return VAR_2;
}
