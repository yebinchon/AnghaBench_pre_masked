
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_info_t {int sectors_per_clu_bits; scalar_t__ drv; struct buf_cache_t* FAT_cache_hash_list; } ;
struct buf_cache_t {scalar_t__ drv; int sec; int buf_bh; struct buf_cache_t* hash_next; } ;
typedef int sector_t ;
typedef size_t s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct buf_cache_t *FUNC_3(struct super_block *VAR_1, sector_t VAR_2)
{
 s32 VAR_3;
 struct buf_cache_t *VAR_4, *VAR_5;
 struct fs_info_t *VAR_6 = &(FUNC_0(VAR_1)->fs_info);

 VAR_3 = (VAR_2 +
        (VAR_2 >> VAR_6->sectors_per_clu_bits)) & (VAR_0 - 1);

 VAR_5 = &VAR_6->FAT_cache_hash_list[VAR_3];
 for (VAR_4 = VAR_5->hash_next; VAR_4 != VAR_5; VAR_4 = VAR_4->hash_next) {
  if ((VAR_4->drv == VAR_6->drv) && (VAR_4->sec == VAR_2)) {
   FUNC_1(!VAR_4->buf_bh,
        "[EXFAT] FAT_cache has no bh. It will make system panic.\n");

   FUNC_2(VAR_4->buf_bh);
   return VAR_4;
  }
 }
 return ((void*)0);
}
