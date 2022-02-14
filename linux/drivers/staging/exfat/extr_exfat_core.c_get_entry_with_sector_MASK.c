
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct super_block {int dummy; } ;
struct dentry_t {int dummy; } ;
typedef int sector_t ;
typedef int s32 ;


 int * FUNC_0 (struct super_block*,int ) ;

struct dentry_t *FUNC_1(struct super_block *VAR_0, sector_t VAR_1,
           s32 VAR_2)
{
 u8 *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_3)
  return ((void*)0);

 return (struct dentry_t *)(VAR_3 + VAR_2);
}
