
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uni_name_t {int dummy; } ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ vol_type; TYPE_1__* fs_func; } ;
struct dos_name_t {int name_case; scalar_t__ name; } ;
struct chain_t {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {int (* calc_num_entries ) (struct uni_name_t*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct super_block*,struct chain_t*,struct dos_name_t*) ;
 int FUNC_2 (struct super_block*,struct dos_name_t*,struct uni_name_t*,int*) ;
 char** VAR_3 ;
 int FUNC_3 (void*,char*,int) ;
 int FUNC_4 (struct uni_name_t*) ;

s32 FUNC_5(struct super_block *VAR_4, struct chain_t *VAR_5,
     struct uni_name_t *VAR_6, s32 *VAR_7,
     struct dos_name_t *VAR_8)
{
 s32 VAR_9, VAR_10;
 bool VAR_11 = 0;
 char **VAR_12;
 struct fs_info_t *VAR_13 = &(FUNC_0(VAR_4)->fs_info);

 VAR_10 = VAR_13->fs_func->calc_num_entries(VAR_6);
 if (VAR_10 == 0)
  return VAR_1;

 if (VAR_13->vol_type != VAR_0) {
  FUNC_2(VAR_4, VAR_8, VAR_6, &VAR_11);

  if (VAR_11) {
   VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_8);
   if (VAR_9)
    return VAR_9;
  } else {
   for (VAR_12 = VAR_3; *VAR_12; VAR_12++) {
    if (!FUNC_3((void *)VAR_8->name, *VAR_12, 8))
     return VAR_1;
   }

   if (VAR_8->name_case != 0xFF)
    VAR_10 = 1;
  }

  if (VAR_10 > 1)
   VAR_8->name_case = 0x0;
 }

 *VAR_7 = VAR_10;

 return VAR_2;
}
