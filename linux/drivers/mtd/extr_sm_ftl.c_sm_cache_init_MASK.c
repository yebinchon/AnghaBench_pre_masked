
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int cache_data_invalid_bitmap; int cache_clean; int cache_zone; int cache_block; } ;



__attribute__((used)) static void FUNC_0(struct sm_ftl *VAR_0)
{
 VAR_0->cache_data_invalid_bitmap = 0xFFFFFFFF;
 VAR_0->cache_clean = 1;
 VAR_0->cache_zone = -1;
 VAR_0->cache_block = -1;

}
