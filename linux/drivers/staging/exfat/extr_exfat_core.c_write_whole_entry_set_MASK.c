
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct entry_set_cache_t {int num_entries; int offset; int sector; } ;
typedef int s32 ;


 int FUNC_0 (struct super_block*,struct entry_set_cache_t*,int ,int ,int ) ;

s32 FUNC_1(struct super_block *VAR_0, struct entry_set_cache_t *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1->sector,
          VAR_1->offset,
          VAR_1->num_entries);
}
