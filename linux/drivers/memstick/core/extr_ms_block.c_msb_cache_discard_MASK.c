
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {scalar_t__ cache_block_lba; int pages_in_block; int valid_cache_bitmap; int cache_flush_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct msb_data *VAR_1)
{
 if (VAR_1->cache_block_lba == VAR_0)
  return;

 FUNC_2(&VAR_1->cache_flush_timer);

 FUNC_1("Discarding the write cache");
 VAR_1->cache_block_lba = VAR_0;
 FUNC_0(&VAR_1->valid_cache_bitmap, VAR_1->pages_in_block);
}
