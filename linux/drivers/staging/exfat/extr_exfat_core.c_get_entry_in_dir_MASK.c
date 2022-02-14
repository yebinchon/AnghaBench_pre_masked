
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct super_block {int dummy; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct super_block*,int ) ;
 scalar_t__ FUNC_1 (struct super_block*,struct chain_t*,int,int *,int*) ;

struct dentry_t *FUNC_2(struct super_block *VAR_1, struct chain_t *VAR_2,
      s32 VAR_3, sector_t *VAR_4)
{
 s32 VAR_5;
 sector_t VAR_6;
 u8 *VAR_7;

 if (FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_6, &VAR_5) != VAR_0)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_1, VAR_6);

 if (!VAR_7)
  return ((void*)0);

 if (VAR_4)
  *VAR_4 = VAR_6;
 return (struct dentry_t *)(VAR_7 + VAR_5);
}
