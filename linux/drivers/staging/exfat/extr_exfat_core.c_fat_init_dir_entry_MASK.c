
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct dos_dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,int ) ;
 scalar_t__ FUNC_1 (struct super_block*,struct chain_t*,int ,int *) ;
 int FUNC_2 (struct dos_dentry_t*,int ,int ) ;

s32 FUNC_3(struct super_block *VAR_2, struct chain_t *VAR_3, s32 VAR_4,
         u32 VAR_5, u32 VAR_6, u64 VAR_7)
{
 sector_t VAR_8;
 struct dos_dentry_t *VAR_9;

 VAR_9 = (struct dos_dentry_t *)FUNC_1(VAR_2, VAR_3, VAR_4,
        &VAR_8);
 if (!VAR_9)
  return VAR_0;

 FUNC_2(VAR_9, VAR_5, VAR_6);
 FUNC_0(VAR_2, VAR_8);

 return VAR_1;
}
