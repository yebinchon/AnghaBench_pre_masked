
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uni_name_t {int * name; } ;
struct super_block {int dummy; } ;
struct ext_dentry_t {int dummy; } ;
struct dos_name_t {int name; int name_case; } ;
struct dos_dentry_t {scalar_t__ name; int lcase; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 scalar_t__ FUNC_2 (struct super_block*,struct chain_t*,scalar_t__,int *) ;
 int FUNC_3 (struct ext_dentry_t*,int,int ,int *) ;
 int FUNC_4 (scalar_t__,int ,int ) ;

__attribute__((used)) static s32 FUNC_5(struct super_block *VAR_3, struct chain_t *VAR_4,
         s32 VAR_5, s32 VAR_6,
         struct uni_name_t *VAR_7,
         struct dos_name_t *VAR_8)
{
 int VAR_9;
 sector_t VAR_10;
 u8 VAR_11;
 u16 *VAR_12 = VAR_7->name;
 struct dos_dentry_t *VAR_13;
 struct ext_dentry_t *VAR_14;

 VAR_13 = (struct dos_dentry_t *)FUNC_2(VAR_3, VAR_4, VAR_5,
        &VAR_10);
 if (!VAR_13)
  return VAR_1;

 VAR_13->lcase = VAR_8->name_case;
 FUNC_4(VAR_13->name, VAR_8->name, VAR_0);
 FUNC_0(VAR_3, VAR_10);

 if ((--VAR_6) > 0) {
  VAR_11 = FUNC_1((void *)VAR_13->name,
          VAR_0, 0);

  for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
   VAR_14 = (struct ext_dentry_t *)FUNC_2(VAR_3,
          VAR_4,
          VAR_5 - VAR_9,
          &VAR_10);
   if (!VAR_14)
    return VAR_1;

   FUNC_3(VAR_14, VAR_9, VAR_11, VAR_12);
   FUNC_0(VAR_3, VAR_10);
   VAR_12 += 13;
  }

  VAR_14 = (struct ext_dentry_t *)FUNC_2(VAR_3, VAR_4,
         VAR_5 - VAR_9,
         &VAR_10);
  if (!VAR_14)
   return VAR_1;

  FUNC_3(VAR_14, VAR_9 + 0x40, VAR_11, VAR_12);
  FUNC_0(VAR_3, VAR_10);
 }

 return VAR_2;
}
